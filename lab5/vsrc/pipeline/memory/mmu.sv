`ifndef MMU_SV
`define MMU_SV

`include "include/common.sv"
`include "include/config.sv"
`include "include/csr.sv"

module mmu 
    import common::*;
    import config_pkg::*;
    import csr_pkg::*;
(
    input logic clk, reset,
    input logic [1:0] privilege_mode,
    input satp_t satp,
    output dbus_req_t dreq, // into cbus
    input dbus_req_t mmu_dreq, //origin request
    output ibus_req_t ireq, // into cbus
    input ibus_req_t mmu_ireq, //origin request
    output logic mmu_page_fault,

    input dbus_resp_t dresp, // from cbus
    input ibus_resp_t iresp, // from cbus
    output dbus_resp_t mmu_dresp, //reponse to origin request
    output ibus_resp_t mmu_iresp //response to origin request
);

    typedef enum logic [2:0] {
        IDLE,
        LEVEL1,
        LEVEL2,
        LEVEL3,
        FINISH
    } mmu_state_t;

    mmu_state_t state, state_next;

    // Translation registers
    logic [63:0] vaddr_reg;
    logic [63:0] pte_reg[3];
    logic is_fetch;

    // Control signals;
    logic        m_mode_direct;
    u64          pte_addr_reg;
    logic [63:0] paddr_reg;


    assign m_mode_direct = (privilege_mode == PRIVILEGE_M_MODE);

    // cbus response management
    always_comb begin
        // 非M模式时寄存响应
        mmu_dresp = dresp;
        mmu_iresp = iresp;

        if (~m_mode_direct) begin
            if (state == FINISH) begin
                if (is_fetch) begin
                    mmu_iresp = iresp;
                end else begin
                    mmu_dresp = dresp;
                end
            end
        end
        else begin
            // M模式透传
            mmu_iresp = iresp;
            mmu_dresp = dresp;
        end
    end

    // cbus request management
    always_ff@(posedge clk) begin

        
        
        if (m_mode_direct) begin
            // ireq <= mmu_ireq;
            // dreq <= mmu_dreq;
            if(ireq.valid == 1'b0)begin
                ireq <= mmu_ireq;
            end
            else if (iresp.data_ok == 0)begin
                ireq <= ireq;
            end
            else begin
                ireq.addr <= ireq.addr;
                ireq.valid <= 1'b0;
            end

            if(dreq.valid == 1'b0)begin
                dreq <= mmu_dreq;
            end
            else if(dresp.data_ok == 0)begin
                dreq <= dreq;
            end
            else begin
                dreq <= dreq;
                dreq.valid <= 1'b0;
            end
        end

        case (state)
            LEVEL1, LEVEL2, LEVEL3: begin
                dreq <= '{valid: 1'b1, addr: pte_addr_reg, data: mmu_dreq.data, size: MSIZE8, strobe: '1};
            end
            FINISH: begin
                if(is_fetch)begin 
                    ireq <= '{valid: 1'b1, addr: paddr_reg};
                end
                if(~is_fetch)begin 
                    dreq <= '{
                        valid: 1'b1,
                        addr: paddr_reg,
                        data: mmu_dreq.data,
                        size: mmu_dreq.size,
                        strobe: mmu_dreq.strobe
                    };
                end
            end
            default: begin end
        endcase
    end

    // state machine behavior
    always_ff @(posedge clk) begin
        if (reset) begin
            state <= IDLE;
            vaddr_reg <= '0;
            foreach (pte_reg[i]) pte_reg[i] <= '0;
            is_fetch <= '0;
            paddr_reg <= '0;
        end else begin
            state <= state_next;

            case (state)
                IDLE: begin
                    if (~m_mode_direct && (mmu_dreq.valid || mmu_ireq.valid)) begin
                        vaddr_reg <= mmu_dreq.valid ? mmu_dreq.addr : mmu_ireq.addr;
                        is_fetch <= mmu_ireq.valid;
                    end
                end
                
                LEVEL1: begin
                    pte_addr_reg <= {8'b0, satp.ppn, 12'b0} + {52'b0, vaddr_reg[38:30], 3'b0};
                    
                    if (dresp.data_ok)begin
                        pte_reg[0] <= dresp.data;
                    end 
                end
                LEVEL2:begin
                    pte_addr_reg <= {8'b0, pte_reg[0][53:10], 12'b0} + {52'b0, vaddr_reg[29:21], 3'b0};
                    if(dresp.data_ok)begin
                        pte_reg[1] <= dresp.data;
                    end
                end
                
                LEVEL3: begin
                    pte_addr_reg <= {8'b0, pte_reg[1][53:10], 12'b0} + {52'b0, vaddr_reg[20:12], 3'b0};
                    if(dresp.data_ok)begin
                        pte_reg[2] <= dresp.data;
                    end
                end
                
                FINISH: begin
                    paddr_reg <= {8'b0, pte_reg[2][53:10], vaddr_reg[11:0]};
                end
                default: begin end
            endcase
        end
    end    

    // state machine next state logic
    always_comb begin
        state_next = state;
        case (state)
            IDLE: if (~m_mode_direct && (mmu_dreq.valid || mmu_ireq.valid))
                state_next = LEVEL1;
            
            LEVEL1: begin
                if (dresp.data_ok) begin
                    state_next = LEVEL2;
                end
            end
            
            LEVEL2: begin
                if (dresp.data_ok) begin
                    state_next = LEVEL3;
                end
            end
            
            LEVEL3: begin
                if (dresp.data_ok) begin
                    state_next = FINISH;
                end
            end
            
            FINISH: begin
                if ((is_fetch ? iresp.data_ok : dresp.data_ok))
                    state_next = IDLE;
            end
            
            default: state_next = IDLE;
        endcase
    end

    // error detection
    u1 is_write;
    u1 perm_err;
    always_comb begin
        mmu_page_fault = 1'b0;
        if (state == FINISH) begin
            is_write = mmu_dreq.valid & (|mmu_dreq.strobe);
            perm_err = 1'b0;
            
            case (privilege_mode)
                PRIVILEGE_S_MODE: 
                    if (is_write & ~pte_reg[2][2]) perm_err = 1'b1;
                    else if (is_fetch & ~pte_reg[2][3]) perm_err = 1'b1;
                    else if (~pte_reg[2][4] & pte_reg[2][3]) perm_err = 1'b1;
                
                PRIVILEGE_U_MODE:
                    if (~pte_reg[2][4]) perm_err = 1'b1;
                default: begin end
            endcase
            
            mmu_page_fault = perm_err | (paddr_reg[63:40] != 24'h0); // 物理地址范围检查
        end
    end

endmodule

`endif
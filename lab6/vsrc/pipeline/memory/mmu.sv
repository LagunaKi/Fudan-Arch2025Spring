// `ifndef MMU_SV
// `define MMU_SV
`ifdef VERILATOR
`include "include/common.sv"
`include "include/config.sv"
`include "include/csr.sv"
`else

`endif
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


    assign m_mode_direct = (privilege_mode == PRIVILEGE_M_MODE);

    always_comb begin
        vaddr_reg = '0;
        if(reset)begin
            vaddr_reg = '0;
        end
        else if (~m_mode_direct && (mmu_dreq.valid || mmu_ireq.valid)) begin
            vaddr_reg = mmu_dreq.valid ? mmu_dreq.addr : mmu_ireq.addr;
        end
    end

    // cbus response management
    always_comb begin
        if(reset)begin 
            mmu_dresp = '0;
            mmu_iresp = '0;
        end
        // 非M模式时寄存响应
        else if (~m_mode_direct) begin
            mmu_dresp = 0;
            mmu_iresp = 0;
            if (state == FINISH) begin
                if (is_fetch & iresp.data_ok) begin
                    mmu_iresp = iresp;
                end
                else if (dresp.data_ok) begin
                    mmu_dresp = dresp;
                end
            end
        end
        else begin
            // M模式透传
            mmu_iresp = iresp.data_ok? iresp : 0;
            mmu_dresp = dresp.data_ok ? dresp : 0;
        end
    end

    // cbus request management
    always_ff@(posedge clk) begin
        if(reset)begin
            ireq <= '0;
            dreq <= '0;
        end

        else if (m_mode_direct) begin
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

        else begin
            case (state)
                LEVEL1: begin
                    if (dreq.valid == 1'b0) begin
                        dreq <= '{valid: 1'b1, addr: {8'b0, satp.ppn, vaddr_reg[38:30], 3'b0}, data: mmu_dreq.data, size: MSIZE8, strobe: '0};
                    end
                    else if (dresp.data_ok == 0) begin
                        dreq <= dreq;
                    end
                    else begin
                        dreq.valid <= 1'b0;
                    end

                end
                LEVEL2: begin
                    if (dreq.valid == 1'b0) begin
                        dreq <= '{valid: 1'b1, addr: {8'b0, pte_reg[0][53:10], vaddr_reg[29:21], 3'b0}, data: mmu_dreq.data, size: MSIZE8, strobe: '0};
                    end
                    else if (dresp.data_ok == 0) begin
                        dreq <= dreq;
                    end
                    else begin
                        dreq.valid <= 1'b0;
                    end
                end
                LEVEL3:begin
                    if (dreq.valid == 1'b0) begin
                        dreq <= '{valid: 1'b1, addr: {8'b0, pte_reg[1][53:10], vaddr_reg[20:12], 3'b0}, data: mmu_dreq.data, size: MSIZE8, strobe: '0};
                    end
                    else if (dresp.data_ok == 0) begin
                        dreq <= dreq;
                    end
                    else begin
                        dreq.valid <= 1'b0;
                    end
                end
                FINISH: begin
                    if(is_fetch)begin 
                        if(ireq.valid == 1'b0)begin
                            ireq <= '{valid: 1'b1, addr: {8'b0, pte_reg[2][53:10], vaddr_reg[11:0]}};
                        end
                        else if (iresp.data_ok == 0)begin
                            ireq <= ireq;
                        end
                        else begin
                            ireq.valid <= 1'b0;
                        end
                    end
                    if(~is_fetch)begin 
                        
                        if(dreq.valid == 1'b0)begin
                            dreq <= '{
                                valid: 1'b1,
                                addr: {8'b0, pte_reg[2][53:10], vaddr_reg[11:0]},
                                data: mmu_dreq.data,
                                size: mmu_dreq.size,
                                strobe: mmu_dreq.strobe
                            };
                        end
                        else if (dresp.data_ok == 0)begin
                            dreq <= dreq;
                        end
                        else begin
                            dreq.valid <= 1'b0;
                        end
                    end
                end
                default: begin end
            endcase
        end
    end

    // state machine behavior
    always_ff @(posedge clk) begin
        if (reset) begin
            state <= IDLE;
            foreach (pte_reg[i]) pte_reg[i] <= '0;
            is_fetch <= '0;
        end else begin
            state <= state_next;

            case (state)
                IDLE: begin
                    if (~m_mode_direct && (mmu_dreq.valid || mmu_ireq.valid)) begin
                        is_fetch <= mmu_ireq.valid;
                    end
                end
                
                LEVEL1: begin    
                    if (dresp.data_ok)begin
                        pte_reg[0] <= dresp.data;
                    end 
                end
                LEVEL2:begin
                    if(dresp.data_ok)begin
                        pte_reg[1] <= dresp.data;
                    end
                end
                
                LEVEL3: begin
                    if(dresp.data_ok)begin
                        pte_reg[2] <= dresp.data;
                    end
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
                if (m_mode_direct) begin
                    state_next = IDLE;
                end
            end
            
            LEVEL2: begin
                if (dresp.data_ok) begin
                    state_next = LEVEL3;
                end
                if (m_mode_direct) begin
                    state_next = IDLE;
                end
            end
            
            LEVEL3: begin
                if (dresp.data_ok) begin
                    state_next = FINISH;
                end
                if (m_mode_direct) begin
                    state_next = IDLE;
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
            
            mmu_page_fault = perm_err;
        end
    end

endmodule

// `endif
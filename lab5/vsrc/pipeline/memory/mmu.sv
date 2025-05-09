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

    // Control signals
    logic        ireq_sent; //if in request
    logic        dreq_sent;
    logic        m_mode_direct;
    u64          pte_addr_reg;
    logic [63:0] paddr_reg;

    // dbus_resp_t mmu_dresp_reg;
    // ibus_resp_t mmu_iresp_reg;

    // 关键修改1: 显式分离M模式透传逻辑
    assign m_mode_direct = (privilege_mode == PRIVILEGE_M_MODE);

    // 关键修改2: 简化响应直连路径
    // assign mmu_iresp = m_mode_direct ? iresp : mmu_iresp_reg;
    // assign mmu_dresp = m_mode_direct ? dresp : mmu_dresp_reg;


    always_comb begin
        // 非M模式时寄存响应
        // mmu_dresp_reg = '0;
        // mmu_iresp_reg = '0;
        mmu_dresp = dresp;
        mmu_iresp = iresp;

        if (~m_mode_direct) begin
            if (state == FINISH) begin
                if (is_fetch) begin
                    // mmu_iresp_reg = iresp;
                    mmu_iresp = iresp;
                end else begin
                    // mmu_dresp_reg = dresp;
                    mmu_dresp = dresp;
                end
            end
        end
        else begin
            // M模式透传
            // mmu_iresp_reg = iresp;
            // mmu_dresp_reg = dresp;
            mmu_iresp = iresp;
            mmu_dresp = dresp;
        end
    end

    // 关键修改3: 重构状态机转换逻辑
    always_ff @(posedge clk) begin
        if (reset) begin
            state <= IDLE;
            vaddr_reg <= '0;
            foreach (pte_reg[i]) pte_reg[i] <= '0;
            is_fetch <= '0;
            // {dreq, ireq} <= '0;
            // {mmu_dresp_reg, mmu_iresp_reg} <= '0;
            // ireq_sent <= '0;
            // dreq_sent <= '0;
            paddr_reg <= '0;
        end else begin
            state <= state_next;

            // 请求完成检测（统一处理）
            // if (dreq.valid && dresp.addr_ok) begin
            //     dreq.valid <= 1'b0;
            //     ireq_sent <= 1'b0;
            //     dreq_sent <= 1'b0;
            // end
            // if (ireq.valid && iresp.addr_ok) begin
            //     ireq.valid <= 1'b0;
            //     ireq_sent <= 1'b0;
            //     ireq_sent <= 1'b0;
            // end



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
                    // 关键修改4: 确保翻译后请求正确发出
                    // if(~ireq_sent & is_fetch)begin 
                    //     ireq <= '{valid: 1'b1, addr: paddr_reg};
                    //     ireq_sent <= 1'b1;
                    // end
                    // if(~dreq_sent & ~is_fetch)begin 
                    //     dreq <= '{
                    //         valid: 1'b1,
                    //         addr: paddr_reg,
                    //         data: mmu_dreq.data,
                    //         size: mmu_dreq.size,
                    //         strobe: mmu_dreq.strobe
                    //     };
                    //     dreq_sent <= 1'b1;
                    // end



                end
                default: begin end
            endcase
        end
    end

    // cbus request management
    always_comb begin
        dreq = '0;
        ireq = '0;
        ireq_sent = 1'b0;
        dreq_sent = 1'b0;
        if (dreq.valid && dresp.addr_ok) begin
            dreq.valid = 1'b0;
            ireq_sent = 1'b0;
            dreq_sent = 1'b0;
        end
        if (ireq.valid && iresp.addr_ok) begin
            ireq.valid = 1'b0;
            ireq_sent = 1'b0;
            ireq_sent = 1'b0;
        end
        if (m_mode_direct) begin
            // 指令请求直连
            if (mmu_ireq.valid & ~ireq.valid & ~ireq_sent) begin
                ireq = '{valid: 1'b1, addr: mmu_ireq.addr};
                ireq_sent = 1'b1;
            end
            
            // 数据请求直连
            if (mmu_dreq.valid & ~dreq.valid & ~dreq_sent) begin
                dreq = mmu_dreq;
                dreq_sent = 1'b1;
            end
        end
        case (state)
            LEVEL1, LEVEL2, LEVEL3: begin
                dreq = '{valid: 1'b1, addr: pte_addr_reg, data: mmu_dreq.data, size: MSIZE8, strobe: '1};
            end
            FINISH: begin
                if(~ireq_sent & is_fetch)begin 
                    ireq = '{valid: 1'b1, addr: paddr_reg};
                    ireq_sent = 1'b1;
                end
                if(~dreq_sent & ~is_fetch)begin 
                    dreq = '{
                        valid: 1'b1,
                        addr: paddr_reg,
                        data: mmu_dreq.data,
                        size: mmu_dreq.size,
                        strobe: mmu_dreq.strobe
                    };
                    dreq_sent = 1'b1;
                end
            end
            default: begin end
        endcase
    end
    

    // 关键修改5: 重构状态机转换条件
    always_comb begin
        state_next = state;
        case (state)
            IDLE: if (~m_mode_direct && (mmu_dreq.valid || mmu_ireq.valid))
                state_next = LEVEL1;
            
            LEVEL1: begin
                if (dresp.data_ok) begin
                    // if (~pte_reg[0][0]) state_next = IDLE; // Invalid PTE
                    // else if (pte_reg[0][1] | pte_reg[0][3] | pte_reg[0][4]) // Leaf?
                    //     state_next = FINISH;
                    // else state_next = LEVEL2;

                    state_next = LEVEL2;
                end
            end
            
            LEVEL2: begin
                if (dresp.data_ok) begin
                    // if (~pte_reg[1][0]) state_next = IDLE;
                    // else if (pte_reg[1][1] | pte_reg[1][3] | pte_reg[1][4])
                    //     state_next = FINISH;
                    // else state_next = LEVEL3;

                    state_next = LEVEL3;
                end
            end
            
            LEVEL3: begin
                if (dresp.data_ok) begin
                    // if (~pte_reg[2][0]) state_next = IDLE;
                    // else state_next = FINISH;
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

    // // 关键修改6: 重构M模式直连处理
    // always_ff@(posedge clk) begin
    //     if (m_mode_direct) begin
    //         // 指令请求直连
    //         if (mmu_ireq.valid & ~ireq.valid & ~ireq_sent) begin
    //             ireq <= '{valid: 1'b1, addr: mmu_ireq.addr};
    //             ireq_sent <= 1'b1;
    //         end
            
    //         // 数据请求直连
    //         if (mmu_dreq.valid & ~dreq.valid & ~dreq_sent) begin
    //             dreq <= mmu_dreq;
    //             dreq_sent <= 1'b1;
    //         end
    //     end
    // end

    // 关键修改7: 权限检查与故障生成
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
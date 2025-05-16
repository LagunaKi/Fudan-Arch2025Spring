
`ifdef VERILATOR
`include "include/common.sv"
`include "include/csr.sv"
`endif

module csr_regfile
    import common::*;
    import csr_pkg::*;
(
    input logic clk, reset,
    // Multi-register write port
    input  csr_ops_t csr_ops,  // {we, wa, wd} for 3 registers
    // Read port
    input u12 ra,
    output word_t rd,
    output word_t csr_mepc_nxt,
    output word_t csr_mtvec_nxt,
    output word_t csr_mstatus_nxt,
    output word_t csr_satp_nxt
);

    word_t mstatus, mstatus_nxt;
    word_t sstatus, sstatus_nxt;
    word_t mip, mip_nxt;
    word_t mie, mie_nxt;
    word_t mtvec, mtvec_nxt;
    word_t mepc, mepc_nxt;
    word_t mcause, mcause_nxt;
    word_t mtval, mtval_nxt;
    word_t mscratch, mscratch_nxt;
    word_t mhartid;
    word_t mcycle, mcycle_nxt;
    word_t satp, satp_nxt;

    word_t UNDEFINED_CSR;
    assign UNDEFINED_CSR = '0;
    assign mhartid = '0;
    assign csr_mepc_nxt = mepc_nxt;
    assign csr_mtvec_nxt = mtvec_nxt;
    assign csr_mstatus_nxt = mstatus_nxt;
    assign csr_satp_nxt = satp_nxt;



    always_comb begin
        unique case(ra)
            CSR_MSTATUS:  rd = mstatus;
            CSR_SSTATUS:  rd = sstatus;
            CSR_MIP:      rd = mip;
            CSR_MIE:      rd = mie;
            CSR_MTVEC:    rd = mtvec;
            CSR_MEPC:     rd = mepc;
            CSR_MCAUSE:   rd = mcause;
            CSR_MTVAL:    rd = mtval;
            CSR_MSCRATCH: rd = mscratch;
            CSR_MHARTID:  rd = mhartid;
            CSR_MCYCLE:   rd = mcycle;
            CSR_SATP:     rd = satp;
            default: begin
                rd = UNDEFINED_CSR;
            end
        endcase
    end

    // Write logic - combinational
    always_comb begin
        mstatus_nxt = mstatus;
        sstatus_nxt = sstatus;
        mip_nxt = mip;
        mie_nxt = mie;
        mtvec_nxt = mtvec;
        mepc_nxt = mepc;
        mcause_nxt = mcause;
        mtval_nxt = mtval;
        satp_nxt = satp;
        mscratch_nxt = mscratch;
        
        // Multi-register write
        for (int i = 2; i >= 0; i--) begin
            if (csr_ops[i].we) begin
                case(csr_ops[i].addr)
                    CSR_MSTATUS: begin
                        mstatus_nxt = (mstatus & ~MSTATUS_MASK) |
                                     (csr_ops[i].data & MSTATUS_MASK);
                    end
                    CSR_SSTATUS: begin
                        sstatus_nxt = (sstatus & ~SSTATUS_MASK) |
                                     (csr_ops[i].data & SSTATUS_MASK);
                    end
                    CSR_MIP: begin
                        mip_nxt = (mip & ~MIP_MASK) |
                                 (csr_ops[i].data & MIP_MASK);
                    end
                    CSR_MIE: begin
                        mie_nxt = csr_ops[i].data;
                    end
                    CSR_MTVEC: begin
                        mtvec_nxt = (mtvec & ~MTVEC_MASK) |
                                   (csr_ops[i].data & MTVEC_MASK);
                    end
                    CSR_MEPC:    mepc_nxt = csr_ops[i].data;
                    CSR_MCAUSE:  mcause_nxt = csr_ops[i].data;
                    CSR_MTVAL:   mtval_nxt = csr_ops[i].data;
                    CSR_MSCRATCH:mscratch_nxt = csr_ops[i].data;
                    CSR_SATP:    satp_nxt = csr_ops[i].data;
                    default: ;
                endcase
            end
        end
        
        // mcycle increments every cycle
        mcycle_nxt = mcycle + 64'd1;
    end

    // Update registers on clock edge
    always_ff @(posedge clk) begin
        if (reset) begin
            mstatus <= '0;
            sstatus <= '0;
            mip <= '0;
            mie <= '0;
            mtvec <= '0;
            mepc <= '0;
            mcause <= '0;
            mtval <= '0;
            mscratch <= '0;
            mcycle <= '0;
            satp <= '0;
        end else begin
            mstatus <= mstatus_nxt;
            sstatus <= sstatus_nxt;
            mip <= mip_nxt;
            mie <= mie_nxt;
            mtvec <= mtvec_nxt;
            mepc <= mepc_nxt;
            mcause <= mcause_nxt;
            mtval <= mtval_nxt;
            mcycle <= mcycle_nxt;
            satp <= satp_nxt;
            mscratch <= mscratch_nxt;
        end
    end

endmodule
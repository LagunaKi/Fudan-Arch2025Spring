`ifndef CSR_REGFILE_SV
`define CSR_REGFILE_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "include/csr.sv"
`endif

module csr_regfile
    import common::*;
    import csr_pkg::*;
(
    input logic clk, reset,
    // Write port
    input logic we,
    input u12 wa,
    input word_t wd,
    // Read port
    input u12 ra,
    output word_t rd
);

    word_t csr[2**12] /* verilator public_flat_rd */;
    word_t csr_nxt[2**12] /* verilator public_flat_rd */;

    assign rd = csr[ra];

    // Initialize CSR registers
    initial begin
        for(int i = 0; i < 2**12; i++) begin
            csr[i] = '0;
            csr_nxt[i] = '0;
        end
    end

    // Write logic - combinational
    always_comb begin
        for(int i = 0; i < 2**12; i++) begin
            csr_nxt[i] = csr[i];  // Capture current state
        end
        
        if(we) begin
            // Apply mask for protected CSRs
            case(wa)
                CSR_MSTATUS: csr_nxt[wa] = (csr[wa] & ~MSTATUS_MASK) | (wd & MSTATUS_MASK);
                CSR_SSTATUS: csr_nxt[wa] = (csr[wa] & ~SSTATUS_MASK) | (wd & SSTATUS_MASK);
                CSR_MIP:     csr_nxt[wa] = (csr[wa] & ~MIP_MASK) | (wd & MIP_MASK);
                CSR_MTVEC:   csr_nxt[wa] = (csr[wa] & ~MTVEC_MASK) | (wd & MTVEC_MASK);
                default:      csr_nxt[wa] = wd;  // No mask for other CSRs
            endcase
        end
        
        // mcycle increments every cycle
        csr_nxt[CSR_MCYCLE] = csr[CSR_MCYCLE] + 1;
        csr_nxt[CSR_MHARTID] = '0;
    end

    // Update registers on clock edge
    always_ff @(posedge clk) begin
        if(reset) begin
            csr[CSR_MSTATUS] <= '0;
            csr[CSR_MTVEC] <= '0;
            csr[CSR_MIP] <= '0;
            csr[CSR_MIE] <= '0;
            csr[CSR_MSCRATCH] <= '0;
            csr[CSR_MCAUSE] <= '0;
            csr[CSR_MTVAL] <= '0;
            csr[CSR_MEPC] <= '0;
            csr[CSR_MCYCLE] <= '0;
            csr[CSR_SATP] <= '0;
        end else begin
            csr <= csr_nxt;
        end
    end

endmodule
`endif

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
        
        // Multi-register write
        for (int i = 0; i < 3; i++) begin
            if (csr_ops[i].we) begin
                case(csr_ops[i].addr)
                    CSR_MSTATUS: csr_nxt[csr_ops[i].addr] = (csr[csr_ops[i].addr] & ~MSTATUS_MASK) | (csr_ops[i].data & MSTATUS_MASK);
                    CSR_SSTATUS: csr_nxt[csr_ops[i].addr] = (csr[csr_ops[i].addr] & ~SSTATUS_MASK) | (csr_ops[i].data & SSTATUS_MASK);
                    CSR_MIP:     csr_nxt[csr_ops[i].addr] = (csr[csr_ops[i].addr] & ~MIP_MASK) | (csr_ops[i].data & MIP_MASK);
                    CSR_MTVEC:   csr_nxt[csr_ops[i].addr] = (csr[csr_ops[i].addr] & ~MTVEC_MASK) | (csr_ops[i].data & MTVEC_MASK);
                    default:      csr_nxt[csr_ops[i].addr] = csr_ops[i].data;
                endcase
            end
        end
        
        // mcycle increments every cycle
        csr_nxt[CSR_MCYCLE] = csr[CSR_MCYCLE] + 1;
        csr_nxt[CSR_MHARTID] = '0;
    end

    // Update registers on clock edge
    always_ff @(posedge clk) begin
        if(reset) begin
            csr[CSR_MSTATUS] <= {64{1'b0}};  // Initialize all bits to 0
            // csr[CSR_MSTATUS][12:11] <= 2'b11;  // Set mpp to M mode (3)
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

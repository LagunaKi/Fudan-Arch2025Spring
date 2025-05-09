`ifdef VERILATOR
`include "include/common.sv"
`include "include/csr.sv"
`include "pipeline/execute/alu.sv"
`else

`endif

module execute
	import common::*;
	import csr_pkg::*;
(
    input logic clk, reset,
    input decode_data_t dataD,
    output execute_data_t dataE

);
    u64 result;
    word_t alu_a, alu_b;
    assign dataE.pc = dataD.pc;
    assign dataE.ctl = dataD.ctl;
    assign dataE.dst = dataD.dst;
    assign dataE.mem_addr = dataD.mem_addr;
    assign dataE.stall = dataD.stall;
    assign dataE.csr_addr = dataD.csr_addr;

    always_comb begin
        alu_a = '0;
        alu_b = '0;
        unique case(dataD.ctl.op)
            ADDI:begin
                alu_a = dataD.srca;
                alu_b = dataD.immediate;
            end
            XORI:begin
                alu_a = dataD.srca;
                alu_b = dataD.immediate;
            end
            ORI:begin
                alu_a = dataD.srca;
                alu_b = dataD.immediate;
            end
            ANDI:begin
                alu_a = dataD.srca;
                alu_b = dataD.immediate;
            end
            ADD:begin
                alu_a = dataD.srca;
                alu_b = dataD.srcb;
            end
            SUB:begin
                alu_a = dataD.srca;
                alu_b = dataD.srcb;
            end
            AND:begin
                alu_a = dataD.srca;
                alu_b = dataD.srcb;
            end
            OR:begin
                alu_a = dataD.srca;
                alu_b = dataD.srcb;
            end
            XOR:begin
                alu_a = dataD.srca;
                alu_b = dataD.srcb;;
            end
            ADDIW:begin
                alu_a = dataD.srca;
                alu_b = dataD.immediate;
            end
            ADDW:begin
                alu_a = dataD.srca;
                alu_b = dataD.srcb;
            end
            SUBW:begin
                alu_a = dataD.srca;
                alu_b = dataD.srcb;
            end

            LD:begin
                alu_a = '0;
                alu_b = '0;
            end
            SD:begin
                alu_a = dataD.srcb;
                alu_b = '0;
            end
            SB:begin
                alu_a = dataD.srcb;
                alu_b = '0;
            end
            SH:begin
                alu_a = dataD.srcb;
                alu_b = '0;
            end
            SW:begin
                alu_a = dataD.srcb;
                alu_b = '0;
            end
            LUI:begin
                alu_a = dataD.immediate;
                alu_b = '0;
            end
            JAL:begin
                alu_a = dataD.pc;
                alu_b = {61'b0, 3'b100};
            end
            BEQ:begin
                alu_a = '0;
                alu_b = '0;
            end
            AUIPC:begin
                alu_a = dataD.pc;
                alu_b = dataD.immediate;
            end
            JALR:begin
                alu_a = dataD.pc;
                alu_b = {61'b0, 3'b100};
            end

            BNE:begin
                alu_a = '0;
                alu_b = '0;
            end
            BLT:begin
                alu_a = '0;
                alu_b = '0;
            end
            BGE:begin
                alu_a = '0;
                alu_b = '0;
            end
            BLTU:begin
                alu_a = '0;
                alu_b = '0;
            end
            BGEU:begin
                alu_a = '0;
                alu_b = '0;
            end
            SLTI:begin
                alu_a = dataD.srca;
                alu_b = dataD.immediate;
            end
            SLTIU:begin
                alu_a = dataD.srca;
                alu_b = dataD.immediate;
            end
            SLLI:begin
                alu_a = dataD.srca;
                alu_b = dataD.shamt;
            end
            SRLI:begin
                alu_a = dataD.srca;
                alu_b = dataD.shamt;
            end
            SRAI:begin
                alu_a = dataD.srca;
                alu_b = dataD.shamt;
            end
            SLL:begin
                alu_a = dataD.srca;
                alu_b = dataD.srcb;
            end
            SLT:begin
                alu_a = dataD.srca;
                alu_b = dataD.srcb;
            end
            SLTU:begin
                alu_a = dataD.srca;
                alu_b = dataD.srcb;
            end
            SRL:begin
                alu_a = dataD.srca;
                alu_b = {58'b0, dataD.srcb[5:0]};
            end
            SRA:begin
                alu_a = dataD.srca;
                alu_b = dataD.srcb;
            end
            SLLIW:begin
                alu_a = dataD.srca;
                alu_b = dataD.immediate;
            end
            SRLIW:begin
                alu_a = {32'b0, dataD.srca[31:0]};
                alu_b = dataD.shamt;
            end
            SRAIW:begin
                alu_a = {32'b0, dataD.srca[31:0]};
                alu_b = dataD.shamt;
            end
            SLLW:begin
                alu_a = dataD.srca;
                alu_b = {59'b0, dataD.srcb[4:0]};
            end
            SRLW:begin
                alu_a = {32'b0, dataD.srca[31:0]};
                alu_b = {59'b0, dataD.srcb[4:0]};
            end
            SRAW:begin
                alu_a = {32'b0, dataD.srca[31:0]};
                alu_b = {59'b0, dataD.srcb[4:0]};
            end
            CSRRW:begin
                alu_b = dataD.csr_data;
                alu_a = dataD.srca;
            end
            CSRRS:begin
                // Read old CSR value 
                alu_a = dataD.csr_data;
                // OR with rs1 value
                alu_b = dataD.srca;
            end
            CSRRC:begin
                // Read old CSR value
                alu_a = dataD.csr_data;
                // AND with ~rs1 value
                alu_b = ~dataD.srca;
            end
            CSRRWI:begin
                alu_b = dataD.csr_data;
                alu_a = dataD.immediate;
            end
            CSRRSI:begin
                alu_a = dataD.csr_data;
                alu_b = dataD.immediate;
            end
            CSRRCI:begin
                alu_a = dataD.csr_data;
                alu_b = ~dataD.immediate;
            end
            default:begin
                alu_a = '0;
                alu_b = '0;
            end
        endcase
    end
 
    alu alu(
        .a(alu_a), 
        .b(alu_b),
        .alufunc(dataD.ctl.alufunc),
        .result
    );

    always_comb begin
        unique case(dataD.ctl.op)
            MRET:begin
                // Set MRET operation flag
                dataE.ctl.is_mret = 1'b1;
                
                // Operation 0: Update mstatus (no mepc write needed)
                dataE.ctl.csr_ops[0].addr = CSR_MSTATUS;
                dataE.ctl.csr_ops[0].data = dataD.csr_data;
                // MIE = MPIE
                dataE.ctl.csr_ops[0].data[3] = dataD.csr_data[7];
                // MPIE = 0 (clear MPIE)
                dataE.ctl.csr_ops[0].data[7] = 1'b1;
                // MPP = 00 (user mode)
                dataE.ctl.csr_ops[0].data[12:11] = 2'b00;
                dataE.ctl.csr_ops[0].we = 1'b1;
                
                dataE.result = '0;
            end
            ECALL:begin
                // Set ECALL operation flag
                dataE.ctl.is_ecall = 1'b1;
                
                // Operation 0: Write mepc (current PC)
                dataE.ctl.csr_ops[0].addr = CSR_MEPC;
                dataE.ctl.csr_ops[0].data = dataD.pc;
                dataE.ctl.csr_ops[0].we = 1'b1;
                
                // Operation 1: Update mstatus
                dataE.ctl.csr_ops[1].addr = CSR_MSTATUS;
                dataE.ctl.csr_ops[1].data = dataD.csr_data;
                // MPP = 11 (M-mode)
                dataE.ctl.csr_ops[1].data[12:11] = 2'b11;
                // MPIE = MIE
                dataE.ctl.csr_ops[1].data[7] = dataD.csr_data[3];
                // MIE = 0
                dataE.ctl.csr_ops[1].data[3] = 1'b0;
                dataE.ctl.csr_ops[1].we = 1'b1;
                
                // Operation 2: Write mcause (exception cause)
                dataE.ctl.csr_ops[2].addr = CSR_MCAUSE;
                dataE.ctl.csr_ops[2].data = 64'd11; // ECALL from M-mode
                dataE.ctl.csr_ops[2].we = 1'b1;
                
                dataE.result = '0;
            end
            ADDIW:begin
                dataE.result = { {32{result[31]}},result[31:0] };
            end
            ADDW:begin
                dataE.result = { {32{result[31]}},result[31:0] };
            end
            SUBW:begin
                dataE.result = { {32{result[31]}},result[31:0] };
            end
            SLLIW:begin
                dataE.result = { {32{result[31]}},result[31:0] };
            end
            SLLW:begin
                dataE.result = { {32{result[31]}},result[31:0] };
            end
            SRLW:begin
                dataE.result = { {32{result[31]}},result[31:0] };
            end
            SRAW:begin
                dataE.result = { {32{result[31]}},result[31:0] };
            end
            SRAIW:begin
                dataE.result = { {32{result[31]}},result[31:0] };
            end
            SRLIW:begin
                dataE.result = { {32{result[31]}},result[31:0] };
            end
            CSRRW, CSRRS, CSRRC, CSRRWI, CSRRSI, CSRRCI:begin
                dataE.result = dataD.csr_data;
                dataE.ctl.csr_ops[0].data = result;
                dataE.ctl.csr_ops[0].we = 1'b1;
            end
            default:begin
                dataE.result = result;
            end
        endcase
    end
endmodule

`ifdef VERILATOR
`include "include/common.sv"
`include "pipeline/execute/alu.sv"
`else

`endif

module execute
	import common::*;
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
    assign dataE.is_bubble = dataD.is_bubble;

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
        dataE.result = '0;
        unique case(dataD.ctl.op)
            ADDIW:begin
                dataE.result = { {32{result[31]}},result[31:0] };
            end
            ADDW:begin
                dataE.result = { {32{result[31]}},result[31:0] };
            end
            SUBW:begin
                dataE.result = { {32{result[31]}},result[31:0] };
            end
            
            default:begin
                dataE.result = result;
            end
        endcase
    end
	



endmodule

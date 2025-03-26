`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module alu
	import common::*;
(
	input [63:0] a, b,
	input alufunc_t alufunc,
	output reg [63:0] result
);
	logic [31:0] half;
	always_comb begin
		unique case(alufunc)
			ALU_ADD: begin 
			    result = a + b; 
			end
			ALU_SUB: begin 
			    result = a - b; 
			end
			ALU_AND: begin 
			    result = a & b;
			end
			ALU_OR: begin 
			    result = a | b;  
			end
			ALU_XOR: begin 
			    result = a ^ b; 
			end
			ALU_DIRECT: begin
			    result = a; 
			end
			
			default: begin
				result = '0;
			end
		endcase
	end
	
endmodule
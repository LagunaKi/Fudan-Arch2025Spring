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
			ALU_LT: 
			begin 
			     result = {63'b0,  $signed(a) < $signed(b) }; 
			end
			ALU_LTU: begin 
			     result = {63'b0,  a < b }; 
			end
			ALU_SL: begin 
			     result = a << b[5:0]; 
			end
			ALU_SRU: begin 
			     result = a >> b[5:0]; 
			end
			ALU_SR: begin 
			     result = $signed(a) >>> b[5:0]; 
			end
			ALU_SRUW: begin
				result = {32'b0, a[31:0] >> b[5:0]};
			end
			ALU_SRW: begin
				result = {{32{a[31]}}, a[31:0]} >>> b[5:0];
			end
			default: begin
				result = '0;
			end
		endcase
	end
	
endmodule
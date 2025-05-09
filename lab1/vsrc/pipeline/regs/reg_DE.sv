`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module reg_DE 
import common::*;
(
    input    logic            clk, reset,
    input    decode_data_t    dataD_in,
    output   decode_data_t    dataD_out
);

    always_ff @(posedge clk) begin
            dataD_out <= dataD_in;
    end
endmodule


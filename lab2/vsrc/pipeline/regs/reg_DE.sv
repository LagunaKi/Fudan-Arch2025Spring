`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module reg_DE 
import common::*;
(
    input    u1            clk, reset, stalldata,
    input    decode_data_t    dataD_in,
    output   decode_data_t    dataD_out,
    input   decode_data_t    last_dataD
);

    always_ff @(posedge clk) begin
        if(stalldata)begin
            dataD_out <= last_dataD;
        end
        else begin
            dataD_out <= dataD_in;
        end
    end
endmodule


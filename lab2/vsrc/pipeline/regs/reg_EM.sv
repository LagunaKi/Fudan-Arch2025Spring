`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module reg_EM
    import common::*;(
        input logic clk, reset,stalldata,
        input execute_data_t dataE_in,
        output execute_data_t dataE_out
);

    always_ff @ (posedge clk)
    begin
        if(stalldata)begin
            dataE_out <= dataE_out;
        end
        else begin
            dataE_out <= dataE_in;
        end
    end
    
endmodule


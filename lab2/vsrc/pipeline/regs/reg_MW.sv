`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module reg_MW
    import common::*;
(
        input logic clk, reset, stalldata,
        input memory_data_t dataM_in,
        output memory_data_t dataM_out
);

    always_ff @ (posedge clk)
    begin
        if(stalldata)begin
            dataM_out.result <= dataM_out.result;
            dataM_out.pc <= dataM_out.pc;
            dataM_out.ctl <= dataM_out.ctl;
            dataM_out.dst <= dataM_out.dst;
            dataM_out.is_bubble <= 1'b1;
        end
        else begin
            dataM_out <= dataM_in;
        end
    end
    
endmodule

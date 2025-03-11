`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module reg_MW
    import common::*;
(
        input logic clk, reset, stalldata,
        input memory_data_t dataM_in,
        output memory_data_t dataM_out,
        input memory_data_t last_dataM
);

    always_ff @ (posedge clk)
    begin
        if(stalldata)begin
            dataM_out.result <= last_dataM.result;
            dataM_out.pc <= last_dataM.pc;
            dataM_out.ctl <= last_dataM.ctl;
            dataM_out.dst <= last_dataM.dst;
            dataM_out.stall <= 1'b1;
        end
        else begin
            dataM_out <= dataM_in;
        end
    end
    
endmodule

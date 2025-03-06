`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module reg_FD 
import common::*;
(
    input      u1            clk, reset, 
    input      ibus_req_t        ireq,
    input      fetch_data_t      dataF_in,
    input      fetch_data_t      saved_dataF_in,
    output     fetch_data_t      saved_dataF_out,
    input      fetch_data_t      last_dataF,
    input      u1                stalldata, stallpc,
    output     fetch_data_t      dataF_out
);

    always_ff @(posedge clk) begin
        saved_dataF_out <= dataF_in;
        if(stallpc || stalldata || (~ireq.valid && last_dataF.raw_instr != 32'h0000_0000)) begin
            dataF_out.raw_instr    <= last_dataF.raw_instr;
            dataF_out.pc           <= last_dataF.pc;
            dataF_out.is_bubble    <= 1'b1;
        end
        else if(reset || (~ireq.valid && last_dataF.raw_instr == 32'h0000_0000)) begin
            dataF_out.raw_instr   <= saved_dataF_in.raw_instr;
            dataF_out.pc           <= saved_dataF_in.pc;
            dataF_out.is_bubble    <= 1'b1;
        end
        else begin
            dataF_out <= dataF_in;
        end
    end
endmodule

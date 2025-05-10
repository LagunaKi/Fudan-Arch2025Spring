`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module reg_EM
    import common::*;(
        input logic clk, reset, stalldata, flush, 
        input execute_data_t dataE_in,
        output execute_data_t dataE_out,
        input execute_data_t last_dataE
);

    always_ff @ (posedge clk)
    begin
        if(reset) begin
            dataE_out.pc <= '0;
            dataE_out.result <= '0;
            dataE_out.ctl.op <= UNKNOWN;
            dataE_out.ctl.alufunc <= ALU_NOP;
            dataE_out.ctl.regwrite <= '0;
            dataE_out.ctl.csr_ops <= '0;
            dataE_out.dst <= '0;
            dataE_out.mem_addr <= '0;
            dataE_out.stall <= 1'b1;
        end
        else if(flush) begin
            // On flush, clear the pipeline stage
            dataE_out.pc <= '0;
            dataE_out.result <= '0;
            dataE_out.ctl.op <= UNKNOWN;
            dataE_out.ctl.alufunc <= ALU_NOP;
            dataE_out.ctl.regwrite <= '0;
            dataE_out.ctl.csr_ops <= '0;
            dataE_out.dst <= '0;
            dataE_out.mem_addr <= '0;
            dataE_out.stall <= 1'b1;
        end
        else if(stalldata)begin
            dataE_out <= last_dataE;
        end
        else begin
            dataE_out <= dataE_in;
        end
    end
    
endmodule


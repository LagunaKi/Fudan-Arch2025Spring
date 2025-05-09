`ifndef __PCSELECT_SV
`define __PCSELECT_SV

`ifdef VERILATOR
`include "include/common.sv"
`else

`endif 

module pcselect 
    import common::*;(
    input u1 stalldata, 
    input u1 stallpc,
    input u64 pc,
    input u64 pcplus4,
    input u1 stall,
    input ibus_req_t ireq,
    output u64 pc_selected,
    input u1 bubble
    
);
always_comb begin
    if(stalldata || stall || stallpc || bubble) begin
        pc_selected = pc;
    end
    else begin
        pc_selected = pcplus4;
    end
    
end


endmodule


`endif


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
    input u1 bubble,
    input ibus_req_t ireq,
    output u64 pc_selected
    
);
always_comb begin
    if(stalldata || bubble || stallpc) begin
        pc_selected = pc;
    end
    else begin
        pc_selected = pcplus4;
    end
    
end


endmodule


`endif


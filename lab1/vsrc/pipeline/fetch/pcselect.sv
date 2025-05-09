`ifndef __PCSELECT_SV
`define __PCSELECT_SV

`ifdef VERILATOR
`include "include/common.sv"
`else

`endif 

module pcselect 
    import common::*;(

    input u64 pcplus4,
    output u64 pc_selected
    
);

assign pc_selected = pcplus4;

endmodule


`endif


`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module memory
    import common::*;
(
    input execute_data_t dataE,
    input  dbus_resp_t dresp,
    output dbus_req_t  dreq,
    output memory_data_t dataM
);

    msize_t msize;
    assign dreq.size = msize;
    assign dataM.is_bubble = dataE.is_bubble;

    always_comb begin
                dataM.pc = dataE.pc;
                dataM.result = dataE.result;
                dataM.ctl = dataE.ctl;
                dataM.dst = dataE.dst;
                dataM.memory_address = dataE.memory_address;
                dreq.valid = 1'b0;
                dreq.addr = '0;
                msize = MSIZE8;
                dreq.strobe = '0;
                dreq.data = '0;

            end

endmodule

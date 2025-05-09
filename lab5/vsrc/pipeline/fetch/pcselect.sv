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
    input u1 stall,
    input ibus_req_t ireq,
    output u64 pc_selected,
    input u1 bubble,
    input u1 flush,  // Pipeline flush signal
    input instfunc_t op,
    input u64 offset,
    input u64 mepc    // MEPC value from CSR
);
always_comb begin
    if(flush) begin
        // On flush, continue from PC+4
        pc_selected = pc;
    end
    else if(stalldata || stall || stallpc || bubble) begin
        pc_selected = pc;
    end
    else if(ireq.valid == 0 && (op == PLUS4 || op == N_BEQ))begin
        pc_selected = pc + 4;   
    end
    else if( (op == F_BEQ ||op == F_JAL ) )begin
        pc_selected = pc + offset;
    end
    else if(ireq.valid == 0 && op == F_JALR)begin
        pc_selected = offset;
    end
    else if(ireq.valid == 0 && op == F_MRET)begin
        pc_selected = mepc;  // Restore PC from MEPC
    end
    else if(ireq.valid == 0 )begin
        pc_selected = pc;  
    end
    else begin
        unique case (op)
            MAINTAIN:begin
                pc_selected = pc;
            end
            F_BEQ:begin
                pc_selected = pc + offset;
            end
            F_JAL:begin
                pc_selected = pc + offset;
            end
            F_JALR:begin
                pc_selected = offset;
            end
            default: begin
                pc_selected = pc + 4; 
            end
        endcase
    end
end


endmodule


`endif


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
    input instfunc_t op,
    input u64 offset
);
always_comb begin
    if(stalldata || stall || stallpc || bubble) begin
        pc_selected = pc;
    end
    else if( (op == BEQ_P ||op == JAL_P ) )begin
            pc_selected = pc + offset;
        end
        else if(ireq.valid == 0 && op == JALR_P )begin
            pc_selected = offset;
        end
        else if(ireq.valid == 0 && op == PLUS4)begin
            pc_selected = pc + 4;   
        end
        else if(ireq.valid == 0 && op == BEQ_N)begin
            pc_selected = pc + 4; 
        end
        else if(ireq.valid == 0 )begin
            pc_selected = pc;  
        end
        else begin
            unique case (op)
                BEQ_P:begin
                    pc_selected = pc + offset;
                end
                BEQ_N:begin
                    pc_selected = pc + 4;
                end
                PLUS4:begin
                    pc_selected = pc + 4;
                end
                MAINTAIN:begin
                    pc_selected = pc;
                end
                JAL_P:begin
                    pc_selected = pc + offset;
                end
                JALR_P:begin
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


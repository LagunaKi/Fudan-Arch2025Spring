`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module decoder
    import common::*;
(
    input u32 raw_instr,
    output control_t ctl
);
    logic [6:0] f7 = raw_instr[6:0];
    logic [6:0] f7t = raw_instr[31:25];
    logic [2:0] f3 = raw_instr[14:12];

    always_comb begin
        ctl = '0;
        unique case(f7)
            F7_ADDI:begin
                unique case(f3)
                    F3_ADDI:begin
                        ctl.op = ADDI;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_ADD;
                        ctl.memwrite = 1'b0;
                    end
                    F3_XORI:begin
                        ctl.op = XORI;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_XOR;
                        ctl.memwrite = 1'b0;
                    end
                    F3_ORI:begin
                        ctl.op = ORI;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_OR;
                        ctl.memwrite = 1'b0;
                    end
                    F3_ANDI:begin
                        ctl.op = ANDI;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_AND;
                        ctl.memwrite = 1'b0;
                    end
                    default:begin end
                endcase
            end

            F7_ADD:begin
               unique case(f3)
                    F3_ADD:begin
                        unique case(f7t)
                            F7T_ADD:begin
                                ctl.op = ADD;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_ADD;
                                ctl.memwrite = 1'b0;
                            end
                            F7T_SUB:begin
                                ctl.op = SUB;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_SUB;
                                ctl.memwrite = 1'b0;
                            end
                            default:begin end
                        endcase 
                    end
                    F3_AND:begin
                    unique case(f7t)
                        F7T_AND:begin
                                ctl.op = AND;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_AND;
                                ctl.memwrite = 1'b0;
                        end
                        default:begin  end
                    endcase 
                   end
                   F3_OR:begin
                      unique case(f7t)
                        F7T_OR:begin
                            ctl.op = OR;
                            ctl.regwrite = 1'b1;
                            ctl.alufunc = ALU_OR;
                            ctl.memwrite = 1'b0;
                        end
                        default:begin  end
                      endcase 
                   end
                   F3_XOR:begin
                      unique case(f7t)
                        F7T_XOR:begin
                            ctl.op = XOR;
                            ctl.regwrite = 1'b1;
                            ctl.alufunc = ALU_XOR;
                            ctl.memwrite = 1'b0;
                        end
                        default:begin   end
                      endcase 
                   end
                   default:begin end
               endcase 
            end
            F7_ADDIW:begin
                unique case(f3)
                    F3_ADDIW:begin
                        ctl.op = ADDIW;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_ADD;
                        ctl.memwrite = 1'b0;
                    end
                    default:begin end
                endcase
            end
            F7_ADDW:begin
                unique case(f3)
                    F3_ADDW:begin
                        unique case(f7t)
                            F7T_ADDW:begin
                                ctl.op = ADDW;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_ADD;
                                ctl.memwrite = 1'b0;
                            end
                            F7T_SUBW:begin
                                ctl.op = SUBW;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_SUB;
                                ctl.memwrite = 1'b0;
                            end
                            default:begin end
                        endcase
                    end
                    default:begin end
                endcase
            end

            


            F7_LD:begin
                unique case(f3)
                    F3_LD:begin
                        ctl.op = LD;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_NOP;
                        ctl.memwrite = 1'b1;
                    end
                    F3_LB:begin
                        ctl.op = LB;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_NOP;
                        ctl.memwrite = 1'b1;
                    end
                    F3_LH:begin
                        ctl.op = LH;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_NOP;
                        ctl.memwrite = 1'b1;
                    end
                    F3_LW:begin
                        ctl.op = LW;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_NOP;
                        ctl.memwrite = 1'b1;
                    end
                    F3_LBU:begin
                        ctl.op = LBU;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_NOP;
                        ctl.memwrite = 1'b1;
                    end
                    F3_LHU:begin
                        ctl.op = LHU;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_NOP;
                        ctl.memwrite = 1'b1;
                    end
                    F3_LWU:begin
                        ctl.op = LWU;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_NOP;
                        ctl.memwrite = 1'b1;
                    end
                    default:begin end
                endcase
            end

            F7_SD:begin
                unique case(f3)
                    F3_SD:begin
                        ctl.op = SD;
                        ctl.regwrite = 1'b0;
                        ctl.alufunc = ALU_DIRECT;
                        ctl.memwrite = 1'b1;
                    end
                    F3_SB:begin
                        ctl.op = SB;
                        ctl.regwrite = 1'b0;
                        ctl.alufunc = ALU_DIRECT;
                        ctl.memwrite = 1'b1;
                    end
                    F3_SH:begin
                        ctl.op = SH;
                        ctl.regwrite = 1'b0;
                        ctl.alufunc = ALU_DIRECT;
                        ctl.memwrite = 1'b1;
                    end
                    F3_SW:begin
                        ctl.op = SW;
                        ctl.regwrite = 1'b0;
                        ctl.alufunc = ALU_DIRECT;
                        ctl.memwrite = 1'b1;
                    end
                    default:begin
                        
                    end
                endcase
            end

            F7_LUI:begin
                ctl.op = LUI;
                ctl.regwrite = 1'b1;
                ctl.alufunc = ALU_DIRECT;
                ctl.memwrite = 1'b0;
            end


            default:begin end
        endcase
    end
    
endmodule

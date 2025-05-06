// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VSimTop__Syms.h"


void VSimTop___024root__traceInitSub0(VSimTop___024root* vlSelf, VerilatedFst* tracep) VL_ATTR_COLD;

void VSimTop___024root__traceInitTop(VSimTop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VSimTop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VSimTop___024root__traceInitSub0(VSimTop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+638,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+639,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+640,"io_logCtrl_log_begin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+642,"io_logCtrl_log_end",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+644,"io_logCtrl_log_level",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+646,"io_perfInfo_clean",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+647,"io_perfInfo_dump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+648,"io_uart_out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+649,"io_uart_out_ch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+650,"io_uart_in_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+651,"io_uart_in_ch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+638,"SimTop clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+639,"SimTop reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+640,"SimTop io_logCtrl_log_begin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+642,"SimTop io_logCtrl_log_end",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+644,"SimTop io_logCtrl_log_level",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+646,"SimTop io_perfInfo_clean",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+647,"SimTop io_perfInfo_dump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+648,"SimTop io_uart_out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+649,"SimTop io_uart_out_ch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+650,"SimTop io_uart_in_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+651,"SimTop io_uart_in_ch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+2,"SimTop oreq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+3,"SimTop oreq\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {
            const char* __VenumItemNames[]
            = {"MSIZE1", "MSIZE2", "MSIZE4", "MSIZE8"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11"};
            tracep->declDTypeEnum(1, "common::msize_t", 4, 3, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+4,"SimTop oreq\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+5,"SimTop oreq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+7,"SimTop oreq\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+8,"SimTop oreq\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        {
            const char* __VenumItemNames[]
            = {"MLEN1", "MLEN2", "MLEN4", "MLEN8", 
                                                "MLEN16", 
                                                "MLEN32", 
                                                "MLEN64", 
                                                "MLEN128", 
                                                "MLEN256"};
            const char* __VenumItemValues[]
            = {"0", "1", "11", "111", "1111", "11111", 
                                                "111111", 
                                                "1111111", 
                                                "11111111"};
            tracep->declDTypeEnum(2, "common::mlen_t", 9, 8, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+10,"SimTop oreq\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        {
            const char* __VenumItemNames[]
            = {"AXI_BURST_FIXED", "AXI_BURST_INCR", 
                                                "AXI_BURST_WRAP", 
                                                "AXI_BURST_RESERVED"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11"};
            tracep->declDTypeEnum(3, "common::axi_burst_type_t", 4, 2, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+11,"SimTop oreq\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+12,"SimTop oresp\206 ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+13,"SimTop oresp\206 last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+14,"SimTop oresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+16,"SimTop trint",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+17,"SimTop swint",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+18,"SimTop exint",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+19,"SimTop ireq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+20,"SimTop ireq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+22,"SimTop iresp\206 addr_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+23,"SimTop iresp\206 data_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+24,"SimTop iresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+25,"SimTop dreq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+26,"SimTop dreq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+28,"SimTop dreq\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+29,"SimTop dreq\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+30,"SimTop dreq\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+32,"SimTop dresp\206 addr_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+33,"SimTop dresp\206 data_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+34,"SimTop dresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+36,"SimTop icreq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+37,"SimTop icreq\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+38,"SimTop icreq\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+39,"SimTop icreq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+41,"SimTop icreq\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+42,"SimTop icreq\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+44,"SimTop icreq\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+45,"SimTop icreq\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+46,"SimTop dcreq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+47,"SimTop dcreq\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+48,"SimTop dcreq\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+49,"SimTop dcreq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+51,"SimTop dcreq\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+52,"SimTop dcreq\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+54,"SimTop dcreq\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+55,"SimTop dcreq\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+56,"SimTop icresp\206 ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+57,"SimTop icresp\206 last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+58,"SimTop icresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+60,"SimTop dcresp\206 ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+61,"SimTop dcresp\206 last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+62,"SimTop dcresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+638,"SimTop core clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+639,"SimTop core reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+19,"SimTop core ireq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+20,"SimTop core ireq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+22,"SimTop core iresp\206 addr_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+23,"SimTop core iresp\206 data_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+24,"SimTop core iresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+25,"SimTop core dreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+26,"SimTop core dreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+28,"SimTop core dreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+29,"SimTop core dreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+30,"SimTop core dreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+32,"SimTop core dresp\206 addr_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+33,"SimTop core dresp\206 data_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+34,"SimTop core dresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+16,"SimTop core trint",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+17,"SimTop core swint",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+18,"SimTop core exint",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+64,"SimTop core pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+66,"SimTop core pc_nxt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+68,"SimTop core offset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+70,"SimTop core raw_instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+71,"SimTop core handin",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+72,"SimTop core dataF\206 raw_instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+73,"SimTop core dataF\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+75,"SimTop core dataF\206 stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+76,"SimTop core dataF_nxt\206 raw_instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+77,"SimTop core dataF_nxt\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+79,"SimTop core dataF_nxt\206 stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+80,"SimTop core saved_dataF\206 raw_instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+81,"SimTop core saved_dataF\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+83,"SimTop core saved_dataF\206 stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+84,"SimTop core dataD\206 srca",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+86,"SimTop core dataD\206 srcb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+88,"SimTop core dataD\206 immediate",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+90,"SimTop core dataD\206 shamt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+92,"SimTop core dataD\206 csr_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        {
            const char* __VenumItemNames[]
            = {"UNKNOWN", "ADDI", "XORI", "ORI", "ANDI", 
                                                "ADD", 
                                                "SUB", 
                                                "AND", 
                                                "OR", 
                                                "XOR", 
                                                "ADDIW", 
                                                "ADDW", 
                                                "SUBW", 
                                                "LD", 
                                                "SD", 
                                                "LB", 
                                                "LH", 
                                                "LW", 
                                                "LBU", 
                                                "LHU", 
                                                "LWU", 
                                                "SB", 
                                                "SH", 
                                                "SW", 
                                                "LUI", 
                                                "BNE", 
                                                "BEQ", 
                                                "BLT", 
                                                "BGE", 
                                                "BLTU", 
                                                "BGEU", 
                                                "SLTI", 
                                                "SLTIU", 
                                                "SLLI", 
                                                "SRLI", 
                                                "SRAI", 
                                                "SLL", 
                                                "SLT", 
                                                "SLTU", 
                                                "SRL", 
                                                "SRA", 
                                                "SLLIW", 
                                                "SRLIW", 
                                                "SRAIW", 
                                                "SLLW", 
                                                "SRLW", 
                                                "SRAW", 
                                                "AUIPC", 
                                                "JALR", 
                                                "JAL", 
                                                "CSRRW", 
                                                "CSRRS", 
                                                "CSRRC", 
                                                "CSRRWI", 
                                                "CSRRSI", 
                                                "CSRRCI", 
                                                "MRET", 
                                                "ECALL"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11", "100", "101", 
                                                "110", 
                                                "111", 
                                                "1000", 
                                                "1001", 
                                                "1010", 
                                                "1011", 
                                                "1100", 
                                                "1101", 
                                                "1110", 
                                                "1111", 
                                                "10000", 
                                                "10001", 
                                                "10010", 
                                                "10011", 
                                                "10100", 
                                                "10101", 
                                                "10110", 
                                                "10111", 
                                                "11000", 
                                                "11001", 
                                                "11010", 
                                                "11011", 
                                                "11100", 
                                                "11101", 
                                                "11110", 
                                                "11111", 
                                                "100000", 
                                                "100001", 
                                                "100010", 
                                                "100011", 
                                                "100100", 
                                                "100101", 
                                                "100110", 
                                                "100111", 
                                                "101000", 
                                                "101001", 
                                                "101010", 
                                                "101011", 
                                                "101100", 
                                                "101101", 
                                                "101110", 
                                                "101111", 
                                                "110000", 
                                                "110001", 
                                                "110010", 
                                                "110011", 
                                                "110100", 
                                                "110101", 
                                                "110110", 
                                                "110111", 
                                                "111000", 
                                                "111001"};
            tracep->declDTypeEnum(4, "common::decode_op_t", 58, 7, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+94,"SimTop core dataD\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        {
            const char* __VenumItemNames[]
            = {"ALU_UNKNOWN", "ALU_ADD", "ALU_SUB", 
                                                "ALU_AND", 
                                                "ALU_OR", 
                                                "ALU_XOR", 
                                                "ALU_DIRECT", 
                                                "ALU_NOP", 
                                                "ALU_LT", 
                                                "ALU_LTU", 
                                                "ALU_SL", 
                                                "ALU_SRU", 
                                                "ALU_SR", 
                                                "ALU_SRUW", 
                                                "ALU_SRW"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11", "100", "101", 
                                                "110", 
                                                "111", 
                                                "1000", 
                                                "1001", 
                                                "1010", 
                                                "1011", 
                                                "1100", 
                                                "1101", 
                                                "1110"};
            tracep->declDTypeEnum(5, "common::alufunc_t", 15, 7, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+95,"SimTop core dataD\206 ctl\206 alufunc",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBit(c+96,"SimTop core dataD\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+97,"SimTop core dataD\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+98,"SimTop core dataD\206 ctl\206 csr_ops(0)\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+99,"SimTop core dataD\206 ctl\206 csr_ops(0)\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+101,"SimTop core dataD\206 ctl\206 csr_ops(0)\206 we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+102,"SimTop core dataD\206 ctl\206 csr_ops(1)\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+103,"SimTop core dataD\206 ctl\206 csr_ops(1)\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+105,"SimTop core dataD\206 ctl\206 csr_ops(1)\206 we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+106,"SimTop core dataD\206 ctl\206 csr_ops(2)\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+107,"SimTop core dataD\206 ctl\206 csr_ops(2)\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+109,"SimTop core dataD\206 ctl\206 csr_ops(2)\206 we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+110,"SimTop core dataD\206 ctl\206 is_mret",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+111,"SimTop core dataD\206 ctl\206 is_ecall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+112,"SimTop core dataD\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+113,"SimTop core dataD\206 mem_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+115,"SimTop core dataD\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+117,"SimTop core dataD\206 stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+118,"SimTop core dataD\206 csr_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+119,"SimTop core dataD_nxt\206 srca",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+121,"SimTop core dataD_nxt\206 srcb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+123,"SimTop core dataD_nxt\206 immediate",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+125,"SimTop core dataD_nxt\206 shamt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+127,"SimTop core dataD_nxt\206 csr_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+129,"SimTop core dataD_nxt\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBus(c+130,"SimTop core dataD_nxt\206 ctl\206 alufunc",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBit(c+131,"SimTop core dataD_nxt\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+132,"SimTop core dataD_nxt\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+133,"SimTop core dataD_nxt\206 ctl\206 csr_ops(0)\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+134,"SimTop core dataD_nxt\206 ctl\206 csr_ops(0)\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+136,"SimTop core dataD_nxt\206 ctl\206 csr_ops(0)\206 we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+137,"SimTop core dataD_nxt\206 ctl\206 csr_ops(1)\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+138,"SimTop core dataD_nxt\206 ctl\206 csr_ops(1)\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+140,"SimTop core dataD_nxt\206 ctl\206 csr_ops(1)\206 we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+141,"SimTop core dataD_nxt\206 ctl\206 csr_ops(2)\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+142,"SimTop core dataD_nxt\206 ctl\206 csr_ops(2)\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+144,"SimTop core dataD_nxt\206 ctl\206 csr_ops(2)\206 we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+145,"SimTop core dataD_nxt\206 ctl\206 is_mret",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+146,"SimTop core dataD_nxt\206 ctl\206 is_ecall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+147,"SimTop core dataD_nxt\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+148,"SimTop core dataD_nxt\206 mem_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+150,"SimTop core dataD_nxt\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+152,"SimTop core dataD_nxt\206 stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+153,"SimTop core dataD_nxt\206 csr_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+154,"SimTop core dataE\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+156,"SimTop core dataE\206 result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+158,"SimTop core dataE\206 csr_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+160,"SimTop core dataE\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBus(c+161,"SimTop core dataE\206 ctl\206 alufunc",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBit(c+162,"SimTop core dataE\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+163,"SimTop core dataE\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+164,"SimTop core dataE\206 ctl\206 csr_ops(0)\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+165,"SimTop core dataE\206 ctl\206 csr_ops(0)\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+167,"SimTop core dataE\206 ctl\206 csr_ops(0)\206 we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+168,"SimTop core dataE\206 ctl\206 csr_ops(1)\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+169,"SimTop core dataE\206 ctl\206 csr_ops(1)\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+171,"SimTop core dataE\206 ctl\206 csr_ops(1)\206 we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+172,"SimTop core dataE\206 ctl\206 csr_ops(2)\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+173,"SimTop core dataE\206 ctl\206 csr_ops(2)\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+175,"SimTop core dataE\206 ctl\206 csr_ops(2)\206 we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+176,"SimTop core dataE\206 ctl\206 is_mret",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+177,"SimTop core dataE\206 ctl\206 is_ecall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+178,"SimTop core dataE\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+179,"SimTop core dataE\206 mem_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+181,"SimTop core dataE\206 stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+182,"SimTop core dataE\206 csr_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+183,"SimTop core dataE_nxt\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+185,"SimTop core dataE_nxt\206 result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+187,"SimTop core dataE_nxt\206 csr_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+189,"SimTop core dataE_nxt\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBus(c+190,"SimTop core dataE_nxt\206 ctl\206 alufunc",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBit(c+191,"SimTop core dataE_nxt\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+192,"SimTop core dataE_nxt\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+193,"SimTop core dataE_nxt\206 ctl\206 csr_ops(0)\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+194,"SimTop core dataE_nxt\206 ctl\206 csr_ops(0)\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+196,"SimTop core dataE_nxt\206 ctl\206 csr_ops(0)\206 we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+197,"SimTop core dataE_nxt\206 ctl\206 csr_ops(1)\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+198,"SimTop core dataE_nxt\206 ctl\206 csr_ops(1)\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+200,"SimTop core dataE_nxt\206 ctl\206 csr_ops(1)\206 we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+201,"SimTop core dataE_nxt\206 ctl\206 csr_ops(2)\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+202,"SimTop core dataE_nxt\206 ctl\206 csr_ops(2)\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+204,"SimTop core dataE_nxt\206 ctl\206 csr_ops(2)\206 we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+205,"SimTop core dataE_nxt\206 ctl\206 is_mret",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+206,"SimTop core dataE_nxt\206 ctl\206 is_ecall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+207,"SimTop core dataE_nxt\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+208,"SimTop core dataE_nxt\206 mem_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+210,"SimTop core dataE_nxt\206 stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+211,"SimTop core dataE_nxt\206 csr_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+212,"SimTop core dataM\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+214,"SimTop core dataM\206 result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+216,"SimTop core dataM\206 csr_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+218,"SimTop core dataM\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBus(c+219,"SimTop core dataM\206 ctl\206 alufunc",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBit(c+220,"SimTop core dataM\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+221,"SimTop core dataM\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+222,"SimTop core dataM\206 ctl\206 csr_ops(0)\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+223,"SimTop core dataM\206 ctl\206 csr_ops(0)\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+225,"SimTop core dataM\206 ctl\206 csr_ops(0)\206 we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+226,"SimTop core dataM\206 ctl\206 csr_ops(1)\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+227,"SimTop core dataM\206 ctl\206 csr_ops(1)\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+229,"SimTop core dataM\206 ctl\206 csr_ops(1)\206 we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+230,"SimTop core dataM\206 ctl\206 csr_ops(2)\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+231,"SimTop core dataM\206 ctl\206 csr_ops(2)\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+233,"SimTop core dataM\206 ctl\206 csr_ops(2)\206 we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+234,"SimTop core dataM\206 ctl\206 is_mret",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+235,"SimTop core dataM\206 ctl\206 is_ecall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+236,"SimTop core dataM\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+237,"SimTop core dataM\206 mem_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+239,"SimTop core dataM\206 stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+240,"SimTop core dataM\206 csr_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+241,"SimTop core dataM_nxt\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+243,"SimTop core dataM_nxt\206 result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+245,"SimTop core dataM_nxt\206 csr_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+247,"SimTop core dataM_nxt\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBus(c+248,"SimTop core dataM_nxt\206 ctl\206 alufunc",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBit(c+249,"SimTop core dataM_nxt\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+250,"SimTop core dataM_nxt\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+251,"SimTop core dataM_nxt\206 ctl\206 csr_ops(0)\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+252,"SimTop core dataM_nxt\206 ctl\206 csr_ops(0)\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+254,"SimTop core dataM_nxt\206 ctl\206 csr_ops(0)\206 we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+255,"SimTop core dataM_nxt\206 ctl\206 csr_ops(1)\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+256,"SimTop core dataM_nxt\206 ctl\206 csr_ops(1)\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+258,"SimTop core dataM_nxt\206 ctl\206 csr_ops(1)\206 we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+259,"SimTop core dataM_nxt\206 ctl\206 csr_ops(2)\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+260,"SimTop core dataM_nxt\206 ctl\206 csr_ops(2)\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+262,"SimTop core dataM_nxt\206 ctl\206 csr_ops(2)\206 we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+263,"SimTop core dataM_nxt\206 ctl\206 is_mret",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+264,"SimTop core dataM_nxt\206 ctl\206 is_ecall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+265,"SimTop core dataM_nxt\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+266,"SimTop core dataM_nxt\206 mem_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+268,"SimTop core dataM_nxt\206 stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+269,"SimTop core dataM_nxt\206 csr_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+270,"SimTop core dataW\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+272,"SimTop core dataW\206 result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+274,"SimTop core dataW\206 csr_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+276,"SimTop core dataW\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBus(c+277,"SimTop core dataW\206 ctl\206 alufunc",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBit(c+278,"SimTop core dataW\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+279,"SimTop core dataW\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+280,"SimTop core dataW\206 ctl\206 csr_ops(0)\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+281,"SimTop core dataW\206 ctl\206 csr_ops(0)\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+283,"SimTop core dataW\206 ctl\206 csr_ops(0)\206 we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+284,"SimTop core dataW\206 ctl\206 csr_ops(1)\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+285,"SimTop core dataW\206 ctl\206 csr_ops(1)\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+287,"SimTop core dataW\206 ctl\206 csr_ops(1)\206 we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+288,"SimTop core dataW\206 ctl\206 csr_ops(2)\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+289,"SimTop core dataW\206 ctl\206 csr_ops(2)\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+291,"SimTop core dataW\206 ctl\206 csr_ops(2)\206 we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+292,"SimTop core dataW\206 ctl\206 is_mret",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+293,"SimTop core dataW\206 ctl\206 is_ecall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+294,"SimTop core dataW\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+295,"SimTop core dataW\206 mem_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+297,"SimTop core dataW\206 stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+298,"SimTop core dataW\206 csr_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declBus(c+299,"SimTop core ra1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+300,"SimTop core ra2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+301,"SimTop core rd1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+303,"SimTop core rd2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+652,"SimTop core csr_rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+305,"SimTop core csr_ra",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declBit(c+306,"SimTop core stallpc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+307,"SimTop core stalldata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+117,"SimTop core stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+308,"SimTop core bubble",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+309,"SimTop core flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+310,"SimTop core csr_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+311,"SimTop core hazard_ra1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+312,"SimTop core hazard_ra2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+313,"SimTop core hazard_jalr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+314,"SimTop core hazard_csr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {
            const char* __VenumItemNames[]
            = {"MAINTAIN", "PLUS4", "F_BEQ", "N_BEQ", 
                                                "F_JAL", 
                                                "F_JALR", 
                                                "F_MRET"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11", "100", "101", 
                                                "110"};
            tracep->declDTypeEnum(6, "common::instfunc_t", 7, 5, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+315,"SimTop core op_in",6, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+316,"SimTop core op_out",6, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        {
            const char* __VenumItemNames[]
            = {"CSR_IDLE", "CSR_MRET", "CSR_ECALL"};
            const char* __VenumItemValues[]
            = {"0", "1", "10"};
            tracep->declDTypeEnum(7, "core.csr_state_t", 3, 2, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+317,"SimTop core csr_state",7, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+318,"SimTop core csr_state_next",7, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+307,"SimTop core pcselect stalldata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+306,"SimTop core pcselect stallpc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+64,"SimTop core pcselect pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+117,"SimTop core pcselect stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+19,"SimTop core pcselect ireq\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+20,"SimTop core pcselect ireq\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+66,"SimTop core pcselect pc_selected",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+308,"SimTop core pcselect bubble",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+309,"SimTop core pcselect flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+316,"SimTop core pcselect op",6,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+68,"SimTop core pcselect offset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+654,"SimTop core pcselect mepc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+70,"SimTop core fetch raw_instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+64,"SimTop core fetch pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+19,"SimTop core fetch ireq\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+20,"SimTop core fetch ireq\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+72,"SimTop core fetch dataF\206 raw_instr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+73,"SimTop core fetch dataF\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+75,"SimTop core fetch dataF\206 stall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+638,"SimTop core reg_FD clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+639,"SimTop core reg_FD reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+309,"SimTop core reg_FD flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+19,"SimTop core reg_FD ireq\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+20,"SimTop core reg_FD ireq\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+72,"SimTop core reg_FD dataF_in\206 raw_instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+73,"SimTop core reg_FD dataF_in\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+75,"SimTop core reg_FD dataF_in\206 stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+80,"SimTop core reg_FD saved_dataF_in\206 raw_instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+81,"SimTop core reg_FD saved_dataF_in\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+83,"SimTop core reg_FD saved_dataF_in\206 stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+80,"SimTop core reg_FD saved_dataF_out\206 raw_instr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+81,"SimTop core reg_FD saved_dataF_out\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+83,"SimTop core reg_FD saved_dataF_out\206 stall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+76,"SimTop core reg_FD last_dataF\206 raw_instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+77,"SimTop core reg_FD last_dataF\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+79,"SimTop core reg_FD last_dataF\206 stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+307,"SimTop core reg_FD stalldata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+306,"SimTop core reg_FD stallpc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+76,"SimTop core reg_FD dataF_out\206 raw_instr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+77,"SimTop core reg_FD dataF_out\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+79,"SimTop core reg_FD dataF_out\206 stall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+308,"SimTop core reg_FD bubble",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+76,"SimTop core decode dataF\206 raw_instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+77,"SimTop core decode dataF\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+79,"SimTop core decode dataF\206 stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+84,"SimTop core decode dataD\206 srca",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+86,"SimTop core decode dataD\206 srcb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+88,"SimTop core decode dataD\206 immediate",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+90,"SimTop core decode dataD\206 shamt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+92,"SimTop core decode dataD\206 csr_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+94,"SimTop core decode dataD\206 ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+95,"SimTop core decode dataD\206 ctl\206 alufunc",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+96,"SimTop core decode dataD\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+97,"SimTop core decode dataD\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+98,"SimTop core decode dataD\206 ctl\206 csr_ops(0)\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+99,"SimTop core decode dataD\206 ctl\206 csr_ops(0)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+101,"SimTop core decode dataD\206 ctl\206 csr_ops(0)\206 we",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+102,"SimTop core decode dataD\206 ctl\206 csr_ops(1)\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+103,"SimTop core decode dataD\206 ctl\206 csr_ops(1)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+105,"SimTop core decode dataD\206 ctl\206 csr_ops(1)\206 we",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+106,"SimTop core decode dataD\206 ctl\206 csr_ops(2)\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+107,"SimTop core decode dataD\206 ctl\206 csr_ops(2)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+109,"SimTop core decode dataD\206 ctl\206 csr_ops(2)\206 we",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+110,"SimTop core decode dataD\206 ctl\206 is_mret",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+111,"SimTop core decode dataD\206 ctl\206 is_ecall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+112,"SimTop core decode dataD\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+113,"SimTop core decode dataD\206 mem_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+115,"SimTop core decode dataD\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+117,"SimTop core decode dataD\206 stall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+118,"SimTop core decode dataD\206 csr_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declBus(c+299,"SimTop core decode ra1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+300,"SimTop core decode ra2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+301,"SimTop core decode rd1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+303,"SimTop core decode rd2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+652,"SimTop core decode csr_rd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+315,"SimTop core decode op",6,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+68,"SimTop core decode offset",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+305,"SimTop core decode csr_ra",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declBus(c+319,"SimTop core decode ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBus(c+320,"SimTop core decode ctl\206 alufunc",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBit(c+321,"SimTop core decode ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+322,"SimTop core decode ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+323,"SimTop core decode ctl\206 csr_ops(0)\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+324,"SimTop core decode ctl\206 csr_ops(0)\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+326,"SimTop core decode ctl\206 csr_ops(0)\206 we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+327,"SimTop core decode ctl\206 csr_ops(1)\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+328,"SimTop core decode ctl\206 csr_ops(1)\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+330,"SimTop core decode ctl\206 csr_ops(1)\206 we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+331,"SimTop core decode ctl\206 csr_ops(2)\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+332,"SimTop core decode ctl\206 csr_ops(2)\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+334,"SimTop core decode ctl\206 csr_ops(2)\206 we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+335,"SimTop core decode ctl\206 is_mret",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+336,"SimTop core decode ctl\206 is_ecall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+76,"SimTop core decode decoder raw_instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+319,"SimTop core decode decoder ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+320,"SimTop core decode decoder ctl\206 alufunc",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+321,"SimTop core decode decoder ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+322,"SimTop core decode decoder ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+323,"SimTop core decode decoder ctl\206 csr_ops(0)\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+324,"SimTop core decode decoder ctl\206 csr_ops(0)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+326,"SimTop core decode decoder ctl\206 csr_ops(0)\206 we",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+327,"SimTop core decode decoder ctl\206 csr_ops(1)\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+328,"SimTop core decode decoder ctl\206 csr_ops(1)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+330,"SimTop core decode decoder ctl\206 csr_ops(1)\206 we",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+331,"SimTop core decode decoder ctl\206 csr_ops(2)\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+332,"SimTop core decode decoder ctl\206 csr_ops(2)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+334,"SimTop core decode decoder ctl\206 csr_ops(2)\206 we",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+335,"SimTop core decode decoder ctl\206 is_mret",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+336,"SimTop core decode decoder ctl\206 is_ecall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+337,"SimTop core decode decoder f7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBus(c+338,"SimTop core decode decoder f7t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBus(c+339,"SimTop core decode decoder f3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+340,"SimTop core decode decoder f6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBit(c+638,"SimTop core reg_DE clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+639,"SimTop core reg_DE reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+307,"SimTop core reg_DE stalldata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+309,"SimTop core reg_DE flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+84,"SimTop core reg_DE dataD_in\206 srca",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+86,"SimTop core reg_DE dataD_in\206 srcb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+88,"SimTop core reg_DE dataD_in\206 immediate",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+90,"SimTop core reg_DE dataD_in\206 shamt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+92,"SimTop core reg_DE dataD_in\206 csr_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+94,"SimTop core reg_DE dataD_in\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+95,"SimTop core reg_DE dataD_in\206 ctl\206 alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+96,"SimTop core reg_DE dataD_in\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+97,"SimTop core reg_DE dataD_in\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+98,"SimTop core reg_DE dataD_in\206 ctl\206 csr_ops(0)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+99,"SimTop core reg_DE dataD_in\206 ctl\206 csr_ops(0)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+101,"SimTop core reg_DE dataD_in\206 ctl\206 csr_ops(0)\206 we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+102,"SimTop core reg_DE dataD_in\206 ctl\206 csr_ops(1)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+103,"SimTop core reg_DE dataD_in\206 ctl\206 csr_ops(1)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+105,"SimTop core reg_DE dataD_in\206 ctl\206 csr_ops(1)\206 we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+106,"SimTop core reg_DE dataD_in\206 ctl\206 csr_ops(2)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+107,"SimTop core reg_DE dataD_in\206 ctl\206 csr_ops(2)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+109,"SimTop core reg_DE dataD_in\206 ctl\206 csr_ops(2)\206 we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+110,"SimTop core reg_DE dataD_in\206 ctl\206 is_mret",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+111,"SimTop core reg_DE dataD_in\206 ctl\206 is_ecall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+112,"SimTop core reg_DE dataD_in\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+113,"SimTop core reg_DE dataD_in\206 mem_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+115,"SimTop core reg_DE dataD_in\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+117,"SimTop core reg_DE dataD_in\206 stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+118,"SimTop core reg_DE dataD_in\206 csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+119,"SimTop core reg_DE dataD_out\206 srca",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+121,"SimTop core reg_DE dataD_out\206 srcb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+123,"SimTop core reg_DE dataD_out\206 immediate",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+125,"SimTop core reg_DE dataD_out\206 shamt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+127,"SimTop core reg_DE dataD_out\206 csr_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+129,"SimTop core reg_DE dataD_out\206 ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+130,"SimTop core reg_DE dataD_out\206 ctl\206 alufunc",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+131,"SimTop core reg_DE dataD_out\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+132,"SimTop core reg_DE dataD_out\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+133,"SimTop core reg_DE dataD_out\206 ctl\206 csr_ops(0)\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+134,"SimTop core reg_DE dataD_out\206 ctl\206 csr_ops(0)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+136,"SimTop core reg_DE dataD_out\206 ctl\206 csr_ops(0)\206 we",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+137,"SimTop core reg_DE dataD_out\206 ctl\206 csr_ops(1)\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+138,"SimTop core reg_DE dataD_out\206 ctl\206 csr_ops(1)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+140,"SimTop core reg_DE dataD_out\206 ctl\206 csr_ops(1)\206 we",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+141,"SimTop core reg_DE dataD_out\206 ctl\206 csr_ops(2)\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+142,"SimTop core reg_DE dataD_out\206 ctl\206 csr_ops(2)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+144,"SimTop core reg_DE dataD_out\206 ctl\206 csr_ops(2)\206 we",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+145,"SimTop core reg_DE dataD_out\206 ctl\206 is_mret",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+146,"SimTop core reg_DE dataD_out\206 ctl\206 is_ecall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+147,"SimTop core reg_DE dataD_out\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+148,"SimTop core reg_DE dataD_out\206 mem_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+150,"SimTop core reg_DE dataD_out\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+152,"SimTop core reg_DE dataD_out\206 stall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+153,"SimTop core reg_DE dataD_out\206 csr_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+119,"SimTop core reg_DE last_dataD\206 srca",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+121,"SimTop core reg_DE last_dataD\206 srcb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+123,"SimTop core reg_DE last_dataD\206 immediate",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+125,"SimTop core reg_DE last_dataD\206 shamt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+127,"SimTop core reg_DE last_dataD\206 csr_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+129,"SimTop core reg_DE last_dataD\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+130,"SimTop core reg_DE last_dataD\206 ctl\206 alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+131,"SimTop core reg_DE last_dataD\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+132,"SimTop core reg_DE last_dataD\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+133,"SimTop core reg_DE last_dataD\206 ctl\206 csr_ops(0)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+134,"SimTop core reg_DE last_dataD\206 ctl\206 csr_ops(0)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+136,"SimTop core reg_DE last_dataD\206 ctl\206 csr_ops(0)\206 we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+137,"SimTop core reg_DE last_dataD\206 ctl\206 csr_ops(1)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+138,"SimTop core reg_DE last_dataD\206 ctl\206 csr_ops(1)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+140,"SimTop core reg_DE last_dataD\206 ctl\206 csr_ops(1)\206 we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+141,"SimTop core reg_DE last_dataD\206 ctl\206 csr_ops(2)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+142,"SimTop core reg_DE last_dataD\206 ctl\206 csr_ops(2)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+144,"SimTop core reg_DE last_dataD\206 ctl\206 csr_ops(2)\206 we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+145,"SimTop core reg_DE last_dataD\206 ctl\206 is_mret",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+146,"SimTop core reg_DE last_dataD\206 ctl\206 is_ecall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+147,"SimTop core reg_DE last_dataD\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+148,"SimTop core reg_DE last_dataD\206 mem_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+150,"SimTop core reg_DE last_dataD\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+152,"SimTop core reg_DE last_dataD\206 stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+153,"SimTop core reg_DE last_dataD\206 csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declBit(c+308,"SimTop core reg_DE bubble",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+638,"SimTop core execute clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+639,"SimTop core execute reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+119,"SimTop core execute dataD\206 srca",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+121,"SimTop core execute dataD\206 srcb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+123,"SimTop core execute dataD\206 immediate",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+125,"SimTop core execute dataD\206 shamt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+127,"SimTop core execute dataD\206 csr_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+129,"SimTop core execute dataD\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+130,"SimTop core execute dataD\206 ctl\206 alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+131,"SimTop core execute dataD\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+132,"SimTop core execute dataD\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+133,"SimTop core execute dataD\206 ctl\206 csr_ops(0)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+134,"SimTop core execute dataD\206 ctl\206 csr_ops(0)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+136,"SimTop core execute dataD\206 ctl\206 csr_ops(0)\206 we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+137,"SimTop core execute dataD\206 ctl\206 csr_ops(1)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+138,"SimTop core execute dataD\206 ctl\206 csr_ops(1)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+140,"SimTop core execute dataD\206 ctl\206 csr_ops(1)\206 we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+141,"SimTop core execute dataD\206 ctl\206 csr_ops(2)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+142,"SimTop core execute dataD\206 ctl\206 csr_ops(2)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+144,"SimTop core execute dataD\206 ctl\206 csr_ops(2)\206 we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+145,"SimTop core execute dataD\206 ctl\206 is_mret",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+146,"SimTop core execute dataD\206 ctl\206 is_ecall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+147,"SimTop core execute dataD\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+148,"SimTop core execute dataD\206 mem_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+150,"SimTop core execute dataD\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+152,"SimTop core execute dataD\206 stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+153,"SimTop core execute dataD\206 csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+154,"SimTop core execute dataE\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+156,"SimTop core execute dataE\206 result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+158,"SimTop core execute dataE\206 csr_result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+160,"SimTop core execute dataE\206 ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+161,"SimTop core execute dataE\206 ctl\206 alufunc",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+162,"SimTop core execute dataE\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+163,"SimTop core execute dataE\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+164,"SimTop core execute dataE\206 ctl\206 csr_ops(0)\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+165,"SimTop core execute dataE\206 ctl\206 csr_ops(0)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+167,"SimTop core execute dataE\206 ctl\206 csr_ops(0)\206 we",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+168,"SimTop core execute dataE\206 ctl\206 csr_ops(1)\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+169,"SimTop core execute dataE\206 ctl\206 csr_ops(1)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+171,"SimTop core execute dataE\206 ctl\206 csr_ops(1)\206 we",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+172,"SimTop core execute dataE\206 ctl\206 csr_ops(2)\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+173,"SimTop core execute dataE\206 ctl\206 csr_ops(2)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+175,"SimTop core execute dataE\206 ctl\206 csr_ops(2)\206 we",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+176,"SimTop core execute dataE\206 ctl\206 is_mret",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+177,"SimTop core execute dataE\206 ctl\206 is_ecall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+178,"SimTop core execute dataE\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+179,"SimTop core execute dataE\206 mem_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+181,"SimTop core execute dataE\206 stall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+182,"SimTop core execute dataE\206 csr_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+341,"SimTop core execute result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+343,"SimTop core execute alu_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+345,"SimTop core execute alu_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+343,"SimTop core execute alu a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+345,"SimTop core execute alu b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+130,"SimTop core execute alu alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declQuad(c+341,"SimTop core execute alu result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+638,"SimTop core reg_EM clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+639,"SimTop core reg_EM reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+307,"SimTop core reg_EM stalldata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+309,"SimTop core reg_EM flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+154,"SimTop core reg_EM dataE_in\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+156,"SimTop core reg_EM dataE_in\206 result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+158,"SimTop core reg_EM dataE_in\206 csr_result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+160,"SimTop core reg_EM dataE_in\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+161,"SimTop core reg_EM dataE_in\206 ctl\206 alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+162,"SimTop core reg_EM dataE_in\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+163,"SimTop core reg_EM dataE_in\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+164,"SimTop core reg_EM dataE_in\206 ctl\206 csr_ops(0)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+165,"SimTop core reg_EM dataE_in\206 ctl\206 csr_ops(0)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+167,"SimTop core reg_EM dataE_in\206 ctl\206 csr_ops(0)\206 we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+168,"SimTop core reg_EM dataE_in\206 ctl\206 csr_ops(1)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+169,"SimTop core reg_EM dataE_in\206 ctl\206 csr_ops(1)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+171,"SimTop core reg_EM dataE_in\206 ctl\206 csr_ops(1)\206 we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+172,"SimTop core reg_EM dataE_in\206 ctl\206 csr_ops(2)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+173,"SimTop core reg_EM dataE_in\206 ctl\206 csr_ops(2)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+175,"SimTop core reg_EM dataE_in\206 ctl\206 csr_ops(2)\206 we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+176,"SimTop core reg_EM dataE_in\206 ctl\206 is_mret",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+177,"SimTop core reg_EM dataE_in\206 ctl\206 is_ecall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+178,"SimTop core reg_EM dataE_in\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+179,"SimTop core reg_EM dataE_in\206 mem_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+181,"SimTop core reg_EM dataE_in\206 stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+182,"SimTop core reg_EM dataE_in\206 csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+183,"SimTop core reg_EM dataE_out\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+185,"SimTop core reg_EM dataE_out\206 result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+187,"SimTop core reg_EM dataE_out\206 csr_result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+189,"SimTop core reg_EM dataE_out\206 ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+190,"SimTop core reg_EM dataE_out\206 ctl\206 alufunc",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+191,"SimTop core reg_EM dataE_out\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+192,"SimTop core reg_EM dataE_out\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+193,"SimTop core reg_EM dataE_out\206 ctl\206 csr_ops(0)\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+194,"SimTop core reg_EM dataE_out\206 ctl\206 csr_ops(0)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+196,"SimTop core reg_EM dataE_out\206 ctl\206 csr_ops(0)\206 we",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+197,"SimTop core reg_EM dataE_out\206 ctl\206 csr_ops(1)\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+198,"SimTop core reg_EM dataE_out\206 ctl\206 csr_ops(1)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+200,"SimTop core reg_EM dataE_out\206 ctl\206 csr_ops(1)\206 we",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+201,"SimTop core reg_EM dataE_out\206 ctl\206 csr_ops(2)\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+202,"SimTop core reg_EM dataE_out\206 ctl\206 csr_ops(2)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+204,"SimTop core reg_EM dataE_out\206 ctl\206 csr_ops(2)\206 we",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+205,"SimTop core reg_EM dataE_out\206 ctl\206 is_mret",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+206,"SimTop core reg_EM dataE_out\206 ctl\206 is_ecall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+207,"SimTop core reg_EM dataE_out\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+208,"SimTop core reg_EM dataE_out\206 mem_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+210,"SimTop core reg_EM dataE_out\206 stall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+211,"SimTop core reg_EM dataE_out\206 csr_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+183,"SimTop core reg_EM last_dataE\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+185,"SimTop core reg_EM last_dataE\206 result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+187,"SimTop core reg_EM last_dataE\206 csr_result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+189,"SimTop core reg_EM last_dataE\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+190,"SimTop core reg_EM last_dataE\206 ctl\206 alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+191,"SimTop core reg_EM last_dataE\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+192,"SimTop core reg_EM last_dataE\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+193,"SimTop core reg_EM last_dataE\206 ctl\206 csr_ops(0)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+194,"SimTop core reg_EM last_dataE\206 ctl\206 csr_ops(0)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+196,"SimTop core reg_EM last_dataE\206 ctl\206 csr_ops(0)\206 we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+197,"SimTop core reg_EM last_dataE\206 ctl\206 csr_ops(1)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+198,"SimTop core reg_EM last_dataE\206 ctl\206 csr_ops(1)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+200,"SimTop core reg_EM last_dataE\206 ctl\206 csr_ops(1)\206 we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+201,"SimTop core reg_EM last_dataE\206 ctl\206 csr_ops(2)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+202,"SimTop core reg_EM last_dataE\206 ctl\206 csr_ops(2)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+204,"SimTop core reg_EM last_dataE\206 ctl\206 csr_ops(2)\206 we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+205,"SimTop core reg_EM last_dataE\206 ctl\206 is_mret",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+206,"SimTop core reg_EM last_dataE\206 ctl\206 is_ecall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+207,"SimTop core reg_EM last_dataE\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+208,"SimTop core reg_EM last_dataE\206 mem_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+210,"SimTop core reg_EM last_dataE\206 stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+211,"SimTop core reg_EM last_dataE\206 csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+183,"SimTop core memory dataE\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+185,"SimTop core memory dataE\206 result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+187,"SimTop core memory dataE\206 csr_result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+189,"SimTop core memory dataE\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+190,"SimTop core memory dataE\206 ctl\206 alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+191,"SimTop core memory dataE\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+192,"SimTop core memory dataE\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+193,"SimTop core memory dataE\206 ctl\206 csr_ops(0)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+194,"SimTop core memory dataE\206 ctl\206 csr_ops(0)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+196,"SimTop core memory dataE\206 ctl\206 csr_ops(0)\206 we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+197,"SimTop core memory dataE\206 ctl\206 csr_ops(1)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+198,"SimTop core memory dataE\206 ctl\206 csr_ops(1)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+200,"SimTop core memory dataE\206 ctl\206 csr_ops(1)\206 we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+201,"SimTop core memory dataE\206 ctl\206 csr_ops(2)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+202,"SimTop core memory dataE\206 ctl\206 csr_ops(2)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+204,"SimTop core memory dataE\206 ctl\206 csr_ops(2)\206 we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+205,"SimTop core memory dataE\206 ctl\206 is_mret",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+206,"SimTop core memory dataE\206 ctl\206 is_ecall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+207,"SimTop core memory dataE\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+208,"SimTop core memory dataE\206 mem_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+210,"SimTop core memory dataE\206 stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+211,"SimTop core memory dataE\206 csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declBit(c+32,"SimTop core memory dresp\206 addr_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+33,"SimTop core memory dresp\206 data_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+34,"SimTop core memory dresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+25,"SimTop core memory dreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+26,"SimTop core memory dreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+28,"SimTop core memory dreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+29,"SimTop core memory dreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+30,"SimTop core memory dreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+212,"SimTop core memory dataM\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+214,"SimTop core memory dataM\206 result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+216,"SimTop core memory dataM\206 csr_result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+218,"SimTop core memory dataM\206 ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+219,"SimTop core memory dataM\206 ctl\206 alufunc",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+220,"SimTop core memory dataM\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+221,"SimTop core memory dataM\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+222,"SimTop core memory dataM\206 ctl\206 csr_ops(0)\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+223,"SimTop core memory dataM\206 ctl\206 csr_ops(0)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+225,"SimTop core memory dataM\206 ctl\206 csr_ops(0)\206 we",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+226,"SimTop core memory dataM\206 ctl\206 csr_ops(1)\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+227,"SimTop core memory dataM\206 ctl\206 csr_ops(1)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+229,"SimTop core memory dataM\206 ctl\206 csr_ops(1)\206 we",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+230,"SimTop core memory dataM\206 ctl\206 csr_ops(2)\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+231,"SimTop core memory dataM\206 ctl\206 csr_ops(2)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+233,"SimTop core memory dataM\206 ctl\206 csr_ops(2)\206 we",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+234,"SimTop core memory dataM\206 ctl\206 is_mret",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+235,"SimTop core memory dataM\206 ctl\206 is_ecall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+236,"SimTop core memory dataM\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+237,"SimTop core memory dataM\206 mem_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+239,"SimTop core memory dataM\206 stall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+240,"SimTop core memory dataM\206 csr_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declBus(c+347,"SimTop core memory msize",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+348,"SimTop core memory strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBit(c+349,"SimTop core memory isunsigned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+350,"SimTop core memory sign_bit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+351,"SimTop core memory writedata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+353,"SimTop core memory readdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+638,"SimTop core reg_MW clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+639,"SimTop core reg_MW reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+307,"SimTop core reg_MW stalldata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+309,"SimTop core reg_MW flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+212,"SimTop core reg_MW dataM_in\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+214,"SimTop core reg_MW dataM_in\206 result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+216,"SimTop core reg_MW dataM_in\206 csr_result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+218,"SimTop core reg_MW dataM_in\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+219,"SimTop core reg_MW dataM_in\206 ctl\206 alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+220,"SimTop core reg_MW dataM_in\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+221,"SimTop core reg_MW dataM_in\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+222,"SimTop core reg_MW dataM_in\206 ctl\206 csr_ops(0)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+223,"SimTop core reg_MW dataM_in\206 ctl\206 csr_ops(0)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+225,"SimTop core reg_MW dataM_in\206 ctl\206 csr_ops(0)\206 we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+226,"SimTop core reg_MW dataM_in\206 ctl\206 csr_ops(1)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+227,"SimTop core reg_MW dataM_in\206 ctl\206 csr_ops(1)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+229,"SimTop core reg_MW dataM_in\206 ctl\206 csr_ops(1)\206 we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+230,"SimTop core reg_MW dataM_in\206 ctl\206 csr_ops(2)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+231,"SimTop core reg_MW dataM_in\206 ctl\206 csr_ops(2)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+233,"SimTop core reg_MW dataM_in\206 ctl\206 csr_ops(2)\206 we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+234,"SimTop core reg_MW dataM_in\206 ctl\206 is_mret",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+235,"SimTop core reg_MW dataM_in\206 ctl\206 is_ecall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+236,"SimTop core reg_MW dataM_in\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+237,"SimTop core reg_MW dataM_in\206 mem_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+239,"SimTop core reg_MW dataM_in\206 stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+240,"SimTop core reg_MW dataM_in\206 csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+241,"SimTop core reg_MW dataM_out\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+243,"SimTop core reg_MW dataM_out\206 result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+245,"SimTop core reg_MW dataM_out\206 csr_result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+247,"SimTop core reg_MW dataM_out\206 ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+248,"SimTop core reg_MW dataM_out\206 ctl\206 alufunc",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+249,"SimTop core reg_MW dataM_out\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+250,"SimTop core reg_MW dataM_out\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+251,"SimTop core reg_MW dataM_out\206 ctl\206 csr_ops(0)\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+252,"SimTop core reg_MW dataM_out\206 ctl\206 csr_ops(0)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+254,"SimTop core reg_MW dataM_out\206 ctl\206 csr_ops(0)\206 we",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+255,"SimTop core reg_MW dataM_out\206 ctl\206 csr_ops(1)\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+256,"SimTop core reg_MW dataM_out\206 ctl\206 csr_ops(1)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+258,"SimTop core reg_MW dataM_out\206 ctl\206 csr_ops(1)\206 we",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+259,"SimTop core reg_MW dataM_out\206 ctl\206 csr_ops(2)\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+260,"SimTop core reg_MW dataM_out\206 ctl\206 csr_ops(2)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+262,"SimTop core reg_MW dataM_out\206 ctl\206 csr_ops(2)\206 we",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+263,"SimTop core reg_MW dataM_out\206 ctl\206 is_mret",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+264,"SimTop core reg_MW dataM_out\206 ctl\206 is_ecall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+265,"SimTop core reg_MW dataM_out\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+266,"SimTop core reg_MW dataM_out\206 mem_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+268,"SimTop core reg_MW dataM_out\206 stall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+269,"SimTop core reg_MW dataM_out\206 csr_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+241,"SimTop core reg_MW last_dataM\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+243,"SimTop core reg_MW last_dataM\206 result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+245,"SimTop core reg_MW last_dataM\206 csr_result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+247,"SimTop core reg_MW last_dataM\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+248,"SimTop core reg_MW last_dataM\206 ctl\206 alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+249,"SimTop core reg_MW last_dataM\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+250,"SimTop core reg_MW last_dataM\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+251,"SimTop core reg_MW last_dataM\206 ctl\206 csr_ops(0)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+252,"SimTop core reg_MW last_dataM\206 ctl\206 csr_ops(0)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+254,"SimTop core reg_MW last_dataM\206 ctl\206 csr_ops(0)\206 we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+255,"SimTop core reg_MW last_dataM\206 ctl\206 csr_ops(1)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+256,"SimTop core reg_MW last_dataM\206 ctl\206 csr_ops(1)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+258,"SimTop core reg_MW last_dataM\206 ctl\206 csr_ops(1)\206 we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+259,"SimTop core reg_MW last_dataM\206 ctl\206 csr_ops(2)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+260,"SimTop core reg_MW last_dataM\206 ctl\206 csr_ops(2)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+262,"SimTop core reg_MW last_dataM\206 ctl\206 csr_ops(2)\206 we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+263,"SimTop core reg_MW last_dataM\206 ctl\206 is_mret",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+264,"SimTop core reg_MW last_dataM\206 ctl\206 is_ecall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+265,"SimTop core reg_MW last_dataM\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+266,"SimTop core reg_MW last_dataM\206 mem_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+268,"SimTop core reg_MW last_dataM\206 stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+269,"SimTop core reg_MW last_dataM\206 csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+241,"SimTop core writeback dataM\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+243,"SimTop core writeback dataM\206 result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+245,"SimTop core writeback dataM\206 csr_result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+247,"SimTop core writeback dataM\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+248,"SimTop core writeback dataM\206 ctl\206 alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+249,"SimTop core writeback dataM\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+250,"SimTop core writeback dataM\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+251,"SimTop core writeback dataM\206 ctl\206 csr_ops(0)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+252,"SimTop core writeback dataM\206 ctl\206 csr_ops(0)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+254,"SimTop core writeback dataM\206 ctl\206 csr_ops(0)\206 we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+255,"SimTop core writeback dataM\206 ctl\206 csr_ops(1)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+256,"SimTop core writeback dataM\206 ctl\206 csr_ops(1)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+258,"SimTop core writeback dataM\206 ctl\206 csr_ops(1)\206 we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+259,"SimTop core writeback dataM\206 ctl\206 csr_ops(2)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+260,"SimTop core writeback dataM\206 ctl\206 csr_ops(2)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+262,"SimTop core writeback dataM\206 ctl\206 csr_ops(2)\206 we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+263,"SimTop core writeback dataM\206 ctl\206 is_mret",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+264,"SimTop core writeback dataM\206 ctl\206 is_ecall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+265,"SimTop core writeback dataM\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+266,"SimTop core writeback dataM\206 mem_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+268,"SimTop core writeback dataM\206 stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+269,"SimTop core writeback dataM\206 csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+270,"SimTop core writeback dataW\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+272,"SimTop core writeback dataW\206 result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+274,"SimTop core writeback dataW\206 csr_result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+276,"SimTop core writeback dataW\206 ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+277,"SimTop core writeback dataW\206 ctl\206 alufunc",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+278,"SimTop core writeback dataW\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+279,"SimTop core writeback dataW\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+280,"SimTop core writeback dataW\206 ctl\206 csr_ops(0)\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+281,"SimTop core writeback dataW\206 ctl\206 csr_ops(0)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+283,"SimTop core writeback dataW\206 ctl\206 csr_ops(0)\206 we",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+284,"SimTop core writeback dataW\206 ctl\206 csr_ops(1)\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+285,"SimTop core writeback dataW\206 ctl\206 csr_ops(1)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+287,"SimTop core writeback dataW\206 ctl\206 csr_ops(1)\206 we",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+288,"SimTop core writeback dataW\206 ctl\206 csr_ops(2)\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+289,"SimTop core writeback dataW\206 ctl\206 csr_ops(2)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+291,"SimTop core writeback dataW\206 ctl\206 csr_ops(2)\206 we",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+292,"SimTop core writeback dataW\206 ctl\206 is_mret",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+293,"SimTop core writeback dataW\206 ctl\206 is_ecall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+294,"SimTop core writeback dataW\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+295,"SimTop core writeback dataW\206 mem_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+297,"SimTop core writeback dataW\206 stall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+298,"SimTop core writeback dataW\206 csr_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declBit(c+638,"SimTop core csr_regfile clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+639,"SimTop core csr_regfile reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+355,"SimTop core csr_regfile we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+298,"SimTop core csr_regfile wa",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+274,"SimTop core csr_regfile wd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+305,"SimTop core csr_regfile ra",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+652,"SimTop core csr_regfile rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+1,"SimTop core csr_regfile unnamedblk1 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+356,"SimTop core csr_regfile unnamedblk2 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBit(c+638,"SimTop core regfile clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+639,"SimTop core regfile reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+299,"SimTop core regfile ra1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+300,"SimTop core regfile ra2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+301,"SimTop core regfile rd1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+303,"SimTop core regfile rd2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+294,"SimTop core regfile wa",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+357,"SimTop core regfile WE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+272,"SimTop core regfile wd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+358,"SimTop core regfile regs(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+360,"SimTop core regfile regs(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+362,"SimTop core regfile regs(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+364,"SimTop core regfile regs(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+366,"SimTop core regfile regs(4)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+368,"SimTop core regfile regs(5)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+370,"SimTop core regfile regs(6)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+372,"SimTop core regfile regs(7)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+374,"SimTop core regfile regs(8)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+376,"SimTop core regfile regs(9)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+378,"SimTop core regfile regs(10)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+380,"SimTop core regfile regs(11)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+382,"SimTop core regfile regs(12)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+384,"SimTop core regfile regs(13)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+386,"SimTop core regfile regs(14)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+388,"SimTop core regfile regs(15)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+390,"SimTop core regfile regs(16)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+392,"SimTop core regfile regs(17)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+394,"SimTop core regfile regs(18)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+396,"SimTop core regfile regs(19)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+398,"SimTop core regfile regs(20)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+400,"SimTop core regfile regs(21)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+402,"SimTop core regfile regs(22)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+404,"SimTop core regfile regs(23)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+406,"SimTop core regfile regs(24)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+408,"SimTop core regfile regs(25)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+410,"SimTop core regfile regs(26)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+412,"SimTop core regfile regs(27)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+414,"SimTop core regfile regs(28)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+416,"SimTop core regfile regs(29)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+418,"SimTop core regfile regs(30)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+420,"SimTop core regfile regs(31)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+422,"SimTop core regfile regs_nxt(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+424,"SimTop core regfile regs_nxt(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+426,"SimTop core regfile regs_nxt(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+428,"SimTop core regfile regs_nxt(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+430,"SimTop core regfile regs_nxt(4)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+432,"SimTop core regfile regs_nxt(5)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+434,"SimTop core regfile regs_nxt(6)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+436,"SimTop core regfile regs_nxt(7)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core regfile regs_nxt(8)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+440,"SimTop core regfile regs_nxt(9)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+442,"SimTop core regfile regs_nxt(10)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+444,"SimTop core regfile regs_nxt(11)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+446,"SimTop core regfile regs_nxt(12)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+448,"SimTop core regfile regs_nxt(13)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+450,"SimTop core regfile regs_nxt(14)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+452,"SimTop core regfile regs_nxt(15)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+454,"SimTop core regfile regs_nxt(16)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+456,"SimTop core regfile regs_nxt(17)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+458,"SimTop core regfile regs_nxt(18)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+460,"SimTop core regfile regs_nxt(19)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+462,"SimTop core regfile regs_nxt(20)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+464,"SimTop core regfile regs_nxt(21)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+466,"SimTop core regfile regs_nxt(22)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+468,"SimTop core regfile regs_nxt(23)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+470,"SimTop core regfile regs_nxt(24)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+472,"SimTop core regfile regs_nxt(25)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+474,"SimTop core regfile regs_nxt(26)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+476,"SimTop core regfile regs_nxt(27)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+478,"SimTop core regfile regs_nxt(28)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+480,"SimTop core regfile regs_nxt(29)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+482,"SimTop core regfile regs_nxt(30)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+484,"SimTop core regfile regs_nxt(31)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+638,"SimTop core DifftestInstrCommit clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+656,"SimTop core DifftestInstrCommit coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+675,"SimTop core DifftestInstrCommit index",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+71,"SimTop core DifftestInstrCommit valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+270,"SimTop core DifftestInstrCommit pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+676,"SimTop core DifftestInstrCommit instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+486,"SimTop core DifftestInstrCommit skip",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+677,"SimTop core DifftestInstrCommit isRVC",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+677,"SimTop core DifftestInstrCommit scFailed",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+278,"SimTop core DifftestInstrCommit wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+487,"SimTop core DifftestInstrCommit wdest",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+272,"SimTop core DifftestInstrCommit wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+638,"SimTop core DifftestArchIntRegState clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+656,"SimTop core DifftestArchIntRegState coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+488,"SimTop core DifftestArchIntRegState gpr_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+490,"SimTop core DifftestArchIntRegState gpr_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+492,"SimTop core DifftestArchIntRegState gpr_2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+494,"SimTop core DifftestArchIntRegState gpr_3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+496,"SimTop core DifftestArchIntRegState gpr_4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+498,"SimTop core DifftestArchIntRegState gpr_5",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+500,"SimTop core DifftestArchIntRegState gpr_6",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+502,"SimTop core DifftestArchIntRegState gpr_7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+504,"SimTop core DifftestArchIntRegState gpr_8",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+506,"SimTop core DifftestArchIntRegState gpr_9",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+508,"SimTop core DifftestArchIntRegState gpr_10",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+510,"SimTop core DifftestArchIntRegState gpr_11",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+512,"SimTop core DifftestArchIntRegState gpr_12",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+514,"SimTop core DifftestArchIntRegState gpr_13",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+516,"SimTop core DifftestArchIntRegState gpr_14",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+518,"SimTop core DifftestArchIntRegState gpr_15",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+520,"SimTop core DifftestArchIntRegState gpr_16",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+522,"SimTop core DifftestArchIntRegState gpr_17",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+524,"SimTop core DifftestArchIntRegState gpr_18",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+526,"SimTop core DifftestArchIntRegState gpr_19",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+528,"SimTop core DifftestArchIntRegState gpr_20",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+530,"SimTop core DifftestArchIntRegState gpr_21",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+532,"SimTop core DifftestArchIntRegState gpr_22",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+534,"SimTop core DifftestArchIntRegState gpr_23",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+536,"SimTop core DifftestArchIntRegState gpr_24",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+538,"SimTop core DifftestArchIntRegState gpr_25",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+540,"SimTop core DifftestArchIntRegState gpr_26",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+542,"SimTop core DifftestArchIntRegState gpr_27",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+544,"SimTop core DifftestArchIntRegState gpr_28",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+546,"SimTop core DifftestArchIntRegState gpr_29",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop core DifftestArchIntRegState gpr_30",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+550,"SimTop core DifftestArchIntRegState gpr_31",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+638,"SimTop core DifftestTrapEvent clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+656,"SimTop core DifftestTrapEvent coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+677,"SimTop core DifftestTrapEvent valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+678,"SimTop core DifftestTrapEvent code",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+679,"SimTop core DifftestTrapEvent pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+679,"SimTop core DifftestTrapEvent cycleCnt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+679,"SimTop core DifftestTrapEvent instrCnt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+638,"SimTop core DifftestCSRState clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+656,"SimTop core DifftestCSRState coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+681,"SimTop core DifftestCSRState priviledgeMode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declQuad(c+657,"SimTop core DifftestCSRState mstatus",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+659,"SimTop core DifftestCSRState sstatus",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+654,"SimTop core DifftestCSRState mepc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+679,"SimTop core DifftestCSRState sepc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+661,"SimTop core DifftestCSRState mtval",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+679,"SimTop core DifftestCSRState stval",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+663,"SimTop core DifftestCSRState mtvec",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+679,"SimTop core DifftestCSRState stvec",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+665,"SimTop core DifftestCSRState mcause",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+679,"SimTop core DifftestCSRState scause",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+667,"SimTop core DifftestCSRState satp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+669,"SimTop core DifftestCSRState mip",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+671,"SimTop core DifftestCSRState mie",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+673,"SimTop core DifftestCSRState mscratch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+679,"SimTop core DifftestCSRState sscratch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+679,"SimTop core DifftestCSRState mideleg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+679,"SimTop core DifftestCSRState medeleg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+19,"SimTop icvt ireq\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+20,"SimTop icvt ireq\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+22,"SimTop icvt iresp\206 addr_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+23,"SimTop icvt iresp\206 data_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+24,"SimTop icvt iresp\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+36,"SimTop icvt icreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+37,"SimTop icvt icreq\206 is_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+38,"SimTop icvt icreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+39,"SimTop icvt icreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+41,"SimTop icvt icreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+42,"SimTop icvt icreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+44,"SimTop icvt icreq\206 len",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+45,"SimTop icvt icreq\206 burst",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+56,"SimTop icvt icresp\206 ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+57,"SimTop icvt icresp\206 last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+58,"SimTop icvt icresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+552,"SimTop icvt dresp\206 addr_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+553,"SimTop icvt dresp\206 data_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+554,"SimTop icvt dresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+556,"SimTop icvt inst dreq\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+557,"SimTop icvt inst dreq\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+682,"SimTop icvt inst dreq\206 size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+683,"SimTop icvt inst dreq\206 strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+684,"SimTop icvt inst dreq\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+552,"SimTop icvt inst dresp\206 addr_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+553,"SimTop icvt inst dresp\206 data_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+554,"SimTop icvt inst dresp\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+36,"SimTop icvt inst dcreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+37,"SimTop icvt inst dcreq\206 is_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+38,"SimTop icvt inst dcreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+39,"SimTop icvt inst dcreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+41,"SimTop icvt inst dcreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+42,"SimTop icvt inst dcreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+44,"SimTop icvt inst dcreq\206 len",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+45,"SimTop icvt inst dcreq\206 burst",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+56,"SimTop icvt inst dcresp\206 ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+57,"SimTop icvt inst dcresp\206 last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+58,"SimTop icvt inst dcresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+559,"SimTop icvt inst okay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+25,"SimTop dcvt dreq\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+26,"SimTop dcvt dreq\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+28,"SimTop dcvt dreq\206 size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+29,"SimTop dcvt dreq\206 strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+30,"SimTop dcvt dreq\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+32,"SimTop dcvt dresp\206 addr_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+33,"SimTop dcvt dresp\206 data_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+34,"SimTop dcvt dresp\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+46,"SimTop dcvt dcreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+47,"SimTop dcvt dcreq\206 is_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+48,"SimTop dcvt dcreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+49,"SimTop dcvt dcreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+51,"SimTop dcvt dcreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+52,"SimTop dcvt dcreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+54,"SimTop dcvt dcreq\206 len",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+55,"SimTop dcvt dcreq\206 burst",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+60,"SimTop dcvt dcresp\206 ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+61,"SimTop dcvt dcresp\206 last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+62,"SimTop dcvt dcresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+560,"SimTop dcvt okay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+638,"SimTop mux clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+639,"SimTop mux reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+561,"SimTop mux ireqs(0)\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+562,"SimTop mux ireqs(0)\206 is_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+563,"SimTop mux ireqs(0)\206 size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+564,"SimTop mux ireqs(0)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+566,"SimTop mux ireqs(0)\206 strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+567,"SimTop mux ireqs(0)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+569,"SimTop mux ireqs(0)\206 len",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+570,"SimTop mux ireqs(0)\206 burst",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+571,"SimTop mux ireqs(1)\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+572,"SimTop mux ireqs(1)\206 is_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+573,"SimTop mux ireqs(1)\206 size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+574,"SimTop mux ireqs(1)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+576,"SimTop mux ireqs(1)\206 strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+577,"SimTop mux ireqs(1)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+579,"SimTop mux ireqs(1)\206 len",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+580,"SimTop mux ireqs(1)\206 burst",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+60,"SimTop mux iresps(0)\206 ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+61,"SimTop mux iresps(0)\206 last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+62,"SimTop mux iresps(0)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+56,"SimTop mux iresps(1)\206 ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+57,"SimTop mux iresps(1)\206 last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+58,"SimTop mux iresps(1)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+2,"SimTop mux oreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+3,"SimTop mux oreq\206 is_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+4,"SimTop mux oreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+5,"SimTop mux oreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+7,"SimTop mux oreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+8,"SimTop mux oreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+10,"SimTop mux oreq\206 len",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+11,"SimTop mux oreq\206 burst",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+12,"SimTop mux oresp\206 ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+13,"SimTop mux oresp\206 last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+14,"SimTop mux oresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+581,"SimTop mux busy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+582,"SimTop mux index",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+583,"SimTop mux select",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBit(c+584,"SimTop mux saved_req\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+585,"SimTop mux saved_req\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+586,"SimTop mux saved_req\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+587,"SimTop mux saved_req\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+589,"SimTop mux saved_req\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+590,"SimTop mux saved_req\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+592,"SimTop mux saved_req\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+593,"SimTop mux saved_req\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+594,"SimTop mux selected_req\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+595,"SimTop mux selected_req\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+596,"SimTop mux selected_req\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+597,"SimTop mux selected_req\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+599,"SimTop mux selected_req\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+600,"SimTop mux selected_req\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+602,"SimTop mux selected_req\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+603,"SimTop mux selected_req\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+604,"SimTop mux unnamedblk1 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+605,"SimTop mux unnamedblk2 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBit(c+638,"SimTop ram clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+639,"SimTop ram reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+2,"SimTop ram oreq\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+3,"SimTop ram oreq\206 is_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+4,"SimTop ram oreq\206 size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+5,"SimTop ram oreq\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+7,"SimTop ram oreq\206 strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+8,"SimTop ram oreq\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+10,"SimTop ram oreq\206 len",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+11,"SimTop ram oreq\206 burst",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+12,"SimTop ram oresp\206 ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+13,"SimTop ram oresp\206 last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+14,"SimTop ram oresp\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+16,"SimTop ram trint",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+17,"SimTop ram swint",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+18,"SimTop ram exint",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+606,"SimTop ram saved_oreq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+607,"SimTop ram saved_oreq\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+608,"SimTop ram saved_oreq\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+609,"SimTop ram saved_oreq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+611,"SimTop ram saved_oreq\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+612,"SimTop ram saved_oreq\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+614,"SimTop ram saved_oreq\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+615,"SimTop ram saved_oreq\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        {
            const char* __VenumItemNames[]
            = {"NONE", "WAIT", "READ", "WRITE"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11"};
            tracep->declDTypeEnum(8, "RAMHelper2.__typeimpenum24", 4, 2, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+616,"SimTop ram state",8, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+617,"SimTop ram count_down",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+618,"SimTop ram size",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declQuad(c+619,"SimTop ram addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+621,"SimTop ram idx",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+623,"SimTop ram wrap1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+625,"SimTop ram wrap2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+627,"SimTop ram cyc_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LONGINT, false,-1, 63,0);
        tracep->declQuad(c+629,"SimTop ram ms_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LONGINT, false,-1, 63,0);
        tracep->declQuad(c+631,"SimTop ram wmask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+633,"SimTop ram mtime",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+635,"SimTop ram mtimecmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+637,"SimTop ram msip",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    }
}

void VSimTop___024root__traceFullTop0(void* voidSelf, VerilatedFst* tracep) VL_ATTR_COLD;
void VSimTop___024root__traceChgTop0(void* voidSelf, VerilatedFst* tracep);
void VSimTop___024root__traceCleanup(void* voidSelf, VerilatedFst* /*unused*/);

void VSimTop___024root__traceRegister(VSimTop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VSimTop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VSimTop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VSimTop___024root__traceCleanup, vlSelf);
    }
}

void VSimTop___024root__traceFullSub0(VSimTop___024root* vlSelf, VerilatedFst* tracep) VL_ATTR_COLD;

void VSimTop___024root__traceFullTop0(void* voidSelf, VerilatedFst* tracep) {
    VSimTop___024root* const __restrict vlSelf = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VSimTop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VSimTop___024root__traceFullSub0(VSimTop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__unnamedblk1__DOT__i),32);
        tracep->fullBit(oldp+2,((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                       >> 0x16U))));
        tracep->fullBit(oldp+3,((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                       >> 0x15U))));
        tracep->fullCData(oldp+4,((7U & (vlSelf->SimTop__DOT__oreq[4U] 
                                         >> 0x12U))),3);
        tracep->fullQData(oldp+5,((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__oreq[4U])) 
                                    << 0x2eU) | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__oreq[3U])) 
                                                  << 0xeU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__oreq[2U])) 
                                                    >> 0x12U)))),64);
        tracep->fullCData(oldp+7,((0xffU & (vlSelf->SimTop__DOT__oreq[2U] 
                                            >> 0xaU))),8);
        tracep->fullQData(oldp+8,((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__oreq[2U])) 
                                    << 0x36U) | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__oreq[1U])) 
                                                  << 0x16U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__oreq[0U])) 
                                                    >> 0xaU)))),64);
        tracep->fullCData(oldp+10,((0xffU & (vlSelf->SimTop__DOT__oreq[0U] 
                                             >> 2U))),8);
        tracep->fullCData(oldp+11,((3U & vlSelf->SimTop__DOT__oreq[0U])),2);
        tracep->fullBit(oldp+12,((1U & (vlSelf->SimTop__DOT__oresp[2U] 
                                        >> 1U))));
        tracep->fullBit(oldp+13,((1U & vlSelf->SimTop__DOT__oresp[2U])));
        tracep->fullQData(oldp+14,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__oresp[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__oresp[0U])))),64);
        tracep->fullBit(oldp+16,(vlSelf->SimTop__DOT__trint));
        tracep->fullBit(oldp+17,(vlSelf->SimTop__DOT__swint));
        tracep->fullBit(oldp+18,(vlSelf->SimTop__DOT__exint));
        tracep->fullBit(oldp+19,((1U & vlSelf->SimTop__DOT__ireq[2U])));
        tracep->fullQData(oldp+20,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__ireq[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__ireq[0U])))),64);
        tracep->fullBit(oldp+22,((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                                >> 0x21U)))));
        tracep->fullBit(oldp+23,((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                                >> 0x20U)))));
        tracep->fullIData(oldp+24,((IData)(vlSelf->SimTop__DOT__iresp)),32);
        tracep->fullBit(oldp+25,((1U & (vlSelf->SimTop__DOT__dreq[4U] 
                                        >> 0xbU))));
        tracep->fullQData(oldp+26,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__dreq[4U])) 
                                     << 0x35U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__dreq[3U])) 
                                                   << 0x15U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__dreq[2U])) 
                                                     >> 0xbU)))),64);
        tracep->fullCData(oldp+28,((7U & (vlSelf->SimTop__DOT__dreq[2U] 
                                          >> 8U))),3);
        tracep->fullCData(oldp+29,((0xffU & vlSelf->SimTop__DOT__dreq[2U])),8);
        tracep->fullQData(oldp+30,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__dreq[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__dreq[0U])))),64);
        tracep->fullBit(oldp+32,((1U & (vlSelf->SimTop__DOT__dresp[2U] 
                                        >> 1U))));
        tracep->fullBit(oldp+33,((1U & vlSelf->SimTop__DOT__dresp[2U])));
        tracep->fullQData(oldp+34,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__dresp[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__dresp[0U])))),64);
        tracep->fullBit(oldp+36,((1U & (vlSelf->SimTop__DOT__icreq[4U] 
                                        >> 0x16U))));
        tracep->fullBit(oldp+37,((1U & (vlSelf->SimTop__DOT__icreq[4U] 
                                        >> 0x15U))));
        tracep->fullCData(oldp+38,((7U & (vlSelf->SimTop__DOT__icreq[4U] 
                                          >> 0x12U))),3);
        tracep->fullQData(oldp+39,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__icreq[4U])) 
                                     << 0x2eU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__icreq[3U])) 
                                                   << 0xeU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__icreq[2U])) 
                                                     >> 0x12U)))),64);
        tracep->fullCData(oldp+41,((0xffU & (vlSelf->SimTop__DOT__icreq[2U] 
                                             >> 0xaU))),8);
        tracep->fullQData(oldp+42,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__icreq[2U])) 
                                     << 0x36U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__icreq[1U])) 
                                                   << 0x16U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__icreq[0U])) 
                                                     >> 0xaU)))),64);
        tracep->fullCData(oldp+44,((0xffU & (vlSelf->SimTop__DOT__icreq[0U] 
                                             >> 2U))),8);
        tracep->fullCData(oldp+45,((3U & vlSelf->SimTop__DOT__icreq[0U])),2);
        tracep->fullBit(oldp+46,((1U & (vlSelf->SimTop__DOT__dcreq[4U] 
                                        >> 0x16U))));
        tracep->fullBit(oldp+47,((1U & (vlSelf->SimTop__DOT__dcreq[4U] 
                                        >> 0x15U))));
        tracep->fullCData(oldp+48,((7U & (vlSelf->SimTop__DOT__dcreq[4U] 
                                          >> 0x12U))),3);
        tracep->fullQData(oldp+49,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__dcreq[4U])) 
                                     << 0x2eU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__dcreq[3U])) 
                                                   << 0xeU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__dcreq[2U])) 
                                                     >> 0x12U)))),64);
        tracep->fullCData(oldp+51,((0xffU & (vlSelf->SimTop__DOT__dcreq[2U] 
                                             >> 0xaU))),8);
        tracep->fullQData(oldp+52,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__dcreq[2U])) 
                                     << 0x36U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__dcreq[1U])) 
                                                   << 0x16U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__dcreq[0U])) 
                                                     >> 0xaU)))),64);
        tracep->fullCData(oldp+54,((0xffU & (vlSelf->SimTop__DOT__dcreq[0U] 
                                             >> 2U))),8);
        tracep->fullCData(oldp+55,((3U & vlSelf->SimTop__DOT__dcreq[0U])),2);
        tracep->fullBit(oldp+56,((1U & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                        >> 3U))));
        tracep->fullBit(oldp+57,((1U & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                        >> 2U))));
        tracep->fullQData(oldp+58,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT____Vcellout__mux__iresps[3U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U])) 
                                                     >> 2U)))),64);
        tracep->fullBit(oldp+60,((1U & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U] 
                                        >> 1U))));
        tracep->fullBit(oldp+61,((1U & vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U])));
        tracep->fullQData(oldp+62,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT____Vcellout__mux__iresps[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT____Vcellout__mux__iresps[0U])))),64);
        tracep->fullQData(oldp+64,(vlSelf->SimTop__DOT__core__DOT__pc),64);
        tracep->fullQData(oldp+66,(vlSelf->SimTop__DOT__core__DOT__pc_nxt),64);
        tracep->fullQData(oldp+68,(vlSelf->SimTop__DOT__core__DOT__offset),64);
        tracep->fullIData(oldp+70,(vlSelf->SimTop__DOT__core__DOT__raw_instr),32);
        tracep->fullBit(oldp+71,((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataW[0U] 
                                           >> 0xcU)))));
        tracep->fullIData(oldp+72,(((vlSelf->SimTop__DOT__core__DOT__dataF[3U] 
                                     << 0x1fU) | (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                                  >> 1U))),32);
        tracep->fullQData(oldp+73,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataF[2U])) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataF[1U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataF[0U])) 
                                                     >> 1U)))),64);
        tracep->fullBit(oldp+75,((1U & vlSelf->SimTop__DOT__core__DOT__dataF[0U])));
        tracep->fullIData(oldp+76,(((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                     << 0x1fU) | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                  >> 1U))),32);
        tracep->fullQData(oldp+77,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataF_nxt[1U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataF_nxt[0U])) 
                                                     >> 1U)))),64);
        tracep->fullBit(oldp+79,((1U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[0U])));
        tracep->fullIData(oldp+80,(((vlSelf->SimTop__DOT__core__DOT__saved_dataF[3U] 
                                     << 0x1fU) | (vlSelf->SimTop__DOT__core__DOT__saved_dataF[2U] 
                                                  >> 1U))),32);
        tracep->fullQData(oldp+81,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__saved_dataF[2U])) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__saved_dataF[1U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__saved_dataF[0U])) 
                                                     >> 1U)))),64);
        tracep->fullBit(oldp+83,((1U & vlSelf->SimTop__DOT__core__DOT__saved_dataF[0U])));
        tracep->fullQData(oldp+84,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD[0x16U])) 
                                     << 0x35U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD[0x15U])) 
                                                   << 0x15U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD[0x14U])) 
                                                     >> 0xbU)))),64);
        tracep->fullQData(oldp+86,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD[0x14U])) 
                                     << 0x35U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD[0x13U])) 
                                                   << 0x15U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD[0x12U])) 
                                                     >> 0xbU)))),64);
        tracep->fullQData(oldp+88,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD[0x12U])) 
                                     << 0x35U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD[0x11U])) 
                                                   << 0x15U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD[0x10U])) 
                                                     >> 0xbU)))),64);
        tracep->fullQData(oldp+90,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD[0x10U])) 
                                     << 0x35U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD[0xfU])) 
                                                   << 0x15U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD[0xeU])) 
                                                     >> 0xbU)))),64);
        tracep->fullQData(oldp+92,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD[0xeU])) 
                                     << 0x35U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD[0xdU])) 
                                                   << 0x15U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD[0xcU])) 
                                                     >> 0xbU)))),64);
        tracep->fullCData(oldp+94,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[0xcU] 
                                             >> 4U))),7);
        tracep->fullCData(oldp+95,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataD[0xcU] 
                                              << 3U) 
                                             | (vlSelf->SimTop__DOT__core__DOT__dataD[0xbU] 
                                                >> 0x1dU)))),7);
        tracep->fullBit(oldp+96,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[0xbU] 
                                        >> 0x1cU))));
        tracep->fullBit(oldp+97,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[0xbU] 
                                        >> 0x1bU))));
        tracep->fullSData(oldp+98,((0xfffU & ((vlSelf->SimTop__DOT__core__DOT__dataD[7U] 
                                               << 0xbU) 
                                              | (vlSelf->SimTop__DOT__core__DOT__dataD[6U] 
                                                 >> 0x15U)))),12);
        tracep->fullQData(oldp+99,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD[6U])) 
                                     << 0x2bU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD[5U])) 
                                                   << 0xbU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD[4U])) 
                                                     >> 0x15U)))),64);
        tracep->fullBit(oldp+101,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                         >> 0x14U))));
        tracep->fullSData(oldp+102,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__dataD[9U] 
                                               >> 2U))),12);
        tracep->fullQData(oldp+103,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD[9U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD[8U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD[7U])) 
                                                      >> 2U)))),64);
        tracep->fullBit(oldp+105,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[7U] 
                                         >> 1U))));
        tracep->fullSData(oldp+106,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__dataD[0xbU] 
                                               >> 0xfU))),12);
        tracep->fullQData(oldp+107,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD[0xbU])) 
                                      << 0x31U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD[0xaU])) 
                                                    << 0x11U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD[9U])) 
                                                      >> 0xfU)))),64);
        tracep->fullBit(oldp+109,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[9U] 
                                         >> 0xeU))));
        tracep->fullBit(oldp+110,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+111,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+112,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                              >> 0xdU))),5);
        tracep->fullQData(oldp+113,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD[4U])) 
                                      << 0x33U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD[3U])) 
                                                    << 0x13U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD[2U])) 
                                                      >> 0xdU)))),64);
        tracep->fullQData(oldp+115,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD[2U])) 
                                      << 0x33U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD[1U])) 
                                                    << 0x13U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD[0U])) 
                                                      >> 0xdU)))),64);
        tracep->fullBit(oldp+117,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                         >> 0xcU))));
        tracep->fullSData(oldp+118,((0xfffU & vlSelf->SimTop__DOT__core__DOT__dataD[0U])),12);
        tracep->fullQData(oldp+119,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0x16U])) 
                                      << 0x35U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0x15U])) 
                                                    << 0x15U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0x14U])) 
                                                      >> 0xbU)))),64);
        tracep->fullQData(oldp+121,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0x14U])) 
                                      << 0x35U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0x13U])) 
                                                    << 0x15U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0x12U])) 
                                                      >> 0xbU)))),64);
        tracep->fullQData(oldp+123,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0x12U])) 
                                      << 0x35U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0x11U])) 
                                                    << 0x15U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0x10U])) 
                                                      >> 0xbU)))),64);
        tracep->fullQData(oldp+125,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0x10U])) 
                                      << 0x35U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xfU])) 
                                                    << 0x15U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                                      >> 0xbU)))),64);
        tracep->fullQData(oldp+127,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                      << 0x35U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                    << 0x15U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xcU])) 
                                                      >> 0xbU)))),64);
        tracep->fullCData(oldp+129,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xcU] 
                                              >> 4U))),7);
        tracep->fullCData(oldp+130,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xcU] 
                                               << 3U) 
                                              | (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU] 
                                                 >> 0x1dU)))),7);
        tracep->fullBit(oldp+131,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU] 
                                         >> 0x1cU))));
        tracep->fullBit(oldp+132,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU] 
                                         >> 0x1bU))));
        tracep->fullSData(oldp+133,((0xfffU & ((vlSelf->SimTop__DOT__core__DOT__dataD_nxt[7U] 
                                                << 0xbU) 
                                               | (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[6U] 
                                                  >> 0x15U)))),12);
        tracep->fullQData(oldp+134,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[6U])) 
                                      << 0x2bU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])) 
                                                    << 0xbU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])) 
                                                      >> 0x15U)))),64);
        tracep->fullBit(oldp+136,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                         >> 0x14U))));
        tracep->fullSData(oldp+137,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[9U] 
                                               >> 2U))),12);
        tracep->fullQData(oldp+138,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[9U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[8U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[7U])) 
                                                      >> 2U)))),64);
        tracep->fullBit(oldp+140,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[7U] 
                                         >> 1U))));
        tracep->fullSData(oldp+141,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU] 
                                               >> 0xfU))),12);
        tracep->fullQData(oldp+142,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                      << 0x31U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xaU])) 
                                                    << 0x11U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[9U])) 
                                                      >> 0xfU)))),64);
        tracep->fullBit(oldp+144,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[9U] 
                                         >> 0xeU))));
        tracep->fullBit(oldp+145,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+146,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+147,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                              >> 0xdU))),5);
        tracep->fullQData(oldp+148,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])) 
                                      << 0x33U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[3U])) 
                                                    << 0x13U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[2U])) 
                                                      >> 0xdU)))),64);
        tracep->fullQData(oldp+150,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[2U])) 
                                      << 0x33U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[1U])) 
                                                    << 0x13U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0U])) 
                                                      >> 0xdU)))),64);
        tracep->fullBit(oldp+152,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0U] 
                                         >> 0xcU))));
        tracep->fullSData(oldp+153,((0xfffU & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0U])),12);
        tracep->fullQData(oldp+154,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE[0x10U])) 
                                      << 0x35U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE[0xfU])) 
                                                    << 0x15U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE[0xeU])) 
                                                      >> 0xbU)))),64);
        tracep->fullQData(oldp+156,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE[0xeU])) 
                                      << 0x35U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE[0xdU])) 
                                                    << 0x15U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE[0xcU])) 
                                                      >> 0xbU)))),64);
        tracep->fullQData(oldp+158,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE[0xcU])) 
                                      << 0x35U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE[0xbU])) 
                                                    << 0x15U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE[0xaU])) 
                                                      >> 0xbU)))),64);
        tracep->fullCData(oldp+160,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataE[0xaU] 
                                              >> 4U))),7);
        tracep->fullCData(oldp+161,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataE[0xaU] 
                                               << 3U) 
                                              | (vlSelf->SimTop__DOT__core__DOT__dataE[9U] 
                                                 >> 0x1dU)))),7);
        tracep->fullBit(oldp+162,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[9U] 
                                         >> 0x1cU))));
        tracep->fullBit(oldp+163,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[9U] 
                                         >> 0x1bU))));
        tracep->fullSData(oldp+164,((0xfffU & ((vlSelf->SimTop__DOT__core__DOT__dataE[5U] 
                                                << 0xbU) 
                                               | (vlSelf->SimTop__DOT__core__DOT__dataE[4U] 
                                                  >> 0x15U)))),12);
        tracep->fullQData(oldp+165,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE[4U])) 
                                      << 0x2bU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE[3U])) 
                                                    << 0xbU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE[2U])) 
                                                      >> 0x15U)))),64);
        tracep->fullBit(oldp+167,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                         >> 0x14U))));
        tracep->fullSData(oldp+168,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__dataE[7U] 
                                               >> 2U))),12);
        tracep->fullQData(oldp+169,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE[7U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE[6U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE[5U])) 
                                                      >> 2U)))),64);
        tracep->fullBit(oldp+171,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[5U] 
                                         >> 1U))));
        tracep->fullSData(oldp+172,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__dataE[9U] 
                                               >> 0xfU))),12);
        tracep->fullQData(oldp+173,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE[9U])) 
                                      << 0x31U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE[8U])) 
                                                    << 0x11U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE[7U])) 
                                                      >> 0xfU)))),64);
        tracep->fullBit(oldp+175,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[7U] 
                                         >> 0xeU))));
        tracep->fullBit(oldp+176,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+177,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+178,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                              >> 0xdU))),5);
        tracep->fullQData(oldp+179,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE[2U])) 
                                      << 0x33U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE[1U])) 
                                                    << 0x13U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE[0U])) 
                                                      >> 0xdU)))),64);
        tracep->fullBit(oldp+181,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                         >> 0xcU))));
        tracep->fullSData(oldp+182,((0xfffU & vlSelf->SimTop__DOT__core__DOT__dataE[0U])),12);
        tracep->fullQData(oldp+183,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0x10U])) 
                                      << 0x35U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0xfU])) 
                                                    << 0x15U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0xeU])) 
                                                      >> 0xbU)))),64);
        tracep->fullQData(oldp+185,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0xeU])) 
                                      << 0x35U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0xdU])) 
                                                    << 0x15U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0xcU])) 
                                                      >> 0xbU)))),64);
        tracep->fullQData(oldp+187,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0xcU])) 
                                      << 0x35U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0xbU])) 
                                                    << 0x15U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0xaU])) 
                                                      >> 0xbU)))),64);
        tracep->fullCData(oldp+189,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0xaU] 
                                              >> 4U))),7);
        tracep->fullCData(oldp+190,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0xaU] 
                                               << 3U) 
                                              | (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U] 
                                                 >> 0x1dU)))),7);
        tracep->fullBit(oldp+191,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U] 
                                         >> 0x1cU))));
        tracep->fullBit(oldp+192,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U] 
                                         >> 0x1bU))));
        tracep->fullSData(oldp+193,((0xfffU & ((vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U] 
                                                << 0xbU) 
                                               | (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[4U] 
                                                  >> 0x15U)))),12);
        tracep->fullQData(oldp+194,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[4U])) 
                                      << 0x2bU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])) 
                                                    << 0xbU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                      >> 0x15U)))),64);
        tracep->fullBit(oldp+196,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
                                         >> 0x14U))));
        tracep->fullSData(oldp+197,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U] 
                                               >> 2U))),12);
        tracep->fullQData(oldp+198,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[6U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U])) 
                                                      >> 2U)))),64);
        tracep->fullBit(oldp+200,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U] 
                                         >> 1U))));
        tracep->fullSData(oldp+201,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U] 
                                               >> 0xfU))),12);
        tracep->fullQData(oldp+202,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                                      << 0x31U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                                    << 0x11U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                                      >> 0xfU)))),64);
        tracep->fullBit(oldp+204,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U] 
                                         >> 0xeU))));
        tracep->fullBit(oldp+205,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+206,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+207,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
                                              >> 0xdU))),5);
        tracep->fullQData(oldp+208,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                      << 0x33U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                    << 0x13U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                      >> 0xdU)))),64);
        tracep->fullBit(oldp+210,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U] 
                                         >> 0xcU))));
        tracep->fullSData(oldp+211,((0xfffU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])),12);
        tracep->fullQData(oldp+212,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM[0x10U])) 
                                      << 0x35U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM[0xfU])) 
                                                    << 0x15U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM[0xeU])) 
                                                      >> 0xbU)))),64);
        tracep->fullQData(oldp+214,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM[0xeU])) 
                                      << 0x35U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM[0xdU])) 
                                                    << 0x15U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM[0xcU])) 
                                                      >> 0xbU)))),64);
        tracep->fullQData(oldp+216,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM[0xcU])) 
                                      << 0x35U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM[0xbU])) 
                                                    << 0x15U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM[0xaU])) 
                                                      >> 0xbU)))),64);
        tracep->fullCData(oldp+218,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataM[0xaU] 
                                              >> 4U))),7);
        tracep->fullCData(oldp+219,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataM[0xaU] 
                                               << 3U) 
                                              | (vlSelf->SimTop__DOT__core__DOT__dataM[9U] 
                                                 >> 0x1dU)))),7);
        tracep->fullBit(oldp+220,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[9U] 
                                         >> 0x1cU))));
        tracep->fullBit(oldp+221,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[9U] 
                                         >> 0x1bU))));
        tracep->fullSData(oldp+222,((0xfffU & ((vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                                                << 0xbU) 
                                               | (vlSelf->SimTop__DOT__core__DOT__dataM[4U] 
                                                  >> 0x15U)))),12);
        tracep->fullQData(oldp+223,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM[4U])) 
                                      << 0x2bU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM[3U])) 
                                                    << 0xbU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM[2U])) 
                                                      >> 0x15U)))),64);
        tracep->fullBit(oldp+225,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                         >> 0x14U))));
        tracep->fullSData(oldp+226,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__dataM[7U] 
                                               >> 2U))),12);
        tracep->fullQData(oldp+227,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM[7U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM[6U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM[5U])) 
                                                      >> 2U)))),64);
        tracep->fullBit(oldp+229,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                                         >> 1U))));
        tracep->fullSData(oldp+230,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__dataM[9U] 
                                               >> 0xfU))),12);
        tracep->fullQData(oldp+231,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM[9U])) 
                                      << 0x31U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM[8U])) 
                                                    << 0x11U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM[7U])) 
                                                      >> 0xfU)))),64);
        tracep->fullBit(oldp+233,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[7U] 
                                         >> 0xeU))));
        tracep->fullBit(oldp+234,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+235,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+236,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                              >> 0xdU))),5);
        tracep->fullQData(oldp+237,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM[2U])) 
                                      << 0x33U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM[1U])) 
                                                    << 0x13U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM[0U])) 
                                                      >> 0xdU)))),64);
        tracep->fullBit(oldp+239,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                                         >> 0xcU))));
        tracep->fullSData(oldp+240,((0xfffU & vlSelf->SimTop__DOT__core__DOT__dataM[0U])),12);
        tracep->fullQData(oldp+241,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0x10U])) 
                                      << 0x35U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0xfU])) 
                                                    << 0x15U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0xeU])) 
                                                      >> 0xbU)))),64);
        tracep->fullQData(oldp+243,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0xeU])) 
                                      << 0x35U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0xdU])) 
                                                    << 0x15U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0xcU])) 
                                                      >> 0xbU)))),64);
        tracep->fullQData(oldp+245,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0xcU])) 
                                      << 0x35U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0xbU])) 
                                                    << 0x15U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0xaU])) 
                                                      >> 0xbU)))),64);
        tracep->fullCData(oldp+247,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0xaU] 
                                              >> 4U))),7);
        tracep->fullCData(oldp+248,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0xaU] 
                                               << 3U) 
                                              | (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[9U] 
                                                 >> 0x1dU)))),7);
        tracep->fullBit(oldp+249,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[9U] 
                                         >> 0x1cU))));
        tracep->fullBit(oldp+250,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[9U] 
                                         >> 0x1bU))));
        tracep->fullSData(oldp+251,((0xfffU & ((vlSelf->SimTop__DOT__core__DOT__dataM_nxt[5U] 
                                                << 0xbU) 
                                               | (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[4U] 
                                                  >> 0x15U)))),12);
        tracep->fullQData(oldp+252,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM_nxt[4U])) 
                                      << 0x2bU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM_nxt[3U])) 
                                                    << 0xbU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U])) 
                                                      >> 0x15U)))),64);
        tracep->fullBit(oldp+254,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U] 
                                         >> 0x14U))));
        tracep->fullSData(oldp+255,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[7U] 
                                               >> 2U))),12);
        tracep->fullQData(oldp+256,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM_nxt[7U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM_nxt[6U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM_nxt[5U])) 
                                                      >> 2U)))),64);
        tracep->fullBit(oldp+258,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[5U] 
                                         >> 1U))));
        tracep->fullSData(oldp+259,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[9U] 
                                               >> 0xfU))),12);
        tracep->fullQData(oldp+260,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM_nxt[9U])) 
                                      << 0x31U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM_nxt[8U])) 
                                                    << 0x11U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM_nxt[7U])) 
                                                      >> 0xfU)))),64);
        tracep->fullBit(oldp+262,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[7U] 
                                         >> 0xeU))));
        tracep->fullBit(oldp+263,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+264,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+265,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U] 
                                              >> 0xdU))),5);
        tracep->fullQData(oldp+266,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U])) 
                                      << 0x33U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM_nxt[1U])) 
                                                    << 0x13U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0U])) 
                                                      >> 0xdU)))),64);
        tracep->fullBit(oldp+268,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0U] 
                                         >> 0xcU))));
        tracep->fullSData(oldp+269,((0xfffU & vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0U])),12);
        tracep->fullQData(oldp+270,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[0x10U])) 
                                      << 0x35U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataW[0xfU])) 
                                                    << 0x15U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataW[0xeU])) 
                                                      >> 0xbU)))),64);
        tracep->fullQData(oldp+272,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[0xeU])) 
                                      << 0x35U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataW[0xdU])) 
                                                    << 0x15U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataW[0xcU])) 
                                                      >> 0xbU)))),64);
        tracep->fullQData(oldp+274,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[0xcU])) 
                                      << 0x35U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataW[0xbU])) 
                                                    << 0x15U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataW[0xaU])) 
                                                      >> 0xbU)))),64);
        tracep->fullCData(oldp+276,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataW[0xaU] 
                                              >> 4U))),7);
        tracep->fullCData(oldp+277,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataW[0xaU] 
                                               << 3U) 
                                              | (vlSelf->SimTop__DOT__core__DOT__dataW[9U] 
                                                 >> 0x1dU)))),7);
        tracep->fullBit(oldp+278,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[9U] 
                                         >> 0x1cU))));
        tracep->fullBit(oldp+279,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[9U] 
                                         >> 0x1bU))));
        tracep->fullSData(oldp+280,((0xfffU & ((vlSelf->SimTop__DOT__core__DOT__dataW[5U] 
                                                << 0xbU) 
                                               | (vlSelf->SimTop__DOT__core__DOT__dataW[4U] 
                                                  >> 0x15U)))),12);
        tracep->fullQData(oldp+281,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                                      << 0x2bU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                                    << 0xbU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                      >> 0x15U)))),64);
        tracep->fullBit(oldp+283,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                         >> 0x14U))));
        tracep->fullSData(oldp+284,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__dataW[7U] 
                                               >> 2U))),12);
        tracep->fullQData(oldp+285,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                      >> 2U)))),64);
        tracep->fullBit(oldp+287,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[5U] 
                                         >> 1U))));
        tracep->fullSData(oldp+288,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__dataW[9U] 
                                               >> 0xfU))),12);
        tracep->fullQData(oldp+289,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[9U])) 
                                      << 0x31U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataW[8U])) 
                                                    << 0x11U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                                                      >> 0xfU)))),64);
        tracep->fullBit(oldp+291,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[7U] 
                                         >> 0xeU))));
        tracep->fullBit(oldp+292,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+293,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+294,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                              >> 0xdU))),5);
        tracep->fullQData(oldp+295,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                      << 0x33U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataW[1U])) 
                                                    << 0x13U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataW[0U])) 
                                                      >> 0xdU)))),64);
        tracep->fullBit(oldp+297,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[0U] 
                                         >> 0xcU))));
        tracep->fullSData(oldp+298,((0xfffU & vlSelf->SimTop__DOT__core__DOT__dataW[0U])),12);
        tracep->fullCData(oldp+299,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                              >> 0x10U))),5);
        tracep->fullCData(oldp+300,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                              >> 0x15U))),5);
        tracep->fullQData(oldp+301,(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1),64);
        tracep->fullQData(oldp+303,(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2),64);
        tracep->fullSData(oldp+305,(vlSelf->SimTop__DOT__core__DOT__csr_ra),12);
        tracep->fullBit(oldp+306,(vlSelf->SimTop__DOT__core__DOT__stallpc));
        tracep->fullBit(oldp+307,(vlSelf->SimTop__DOT__core__DOT__stalldata));
        tracep->fullBit(oldp+308,(vlSelf->SimTop__DOT__core__DOT__bubble));
        tracep->fullBit(oldp+309,(vlSelf->SimTop__DOT__core__DOT__flush));
        tracep->fullBit(oldp+310,(((((((((0x32U == 
                                          (0x7fU & 
                                           (vlSelf->SimTop__DOT__core__DOT__dataW[0xaU] 
                                            >> 4U))) 
                                         | (0x33U == 
                                            (0x7fU 
                                             & (vlSelf->SimTop__DOT__core__DOT__dataW[0xaU] 
                                                >> 4U)))) 
                                        | (0x34U == 
                                           (0x7fU & 
                                            (vlSelf->SimTop__DOT__core__DOT__dataW[0xaU] 
                                             >> 4U)))) 
                                       | (0x35U == 
                                          (0x7fU & 
                                           (vlSelf->SimTop__DOT__core__DOT__dataW[0xaU] 
                                            >> 4U)))) 
                                      | (0x36U == (0x7fU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataW[0xaU] 
                                                      >> 4U)))) 
                                     | (0x37U == (0x7fU 
                                                  & (vlSelf->SimTop__DOT__core__DOT__dataW[0xaU] 
                                                     >> 4U)))) 
                                    | (0x39U == (0x7fU 
                                                 & (vlSelf->SimTop__DOT__core__DOT__dataW[0xaU] 
                                                    >> 4U)))) 
                                   & (~ (vlSelf->SimTop__DOT__core__DOT__dataW[0U] 
                                         >> 0xcU)))));
        tracep->fullBit(oldp+311,(((~ (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                       >> 0xcU)) & 
                                   ((((~ (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                          >> 0xcU)) 
                                      & ((0x1fU & (
                                                   vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                   >> 0x10U)) 
                                         == (0x1fU 
                                             & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                >> 0xdU)))) 
                                     | ((~ (vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                                            >> 0xcU)) 
                                        & ((0x1fU & 
                                            (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                             >> 0x10U)) 
                                           == (0x1fU 
                                               & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                  >> 0xdU))))) 
                                    | ((~ (vlSelf->SimTop__DOT__core__DOT__dataW[0U] 
                                           >> 0xcU)) 
                                       & ((0x1fU & 
                                           (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                            >> 0x10U)) 
                                          == (0x1fU 
                                              & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                 >> 0xdU))))))));
        tracep->fullBit(oldp+312,(((~ (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                       >> 0xcU)) & 
                                   ((((~ (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                          >> 0xcU)) 
                                      & ((0x1fU & (
                                                   vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                   >> 0x15U)) 
                                         == (0x1fU 
                                             & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                >> 0xdU)))) 
                                     | ((~ (vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                                            >> 0xcU)) 
                                        & ((0x1fU & 
                                            (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                             >> 0x15U)) 
                                           == (0x1fU 
                                               & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                  >> 0xdU))))) 
                                    | ((~ (vlSelf->SimTop__DOT__core__DOT__dataW[0U] 
                                           >> 0xcU)) 
                                       & ((0x1fU & 
                                           (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                            >> 0x15U)) 
                                          == (0x1fU 
                                              & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                 >> 0xdU))))))));
        tracep->fullBit(oldp+313,(vlSelf->SimTop__DOT__core__DOT__hazard_jalr));
        tracep->fullBit(oldp+314,(vlSelf->SimTop__DOT__core__DOT__hazard_csr));
        tracep->fullCData(oldp+315,(vlSelf->SimTop__DOT__core__DOT__op_in),5);
        tracep->fullCData(oldp+316,(vlSelf->SimTop__DOT__core__DOT__op_out),5);
        tracep->fullCData(oldp+317,(vlSelf->SimTop__DOT__core__DOT__csr_state),2);
        tracep->fullCData(oldp+318,(vlSelf->SimTop__DOT__core__DOT__csr_state_next),2);
        tracep->fullCData(oldp+319,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[7U] 
                                              >> 0x12U))),7);
        tracep->fullCData(oldp+320,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[7U] 
                                              >> 0xbU))),7);
        tracep->fullBit(oldp+321,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[7U] 
                                         >> 0xaU))));
        tracep->fullBit(oldp+322,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[7U] 
                                         >> 9U))));
        tracep->fullSData(oldp+323,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[2U] 
                                               >> 3U))),12);
        tracep->fullQData(oldp+324,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[2U])) 
                                      << 0x3dU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[1U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[0U])) 
                                                      >> 3U)))),64);
        tracep->fullBit(oldp+326,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[0U] 
                                         >> 2U))));
        tracep->fullSData(oldp+327,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[4U] 
                                               >> 0x10U))),12);
        tracep->fullQData(oldp+328,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[4U])) 
                                      << 0x30U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[3U])) 
                                                    << 0x10U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[2U])) 
                                                      >> 0x10U)))),64);
        tracep->fullBit(oldp+330,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[2U] 
                                         >> 0xfU))));
        tracep->fullSData(oldp+331,((0xfffU & ((vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[7U] 
                                                << 3U) 
                                               | (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[6U] 
                                                  >> 0x1dU)))),12);
        tracep->fullQData(oldp+332,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[6U])) 
                                      << 0x23U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[5U])) 
                                                    << 3U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[4U])) 
                                                      >> 0x1dU)))),64);
        tracep->fullBit(oldp+334,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[4U] 
                                         >> 0x1cU))));
        tracep->fullBit(oldp+335,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[0U] 
                                         >> 1U))));
        tracep->fullBit(oldp+336,((1U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[0U])));
        tracep->fullCData(oldp+337,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                              >> 1U))),7);
        tracep->fullCData(oldp+338,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                               << 6U) 
                                              | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                 >> 0x1aU)))),7);
        tracep->fullCData(oldp+339,((7U & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                           >> 0xdU))),3);
        tracep->fullCData(oldp+340,((0x3fU & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                               << 5U) 
                                              | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                 >> 0x1bU)))),6);
        tracep->fullQData(oldp+341,(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result),64);
        tracep->fullQData(oldp+343,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a),64);
        tracep->fullQData(oldp+345,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b),64);
        tracep->fullCData(oldp+347,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__msize),3);
        tracep->fullCData(oldp+348,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe),8);
        tracep->fullBit(oldp+349,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__isunsigned));
        tracep->fullBit(oldp+350,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit));
        tracep->fullQData(oldp+351,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata),64);
        tracep->fullQData(oldp+353,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata),64);
        tracep->fullBit(oldp+355,((((((((0x32U == (0x7fU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataW[0xaU] 
                                                      >> 4U))) 
                                        | (0x33U == 
                                           (0x7fU & 
                                            (vlSelf->SimTop__DOT__core__DOT__dataW[0xaU] 
                                             >> 4U)))) 
                                       | (0x34U == 
                                          (0x7fU & 
                                           (vlSelf->SimTop__DOT__core__DOT__dataW[0xaU] 
                                            >> 4U)))) 
                                      | (0x35U == (0x7fU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataW[0xaU] 
                                                      >> 4U)))) 
                                     | (0x36U == (0x7fU 
                                                  & (vlSelf->SimTop__DOT__core__DOT__dataW[0xaU] 
                                                     >> 4U)))) 
                                    | (0x37U == (0x7fU 
                                                 & (vlSelf->SimTop__DOT__core__DOT__dataW[0xaU] 
                                                    >> 4U)))) 
                                   & (~ (vlSelf->SimTop__DOT__core__DOT__dataW[0U] 
                                         >> 0xcU)))));
        tracep->fullIData(oldp+356,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__unnamedblk2__DOT__i),32);
        tracep->fullBit(oldp+357,(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE));
        tracep->fullQData(oldp+358,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0U])))),64);
        tracep->fullQData(oldp+360,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[2U])))),64);
        tracep->fullQData(oldp+362,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[4U])))),64);
        tracep->fullQData(oldp+364,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[7U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[6U])))),64);
        tracep->fullQData(oldp+366,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[9U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[8U])))),64);
        tracep->fullQData(oldp+368,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xbU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xaU])))),64);
        tracep->fullQData(oldp+370,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xdU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xcU])))),64);
        tracep->fullQData(oldp+372,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xfU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xeU])))),64);
        tracep->fullQData(oldp+374,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x11U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x10U])))),64);
        tracep->fullQData(oldp+376,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x13U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x12U])))),64);
        tracep->fullQData(oldp+378,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x15U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x14U])))),64);
        tracep->fullQData(oldp+380,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x17U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x16U])))),64);
        tracep->fullQData(oldp+382,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x19U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x18U])))),64);
        tracep->fullQData(oldp+384,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1aU])))),64);
        tracep->fullQData(oldp+386,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1cU])))),64);
        tracep->fullQData(oldp+388,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1eU])))),64);
        tracep->fullQData(oldp+390,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x21U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x20U])))),64);
        tracep->fullQData(oldp+392,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x23U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x22U])))),64);
        tracep->fullQData(oldp+394,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x25U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x24U])))),64);
        tracep->fullQData(oldp+396,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x27U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x26U])))),64);
        tracep->fullQData(oldp+398,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x29U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x28U])))),64);
        tracep->fullQData(oldp+400,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2aU])))),64);
        tracep->fullQData(oldp+402,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2cU])))),64);
        tracep->fullQData(oldp+404,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2eU])))),64);
        tracep->fullQData(oldp+406,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x31U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x30U])))),64);
        tracep->fullQData(oldp+408,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x33U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x32U])))),64);
        tracep->fullQData(oldp+410,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x35U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x34U])))),64);
        tracep->fullQData(oldp+412,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x37U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x36U])))),64);
        tracep->fullQData(oldp+414,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x39U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x38U])))),64);
        tracep->fullQData(oldp+416,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3aU])))),64);
        tracep->fullQData(oldp+418,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3cU])))),64);
        tracep->fullQData(oldp+420,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3eU])))),64);
        tracep->fullQData(oldp+422,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0U])))),64);
        tracep->fullQData(oldp+424,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[2U])))),64);
        tracep->fullQData(oldp+426,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[4U])))),64);
        tracep->fullQData(oldp+428,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[7U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[6U])))),64);
        tracep->fullQData(oldp+430,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[9U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[8U])))),64);
        tracep->fullQData(oldp+432,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU])))),64);
        tracep->fullQData(oldp+434,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU])))),64);
        tracep->fullQData(oldp+436,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU])))),64);
        tracep->fullQData(oldp+438,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U])))),64);
        tracep->fullQData(oldp+440,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U])))),64);
        tracep->fullQData(oldp+442,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U])))),64);
        tracep->fullQData(oldp+444,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U])))),64);
        tracep->fullQData(oldp+446,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U])))),64);
        tracep->fullQData(oldp+448,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU])))),64);
        tracep->fullQData(oldp+450,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU])))),64);
        tracep->fullQData(oldp+452,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU])))),64);
        tracep->fullQData(oldp+454,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U])))),64);
        tracep->fullQData(oldp+456,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U])))),64);
        tracep->fullQData(oldp+458,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U])))),64);
        tracep->fullQData(oldp+460,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U])))),64);
        tracep->fullQData(oldp+462,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U])))),64);
        tracep->fullQData(oldp+464,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU])))),64);
        tracep->fullQData(oldp+466,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU])))),64);
        tracep->fullQData(oldp+468,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU])))),64);
        tracep->fullQData(oldp+470,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U])))),64);
        tracep->fullQData(oldp+472,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U])))),64);
        tracep->fullQData(oldp+474,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U])))),64);
        tracep->fullQData(oldp+476,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U])))),64);
        tracep->fullQData(oldp+478,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U])))),64);
        tracep->fullQData(oldp+480,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU])))),64);
        tracep->fullQData(oldp+482,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU])))),64);
        tracep->fullQData(oldp+484,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU])))),64);
        tracep->fullBit(oldp+486,((1U & ((vlSelf->SimTop__DOT__core__DOT__dataW[9U] 
                                          >> 0x1bU) 
                                         & (~ (vlSelf->SimTop__DOT__core__DOT__dataW[1U] 
                                               >> 0xcU))))));
        tracep->fullCData(oldp+487,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                              >> 0xdU))),8);
        tracep->fullQData(oldp+488,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0U])))),64);
        tracep->fullQData(oldp+490,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[2U])))),64);
        tracep->fullQData(oldp+492,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[4U])))),64);
        tracep->fullQData(oldp+494,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[7U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[6U])))),64);
        tracep->fullQData(oldp+496,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[9U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[8U])))),64);
        tracep->fullQData(oldp+498,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU])))),64);
        tracep->fullQData(oldp+500,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU])))),64);
        tracep->fullQData(oldp+502,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU])))),64);
        tracep->fullQData(oldp+504,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U])))),64);
        tracep->fullQData(oldp+506,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U])))),64);
        tracep->fullQData(oldp+508,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U])))),64);
        tracep->fullQData(oldp+510,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U])))),64);
        tracep->fullQData(oldp+512,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U])))),64);
        tracep->fullQData(oldp+514,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU])))),64);
        tracep->fullQData(oldp+516,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU])))),64);
        tracep->fullQData(oldp+518,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU])))),64);
        tracep->fullQData(oldp+520,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U])))),64);
        tracep->fullQData(oldp+522,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U])))),64);
        tracep->fullQData(oldp+524,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U])))),64);
        tracep->fullQData(oldp+526,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U])))),64);
        tracep->fullQData(oldp+528,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U])))),64);
        tracep->fullQData(oldp+530,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU])))),64);
        tracep->fullQData(oldp+532,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU])))),64);
        tracep->fullQData(oldp+534,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU])))),64);
        tracep->fullQData(oldp+536,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U])))),64);
        tracep->fullQData(oldp+538,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U])))),64);
        tracep->fullQData(oldp+540,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U])))),64);
        tracep->fullQData(oldp+542,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U])))),64);
        tracep->fullQData(oldp+544,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U])))),64);
        tracep->fullQData(oldp+546,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU])))),64);
        tracep->fullQData(oldp+548,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU])))),64);
        tracep->fullQData(oldp+550,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU])))),64);
        tracep->fullBit(oldp+552,((1U & (vlSelf->SimTop__DOT__icvt__DOT__dresp[2U] 
                                         >> 1U))));
        tracep->fullBit(oldp+553,((1U & vlSelf->SimTop__DOT__icvt__DOT__dresp[2U])));
        tracep->fullQData(oldp+554,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__icvt__DOT__dresp[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__icvt__DOT__dresp[0U])))),64);
        tracep->fullBit(oldp+556,((1U & vlSelf->SimTop__DOT__ireq[2U])));
        tracep->fullQData(oldp+557,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__ireq[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__ireq[0U])))),64);
        tracep->fullBit(oldp+559,((1U & ((vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                          >> 3U) & 
                                         (vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                          >> 2U)))));
        tracep->fullBit(oldp+560,((1U & ((vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U] 
                                          >> 1U) & 
                                         vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U]))));
        tracep->fullBit(oldp+561,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+562,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+563,((7U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                           >> 0x12U))),3);
        tracep->fullQData(oldp+564,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U])) 
                                      << 0x2eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[3U])) 
                                                    << 0xeU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[2U])) 
                                                      >> 0x12U)))),64);
        tracep->fullCData(oldp+566,((0xffU & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[2U] 
                                              >> 0xaU))),8);
        tracep->fullQData(oldp+567,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[2U])) 
                                      << 0x36U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[1U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[0U])) 
                                                      >> 0xaU)))),64);
        tracep->fullCData(oldp+569,((0xffU & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[0U] 
                                              >> 2U))),8);
        tracep->fullCData(oldp+570,((3U & vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[0U])),2);
        tracep->fullBit(oldp+571,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                         >> 0xdU))));
        tracep->fullBit(oldp+572,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                         >> 0xcU))));
        tracep->fullCData(oldp+573,((7U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                           >> 9U))),3);
        tracep->fullQData(oldp+574,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U])) 
                                      << 0x37U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[8U])) 
                                                    << 0x17U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[7U])) 
                                                      >> 9U)))),64);
        tracep->fullCData(oldp+576,((0xffU & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[7U] 
                                              >> 1U))),8);
        tracep->fullQData(oldp+577,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[7U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[6U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[5U])) 
                                                      >> 1U)))),64);
        tracep->fullCData(oldp+579,((0xffU & ((vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[5U] 
                                               << 7U) 
                                              | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                                 >> 0x19U)))),8);
        tracep->fullCData(oldp+580,((3U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                           >> 0x17U))),2);
        tracep->fullBit(oldp+581,(vlSelf->SimTop__DOT__mux__DOT__busy));
        tracep->fullIData(oldp+582,(vlSelf->SimTop__DOT__mux__DOT__index),32);
        tracep->fullIData(oldp+583,(vlSelf->SimTop__DOT__mux__DOT__select),32);
        tracep->fullBit(oldp+584,((1U & (vlSelf->SimTop__DOT__mux__DOT__saved_req[4U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+585,((1U & (vlSelf->SimTop__DOT__mux__DOT__saved_req[4U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+586,((7U & (vlSelf->SimTop__DOT__mux__DOT__saved_req[4U] 
                                           >> 0x12U))),3);
        tracep->fullQData(oldp+587,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__mux__DOT__saved_req[4U])) 
                                      << 0x2eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__mux__DOT__saved_req[3U])) 
                                                    << 0xeU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__mux__DOT__saved_req[2U])) 
                                                      >> 0x12U)))),64);
        tracep->fullCData(oldp+589,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__saved_req[2U] 
                                              >> 0xaU))),8);
        tracep->fullQData(oldp+590,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__mux__DOT__saved_req[2U])) 
                                      << 0x36U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__mux__DOT__saved_req[1U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__mux__DOT__saved_req[0U])) 
                                                      >> 0xaU)))),64);
        tracep->fullCData(oldp+592,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__saved_req[0U] 
                                              >> 2U))),8);
        tracep->fullCData(oldp+593,((3U & vlSelf->SimTop__DOT__mux__DOT__saved_req[0U])),2);
        tracep->fullBit(oldp+594,((1U & (vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+595,((1U & (vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+596,((7U & (vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
                                           >> 0x12U))),3);
        tracep->fullQData(oldp+597,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__mux__DOT__selected_req[4U])) 
                                      << 0x2eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__mux__DOT__selected_req[3U])) 
                                                    << 0xeU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__mux__DOT__selected_req[2U])) 
                                                      >> 0x12U)))),64);
        tracep->fullCData(oldp+599,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__selected_req[2U] 
                                              >> 0xaU))),8);
        tracep->fullQData(oldp+600,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__mux__DOT__selected_req[2U])) 
                                      << 0x36U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__mux__DOT__selected_req[1U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__mux__DOT__selected_req[0U])) 
                                                      >> 0xaU)))),64);
        tracep->fullCData(oldp+602,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__selected_req[0U] 
                                              >> 2U))),8);
        tracep->fullCData(oldp+603,((3U & vlSelf->SimTop__DOT__mux__DOT__selected_req[0U])),2);
        tracep->fullIData(oldp+604,(vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i),32);
        tracep->fullIData(oldp+605,(vlSelf->SimTop__DOT__mux__DOT__unnamedblk2__DOT__i),32);
        tracep->fullBit(oldp+606,((1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+607,((1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+608,((7U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                           >> 0x12U))),3);
        tracep->fullQData(oldp+609,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U])) 
                                      << 0x2eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__ram__DOT__saved_oreq[3U])) 
                                                    << 0xeU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                                      >> 0x12U)))),64);
        tracep->fullCData(oldp+611,((0xffU & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U] 
                                              >> 0xaU))),8);
        tracep->fullQData(oldp+612,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                      << 0x36U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__ram__DOT__saved_oreq[1U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U])) 
                                                      >> 0xaU)))),64);
        tracep->fullCData(oldp+614,((0xffU & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U] 
                                              >> 2U))),8);
        tracep->fullCData(oldp+615,((3U & vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U])),2);
        tracep->fullCData(oldp+616,(vlSelf->SimTop__DOT__ram__DOT__state),2);
        tracep->fullCData(oldp+617,(vlSelf->SimTop__DOT__ram__DOT__count_down),8);
        tracep->fullCData(oldp+618,(vlSelf->SimTop__DOT__ram__DOT__size),4);
        tracep->fullQData(oldp+619,(vlSelf->SimTop__DOT__ram__DOT__addr),64);
        tracep->fullQData(oldp+621,(vlSelf->SimTop__DOT__ram__DOT__idx),64);
        tracep->fullQData(oldp+623,(vlSelf->SimTop__DOT__ram__DOT__wrap1),64);
        tracep->fullQData(oldp+625,(vlSelf->SimTop__DOT__ram__DOT__wrap2),64);
        tracep->fullQData(oldp+627,(vlSelf->SimTop__DOT__ram__DOT__cyc_cnt),64);
        tracep->fullQData(oldp+629,(vlSelf->SimTop__DOT__ram__DOT__ms_cnt),64);
        tracep->fullQData(oldp+631,(vlSelf->SimTop__DOT__ram__DOT__wmask),64);
        tracep->fullQData(oldp+633,(vlSelf->SimTop__DOT__ram__DOT__mtime),64);
        tracep->fullQData(oldp+635,(vlSelf->SimTop__DOT__ram__DOT__mtimecmp),64);
        tracep->fullBit(oldp+637,(vlSelf->SimTop__DOT__ram__DOT__msip));
        tracep->fullBit(oldp+638,(vlSelf->clock));
        tracep->fullBit(oldp+639,(vlSelf->reset));
        tracep->fullQData(oldp+640,(vlSelf->io_logCtrl_log_begin),64);
        tracep->fullQData(oldp+642,(vlSelf->io_logCtrl_log_end),64);
        tracep->fullQData(oldp+644,(vlSelf->io_logCtrl_log_level),64);
        tracep->fullBit(oldp+646,(vlSelf->io_perfInfo_clean));
        tracep->fullBit(oldp+647,(vlSelf->io_perfInfo_dump));
        tracep->fullBit(oldp+648,(vlSelf->io_uart_out_valid));
        tracep->fullCData(oldp+649,(vlSelf->io_uart_out_ch),8);
        tracep->fullBit(oldp+650,(vlSelf->io_uart_in_valid));
        tracep->fullCData(oldp+651,(vlSelf->io_uart_in_ch),8);
        tracep->fullQData(oldp+652,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr
                                    [vlSelf->SimTop__DOT__core__DOT__csr_ra]),64);
        tracep->fullQData(oldp+654,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                    [0x341U]),64);
        tracep->fullCData(oldp+656,((0xffU & (IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                                     [0xf14U]))),8);
        tracep->fullQData(oldp+657,((0x7e79bbULL & 
                                     vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                     [0x300U])),64);
        tracep->fullQData(oldp+659,((0x800000030001e000ULL 
                                     & vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                     [0x100U])),64);
        tracep->fullQData(oldp+661,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                    [0x343U]),64);
        tracep->fullQData(oldp+663,((0xfffffffffffffffdULL 
                                     & vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                     [0x305U])),64);
        tracep->fullQData(oldp+665,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                    [0x342U]),64);
        tracep->fullQData(oldp+667,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                    [0x180U]),64);
        tracep->fullQData(oldp+669,((0x333ULL & vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                     [0x344U])),64);
        tracep->fullQData(oldp+671,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                    [0x304U]),64);
        tracep->fullQData(oldp+673,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                    [0x340U]),64);
        tracep->fullCData(oldp+675,(0U),8);
        tracep->fullIData(oldp+676,(0U),32);
        tracep->fullBit(oldp+677,(0U));
        tracep->fullCData(oldp+678,(0U),3);
        tracep->fullQData(oldp+679,(0ULL),64);
        tracep->fullCData(oldp+681,(3U),2);
        tracep->fullCData(oldp+682,(2U),3);
        tracep->fullCData(oldp+683,(0U),8);
        tracep->fullQData(oldp+684,(0ULL),64);
    }
}

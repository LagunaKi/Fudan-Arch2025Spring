// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSimTop.h for the primary calling header

#ifndef VERILATED_VSIMTOP___024ROOT_H_
#define VERILATED_VSIMTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VSimTop__Syms;
class VSimTop_VerilatedFst;
class VSimTop___024unit;


//----------

VL_MODULE(VSimTop___024root) {
  public:
    // CELLS
    VSimTop___024unit* __PVT____024unit;

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_perfInfo_clean,0,0);
    VL_IN8(io_perfInfo_dump,0,0);
    VL_OUT8(io_uart_out_valid,0,0);
    VL_OUT8(io_uart_out_ch,7,0);
    VL_OUT8(io_uart_in_valid,0,0);
    VL_IN8(io_uart_in_ch,7,0);
    VL_IN64(io_logCtrl_log_begin,63,0);
    VL_IN64(io_logCtrl_log_end,63,0);
    VL_IN64(io_logCtrl_log_level,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ SimTop__DOT__trint;
    CData/*0:0*/ SimTop__DOT__swint;
    CData/*0:0*/ SimTop__DOT__exint;
    CData/*0:0*/ SimTop__DOT__core__DOT__stallpc;
    CData/*0:0*/ SimTop__DOT__core__DOT__stalldata;
    CData/*0:0*/ SimTop__DOT__core__DOT__bubble;
    CData/*2:0*/ SimTop__DOT__core__DOT__memory__DOT__msize;
    CData/*7:0*/ SimTop__DOT__core__DOT__memory__DOT__strobe;
    CData/*0:0*/ SimTop__DOT__core__DOT__memory__DOT__isunsigned;
    CData/*0:0*/ SimTop__DOT__core__DOT__memory__DOT__sign_bit;
    CData/*0:0*/ SimTop__DOT__mux__DOT__busy;
    CData/*1:0*/ SimTop__DOT__ram__DOT__state;
    CData/*7:0*/ SimTop__DOT__ram__DOT__count_down;
    CData/*3:0*/ SimTop__DOT__ram__DOT__size;
    CData/*0:0*/ SimTop__DOT__ram__DOT__msip;
    SData/*15:0*/ SimTop__DOT__core__DOT__decode__DOT__ctl;
    IData/*31:0*/ SimTop__DOT__core__DOT__raw_instr;
    IData/*31:0*/ SimTop__DOT__core__DOT__execute__DOT__alu__DOT__half;
    IData/*31:0*/ SimTop__DOT__mux__DOT__index;
    IData/*31:0*/ SimTop__DOT__mux__DOT__select;
    IData/*31:0*/ SimTop__DOT__mux__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ SimTop__DOT__mux__DOT__unnamedblk2__DOT__i;
    VlWide<5>/*150:0*/ SimTop__DOT__oreq;
    VlWide<3>/*65:0*/ SimTop__DOT__oresp;
    VlWide<3>/*64:0*/ SimTop__DOT__ireq;
    QData/*33:0*/ SimTop__DOT__iresp;
    VlWide<5>/*139:0*/ SimTop__DOT__dreq;
    VlWide<3>/*65:0*/ SimTop__DOT__dresp;
    VlWide<5>/*150:0*/ SimTop__DOT__icreq;
    VlWide<5>/*150:0*/ SimTop__DOT__dcreq;
    QData/*63:0*/ SimTop__DOT__core__DOT__pc;
    QData/*63:0*/ SimTop__DOT__core__DOT__pc_nxt;
    VlWide<4>/*96:0*/ SimTop__DOT__core__DOT__dataF;
    VlWide<4>/*96:0*/ SimTop__DOT__core__DOT__dataF_nxt;
    VlWide<4>/*96:0*/ SimTop__DOT__core__DOT__saved_dataF;
    VlWide<11>/*341:0*/ SimTop__DOT__core__DOT__dataD;
    VlWide<11>/*341:0*/ SimTop__DOT__core__DOT__dataD_nxt;
    VlWide<7>/*213:0*/ SimTop__DOT__core__DOT__dataE;
    VlWide<7>/*213:0*/ SimTop__DOT__core__DOT__dataE_nxt;
    VlWide<7>/*213:0*/ SimTop__DOT__core__DOT__dataM;
    VlWide<7>/*213:0*/ SimTop__DOT__core__DOT__dataM_nxt;
    VlWide<7>/*213:0*/ SimTop__DOT__core__DOT__dataW;
    QData/*63:0*/ SimTop__DOT__core__DOT__execute__DOT__alu_a;
    QData/*63:0*/ SimTop__DOT__core__DOT__execute__DOT__alu_b;
    QData/*63:0*/ SimTop__DOT__core__DOT__memory__DOT__writedata;
    QData/*63:0*/ SimTop__DOT__core__DOT__memory__DOT__readdata;
    VlWide<64>/*2047:0*/ SimTop__DOT__core__DOT__regfile__DOT__regs;
    VlWide<64>/*2047:0*/ SimTop__DOT__core__DOT__regfile__DOT__regs_nxt;
    VlWide<3>/*65:0*/ SimTop__DOT__icvt__DOT__dresp;
    VlWide<5>/*150:0*/ SimTop__DOT__mux__DOT__saved_req;
    VlWide<5>/*150:0*/ SimTop__DOT__mux__DOT__selected_req;
    VlWide<5>/*150:0*/ SimTop__DOT__ram__DOT__saved_oreq;
    QData/*63:0*/ SimTop__DOT__ram__DOT__addr;
    QData/*63:0*/ SimTop__DOT__ram__DOT__idx;
    QData/*63:0*/ SimTop__DOT__ram__DOT__wrap1;
    QData/*63:0*/ SimTop__DOT__ram__DOT__wrap2;
    QData/*63:0*/ SimTop__DOT__ram__DOT__cyc_cnt;
    QData/*63:0*/ SimTop__DOT__ram__DOT__ms_cnt;
    QData/*63:0*/ SimTop__DOT__ram__DOT__wmask;
    QData/*63:0*/ SimTop__DOT__ram__DOT__mtime;
    QData/*63:0*/ SimTop__DOT__ram__DOT__mtimecmp;

    // LOCAL VARIABLES
    CData/*0:0*/ SimTop__DOT__core__DOT____Vcellinp__regfile__WE;
    CData/*0:0*/ SimTop__DOT__mux__DOT____Vxrand3;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlWide<5>/*150:0*/ SimTop__DOT__mux__DOT____Vxrand2;
    VlWide<5>/*150:0*/ SimTop__DOT__mux__DOT____Vxrand1;
    IData/*31:0*/ __Vfunc_get_switch__9__Vfuncout;
    VlWide<5>/*131:0*/ SimTop__DOT____Vcellout__mux__iresps;
    VlWide<10>/*301:0*/ SimTop__DOT____Vcellinp__mux__ireqs;
    QData/*63:0*/ SimTop__DOT__core__DOT____Vcellout__regfile__rd1;
    VlWide<3>/*65:0*/ SimTop__DOT__mux__DOT____Vlvbound4;
    QData/*63:0*/ __Vfunc_ram_read_helper__10__Vfuncout;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VSimTop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VSimTop___024root);  ///< Copying not allowed
  public:
    VSimTop___024root(const char* name);
    ~VSimTop___024root();

    // INTERNAL METHODS
    void __Vconfigure(VSimTop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

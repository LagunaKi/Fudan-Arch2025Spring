// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VSimTop__Syms.h"


void VSimTop___024root__traceChgSub0(VSimTop___024root* vlSelf, VerilatedFst* tracep);

void VSimTop___024root__traceChgTop0(void* voidSelf, VerilatedFst* tracep) {
    VSimTop___024root* const __restrict vlSelf = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VSimTop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VSimTop___024root__traceChgSub0(VSimTop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgBit(oldp+0,((1U & (vlSelf->SimTop__DOT__dreq[4U] 
                                          >> 0xbU))));
            tracep->chgQData(oldp+1,((((QData)((IData)(
                                                       vlSelf->SimTop__DOT__dreq[4U])) 
                                       << 0x35U) | 
                                      (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__dreq[3U])) 
                                        << 0x15U) | 
                                       ((QData)((IData)(
                                                        vlSelf->SimTop__DOT__dreq[2U])) 
                                        >> 0xbU)))),64);
            tracep->chgCData(oldp+3,((7U & (vlSelf->SimTop__DOT__dreq[2U] 
                                            >> 8U))),3);
            tracep->chgCData(oldp+4,((0xffU & vlSelf->SimTop__DOT__dreq[2U])),8);
            tracep->chgQData(oldp+5,((((QData)((IData)(
                                                       vlSelf->SimTop__DOT__dreq[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__dreq[0U])))),64);
            tracep->chgBit(oldp+7,((1U & (vlSelf->SimTop__DOT__dcreq[4U] 
                                          >> 0x16U))));
            tracep->chgBit(oldp+8,((1U & (vlSelf->SimTop__DOT__dcreq[4U] 
                                          >> 0x15U))));
            tracep->chgCData(oldp+9,((7U & (vlSelf->SimTop__DOT__dcreq[4U] 
                                            >> 0x12U))),3);
            tracep->chgQData(oldp+10,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__dcreq[4U])) 
                                        << 0x2eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__dcreq[3U])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__dcreq[2U])) 
                                         >> 0x12U)))),64);
            tracep->chgCData(oldp+12,((0xffU & (vlSelf->SimTop__DOT__dcreq[2U] 
                                                >> 0xaU))),8);
            tracep->chgQData(oldp+13,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__dcreq[2U])) 
                                        << 0x36U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__dcreq[1U])) 
                                         << 0x16U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__dcreq[0U])) 
                                           >> 0xaU)))),64);
            tracep->chgCData(oldp+15,((0xffU & (vlSelf->SimTop__DOT__dcreq[0U] 
                                                >> 2U))),8);
            tracep->chgCData(oldp+16,((3U & vlSelf->SimTop__DOT__dcreq[0U])),2);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+17,((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                           >> 0x16U))));
            tracep->chgBit(oldp+18,((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                           >> 0x15U))));
            tracep->chgCData(oldp+19,((7U & (vlSelf->SimTop__DOT__oreq[4U] 
                                             >> 0x12U))),3);
            tracep->chgQData(oldp+20,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oreq[4U])) 
                                        << 0x2eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__oreq[3U])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__oreq[2U])) 
                                         >> 0x12U)))),64);
            tracep->chgCData(oldp+22,((0xffU & (vlSelf->SimTop__DOT__oreq[2U] 
                                                >> 0xaU))),8);
            tracep->chgQData(oldp+23,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oreq[2U])) 
                                        << 0x36U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__oreq[1U])) 
                                         << 0x16U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__oreq[0U])) 
                                           >> 0xaU)))),64);
            tracep->chgCData(oldp+25,((0xffU & (vlSelf->SimTop__DOT__oreq[0U] 
                                                >> 2U))),8);
            tracep->chgCData(oldp+26,((3U & vlSelf->SimTop__DOT__oreq[0U])),2);
            tracep->chgBit(oldp+27,((1U & (vlSelf->SimTop__DOT__oresp[2U] 
                                           >> 1U))));
            tracep->chgBit(oldp+28,((1U & vlSelf->SimTop__DOT__oresp[2U])));
            tracep->chgQData(oldp+29,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oresp[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__oresp[0U])))),64);
            tracep->chgBit(oldp+31,(vlSelf->SimTop__DOT__trint));
            tracep->chgBit(oldp+32,(vlSelf->SimTop__DOT__swint));
            tracep->chgBit(oldp+33,(vlSelf->SimTop__DOT__exint));
            tracep->chgQData(oldp+34,(vlSelf->SimTop__DOT__core__DOT__pc),64);
            tracep->chgBit(oldp+36,((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                                   >> 0x21U)))));
            tracep->chgBit(oldp+37,((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                                   >> 0x20U)))));
            tracep->chgIData(oldp+38,((IData)(vlSelf->SimTop__DOT__iresp)),32);
            tracep->chgBit(oldp+39,((1U & ((vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U] 
                                            >> 1U) 
                                           & vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U]))));
            tracep->chgQData(oldp+40,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT____Vcellout__mux__iresps[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT____Vcellout__mux__iresps[0U])))),64);
            tracep->chgBit(oldp+42,((1U & (vlSelf->SimTop__DOT__icreq[4U] 
                                           >> 0x16U))));
            tracep->chgBit(oldp+43,((1U & (vlSelf->SimTop__DOT__icreq[4U] 
                                           >> 0x15U))));
            tracep->chgCData(oldp+44,((7U & (vlSelf->SimTop__DOT__icreq[4U] 
                                             >> 0x12U))),3);
            tracep->chgQData(oldp+45,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__icreq[4U])) 
                                        << 0x2eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__icreq[3U])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__icreq[2U])) 
                                         >> 0x12U)))),64);
            tracep->chgCData(oldp+47,((0xffU & (vlSelf->SimTop__DOT__icreq[2U] 
                                                >> 0xaU))),8);
            tracep->chgQData(oldp+48,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__icreq[2U])) 
                                        << 0x36U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__icreq[1U])) 
                                         << 0x16U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__icreq[0U])) 
                                           >> 0xaU)))),64);
            tracep->chgCData(oldp+50,((0xffU & (vlSelf->SimTop__DOT__icreq[0U] 
                                                >> 2U))),8);
            tracep->chgCData(oldp+51,((3U & vlSelf->SimTop__DOT__icreq[0U])),2);
            tracep->chgBit(oldp+52,((1U & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                           >> 3U))));
            tracep->chgBit(oldp+53,((1U & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                           >> 2U))));
            tracep->chgQData(oldp+54,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U])) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT____Vcellout__mux__iresps[3U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U])) 
                                           >> 2U)))),64);
            tracep->chgBit(oldp+56,((1U & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U] 
                                           >> 1U))));
            tracep->chgBit(oldp+57,((1U & vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U])));
            tracep->chgQData(oldp+58,(vlSelf->SimTop__DOT__core__DOT__pc),64);
            tracep->chgQData(oldp+60,((4ULL + vlSelf->SimTop__DOT__core__DOT__pc)),64);
            tracep->chgBit(oldp+62,(vlSelf->SimTop__DOT__core__DOT__handin));
            tracep->chgBit(oldp+63,((1U & (~ (IData)(
                                                     (vlSelf->SimTop__DOT__iresp 
                                                      >> 0x20U))))));
            tracep->chgIData(oldp+64,(((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                        << 0x1fU) | 
                                       (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                        >> 1U))),32);
            tracep->chgQData(oldp+65,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) 
                                        << 0x3fU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataF_next[1U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataF_next[0U])) 
                                           >> 1U)))),64);
            tracep->chgBit(oldp+67,((1U & vlSelf->SimTop__DOT__core__DOT__dataF_next[0U])));
            tracep->chgQData(oldp+68,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[0xaU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[9U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[8U])) 
                                         >> 0x16U)))),64);
            tracep->chgQData(oldp+70,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[8U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[7U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[6U])) 
                                         >> 0x16U)))),64);
            tracep->chgQData(oldp+72,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[6U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[5U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[4U])) 
                                         >> 0x16U)))),64);
            tracep->chgCData(oldp+74,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                >> 0xfU))),7);
            tracep->chgCData(oldp+75,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                >> 8U))),7);
            tracep->chgBit(oldp+76,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                           >> 7U))));
            tracep->chgBit(oldp+77,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                           >> 6U))));
            tracep->chgCData(oldp+78,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                >> 1U))),5);
            tracep->chgQData(oldp+79,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[4U])) 
                                        << 0x3fU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[3U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD[2U])) 
                                           >> 1U)))),64);
            tracep->chgQData(oldp+81,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[2U])) 
                                        << 0x3fU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[1U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD[0U])) 
                                           >> 1U)))),64);
            tracep->chgBit(oldp+83,((1U & vlSelf->SimTop__DOT__core__DOT__dataD[0U])));
            tracep->chgQData(oldp+84,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                         >> 0x16U)))),64);
            tracep->chgQData(oldp+86,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[7U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[6U])) 
                                         >> 0x16U)))),64);
            tracep->chgQData(oldp+88,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[6U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[5U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])) 
                                         >> 0x16U)))),64);
            tracep->chgCData(oldp+90,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                                >> 0xfU))),7);
            tracep->chgCData(oldp+91,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                                >> 8U))),7);
            tracep->chgBit(oldp+92,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                           >> 7U))));
            tracep->chgBit(oldp+93,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                           >> 6U))));
            tracep->chgCData(oldp+94,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                                >> 1U))),5);
            tracep->chgQData(oldp+95,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])) 
                                        << 0x3fU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[3U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD_next[2U])) 
                                           >> 1U)))),64);
            tracep->chgQData(oldp+97,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[2U])) 
                                        << 0x3fU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[1U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD_next[0U])) 
                                           >> 1U)))),64);
            tracep->chgBit(oldp+99,((1U & vlSelf->SimTop__DOT__core__DOT__dataD_next[0U])));
            tracep->chgQData(oldp+100,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE[6U])) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE[5U])) 
                                            << 0xaU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE[4U])) 
                                              >> 0x16U)))),64);
            tracep->chgQData(oldp+102,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE[4U])) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE[3U])) 
                                            << 0xaU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE[2U])) 
                                              >> 0x16U)))),64);
            tracep->chgCData(oldp+104,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                 >> 0xfU))),7);
            tracep->chgCData(oldp+105,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                 >> 8U))),7);
            tracep->chgBit(oldp+106,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                            >> 7U))));
            tracep->chgBit(oldp+107,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                            >> 6U))));
            tracep->chgCData(oldp+108,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                 >> 1U))),5);
            tracep->chgQData(oldp+109,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE[2U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE[1U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE[0U])) 
                                              >> 1U)))),64);
            tracep->chgBit(oldp+111,((1U & vlSelf->SimTop__DOT__core__DOT__dataE[0U])));
            tracep->chgQData(oldp+112,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                            << 0xaU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                              >> 0x16U)))),64);
            tracep->chgQData(oldp+114,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_next[3U])) 
                                            << 0xaU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                              >> 0x16U)))),64);
            tracep->chgCData(oldp+116,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                 >> 0xfU))),7);
            tracep->chgCData(oldp+117,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                 >> 8U))),7);
            tracep->chgBit(oldp+118,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                            >> 7U))));
            tracep->chgBit(oldp+119,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                            >> 6U))));
            tracep->chgCData(oldp+120,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                 >> 1U))),5);
            tracep->chgQData(oldp+121,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                              >> 1U)))),64);
            tracep->chgBit(oldp+123,((1U & vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])));
            tracep->chgQData(oldp+124,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM[6U])) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM[5U])) 
                                            << 0xaU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM[4U])) 
                                              >> 0x16U)))),64);
            tracep->chgQData(oldp+126,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM[4U])) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM[3U])) 
                                            << 0xaU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM[2U])) 
                                              >> 0x16U)))),64);
            tracep->chgCData(oldp+128,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                 >> 0xfU))),7);
            tracep->chgCData(oldp+129,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                 >> 8U))),7);
            tracep->chgBit(oldp+130,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                            >> 7U))));
            tracep->chgBit(oldp+131,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                            >> 6U))));
            tracep->chgCData(oldp+132,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                 >> 1U))),5);
            tracep->chgQData(oldp+133,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM[2U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM[1U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM[0U])) 
                                              >> 1U)))),64);
            tracep->chgBit(oldp+135,((1U & vlSelf->SimTop__DOT__core__DOT__dataM[0U])));
            tracep->chgQData(oldp+136,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM_next[6U])) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM_next[5U])) 
                                            << 0xaU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM_next[4U])) 
                                              >> 0x16U)))),64);
            tracep->chgQData(oldp+138,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM_next[4U])) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM_next[3U])) 
                                            << 0xaU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM_next[2U])) 
                                              >> 0x16U)))),64);
            tracep->chgCData(oldp+140,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataM_next[2U] 
                                                 >> 0xfU))),7);
            tracep->chgCData(oldp+141,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataM_next[2U] 
                                                 >> 8U))),7);
            tracep->chgBit(oldp+142,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_next[2U] 
                                            >> 7U))));
            tracep->chgBit(oldp+143,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_next[2U] 
                                            >> 6U))));
            tracep->chgCData(oldp+144,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataM_next[2U] 
                                                 >> 1U))),5);
            tracep->chgQData(oldp+145,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM_next[2U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM_next[1U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM_next[0U])) 
                                              >> 1U)))),64);
            tracep->chgBit(oldp+147,((1U & vlSelf->SimTop__DOT__core__DOT__dataM_next[0U])));
            tracep->chgQData(oldp+148,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                            << 0xaU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                                              >> 0x16U)))),64);
            tracep->chgQData(oldp+150,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                            << 0xaU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                              >> 0x16U)))),64);
            tracep->chgCData(oldp+152,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                 >> 0xfU))),7);
            tracep->chgCData(oldp+153,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                 >> 8U))),7);
            tracep->chgBit(oldp+154,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                            >> 7U))));
            tracep->chgBit(oldp+155,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                            >> 6U))));
            tracep->chgCData(oldp+156,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                 >> 1U))),5);
            tracep->chgQData(oldp+157,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataW[1U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataW[0U])) 
                                              >> 1U)))),64);
            tracep->chgBit(oldp+159,((1U & vlSelf->SimTop__DOT__core__DOT__dataW[0U])));
            tracep->chgCData(oldp+160,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                 >> 0x10U))),5);
            tracep->chgCData(oldp+161,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                 >> 0x15U))),5);
            tracep->chgQData(oldp+162,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[
                                                         (((IData)(0x3fU) 
                                                           + 
                                                           (0x7c0U 
                                                            & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                               >> 0xaU))) 
                                                          >> 5U)])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[
                                                          (0x3eU 
                                                           & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                              >> 0xfU))])))),64);
            tracep->chgQData(oldp+164,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[
                                                         (((IData)(0x3fU) 
                                                           + 
                                                           (0x7c0U 
                                                            & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                               >> 0xfU))) 
                                                          >> 5U)])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[
                                                          (0x3eU 
                                                           & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                              >> 0x14U))])))),64);
            tracep->chgCData(oldp+166,((0x7fU & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                                 >> 9U))),7);
            tracep->chgCData(oldp+167,((0x7fU & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                                 >> 2U))),7);
            tracep->chgBit(oldp+168,((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                            >> 1U))));
            tracep->chgBit(oldp+169,((1U & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))));
            tracep->chgCData(oldp+170,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                 >> 1U))),7);
            tracep->chgCData(oldp+171,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                  << 6U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                    >> 0x1aU)))),7);
            tracep->chgCData(oldp+172,((7U & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                              >> 0xdU))),3);
            tracep->chgQData(oldp+173,(((0x4000U & 
                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                         ? 0ULL : (
                                                   (0x2000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                    ? 0ULL
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                     ? 0ULL
                                                     : 
                                                    ((0x800U 
                                                      & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                      ? 0ULL
                                                      : 
                                                     ((0x400U 
                                                       & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                       ? 
                                                      ((0x200U 
                                                        & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                        ? 0ULL
                                                        : 
                                                       ((0x100U 
                                                         & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                         ? 
                                                        (vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a 
                                                         ^ vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b)
                                                         : 
                                                        (vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a 
                                                         | vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b)))
                                                       : 
                                                      ((0x200U 
                                                        & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                        ? 
                                                       ((0x100U 
                                                         & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                         ? 
                                                        (vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a 
                                                         & vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b)
                                                         : 
                                                        (vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a 
                                                         - vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b))
                                                        : 
                                                       ((0x100U 
                                                         & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                         ? 
                                                        (vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a 
                                                         + vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b)
                                                         : 0ULL)))))))),64);
            tracep->chgQData(oldp+175,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a),64);
            tracep->chgQData(oldp+177,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b),64);
            tracep->chgQData(oldp+179,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0U])))),64);
            tracep->chgQData(oldp+181,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[2U])))),64);
            tracep->chgQData(oldp+183,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[4U])))),64);
            tracep->chgQData(oldp+185,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[6U])))),64);
            tracep->chgQData(oldp+187,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[8U])))),64);
            tracep->chgQData(oldp+189,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xaU])))),64);
            tracep->chgQData(oldp+191,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xcU])))),64);
            tracep->chgQData(oldp+193,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xeU])))),64);
            tracep->chgQData(oldp+195,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x10U])))),64);
            tracep->chgQData(oldp+197,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x12U])))),64);
            tracep->chgQData(oldp+199,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x14U])))),64);
            tracep->chgQData(oldp+201,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x17U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x16U])))),64);
            tracep->chgQData(oldp+203,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x19U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x18U])))),64);
            tracep->chgQData(oldp+205,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1aU])))),64);
            tracep->chgQData(oldp+207,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1cU])))),64);
            tracep->chgQData(oldp+209,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1eU])))),64);
            tracep->chgQData(oldp+211,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x21U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x20U])))),64);
            tracep->chgQData(oldp+213,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x23U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x22U])))),64);
            tracep->chgQData(oldp+215,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x25U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x24U])))),64);
            tracep->chgQData(oldp+217,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x27U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x26U])))),64);
            tracep->chgQData(oldp+219,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x29U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x28U])))),64);
            tracep->chgQData(oldp+221,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2aU])))),64);
            tracep->chgQData(oldp+223,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2cU])))),64);
            tracep->chgQData(oldp+225,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2eU])))),64);
            tracep->chgQData(oldp+227,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x31U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x30U])))),64);
            tracep->chgQData(oldp+229,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x33U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x32U])))),64);
            tracep->chgQData(oldp+231,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x35U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x34U])))),64);
            tracep->chgQData(oldp+233,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x37U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x36U])))),64);
            tracep->chgQData(oldp+235,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x39U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x38U])))),64);
            tracep->chgQData(oldp+237,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3aU])))),64);
            tracep->chgQData(oldp+239,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3cU])))),64);
            tracep->chgQData(oldp+241,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3eU])))),64);
            tracep->chgQData(oldp+243,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0U])))),64);
            tracep->chgQData(oldp+245,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[2U])))),64);
            tracep->chgQData(oldp+247,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[4U])))),64);
            tracep->chgQData(oldp+249,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[6U])))),64);
            tracep->chgQData(oldp+251,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[8U])))),64);
            tracep->chgQData(oldp+253,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU])))),64);
            tracep->chgQData(oldp+255,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU])))),64);
            tracep->chgQData(oldp+257,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU])))),64);
            tracep->chgQData(oldp+259,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U])))),64);
            tracep->chgQData(oldp+261,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U])))),64);
            tracep->chgQData(oldp+263,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U])))),64);
            tracep->chgQData(oldp+265,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U])))),64);
            tracep->chgQData(oldp+267,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U])))),64);
            tracep->chgQData(oldp+269,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU])))),64);
            tracep->chgQData(oldp+271,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU])))),64);
            tracep->chgQData(oldp+273,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU])))),64);
            tracep->chgQData(oldp+275,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U])))),64);
            tracep->chgQData(oldp+277,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U])))),64);
            tracep->chgQData(oldp+279,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U])))),64);
            tracep->chgQData(oldp+281,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U])))),64);
            tracep->chgQData(oldp+283,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U])))),64);
            tracep->chgQData(oldp+285,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU])))),64);
            tracep->chgQData(oldp+287,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU])))),64);
            tracep->chgQData(oldp+289,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU])))),64);
            tracep->chgQData(oldp+291,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U])))),64);
            tracep->chgQData(oldp+293,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U])))),64);
            tracep->chgQData(oldp+295,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U])))),64);
            tracep->chgQData(oldp+297,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U])))),64);
            tracep->chgQData(oldp+299,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U])))),64);
            tracep->chgQData(oldp+301,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU])))),64);
            tracep->chgQData(oldp+303,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU])))),64);
            tracep->chgQData(oldp+305,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU])))),64);
            tracep->chgCData(oldp+307,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                 >> 1U))),8);
            tracep->chgQData(oldp+308,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0U])))),64);
            tracep->chgQData(oldp+310,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[2U])))),64);
            tracep->chgQData(oldp+312,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[4U])))),64);
            tracep->chgQData(oldp+314,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[6U])))),64);
            tracep->chgQData(oldp+316,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[8U])))),64);
            tracep->chgQData(oldp+318,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU])))),64);
            tracep->chgQData(oldp+320,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU])))),64);
            tracep->chgQData(oldp+322,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU])))),64);
            tracep->chgQData(oldp+324,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U])))),64);
            tracep->chgQData(oldp+326,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U])))),64);
            tracep->chgQData(oldp+328,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U])))),64);
            tracep->chgQData(oldp+330,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U])))),64);
            tracep->chgQData(oldp+332,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U])))),64);
            tracep->chgQData(oldp+334,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU])))),64);
            tracep->chgQData(oldp+336,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU])))),64);
            tracep->chgQData(oldp+338,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU])))),64);
            tracep->chgQData(oldp+340,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U])))),64);
            tracep->chgQData(oldp+342,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U])))),64);
            tracep->chgQData(oldp+344,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U])))),64);
            tracep->chgQData(oldp+346,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U])))),64);
            tracep->chgQData(oldp+348,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U])))),64);
            tracep->chgQData(oldp+350,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU])))),64);
            tracep->chgQData(oldp+352,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU])))),64);
            tracep->chgQData(oldp+354,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU])))),64);
            tracep->chgQData(oldp+356,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U])))),64);
            tracep->chgQData(oldp+358,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U])))),64);
            tracep->chgQData(oldp+360,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U])))),64);
            tracep->chgQData(oldp+362,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U])))),64);
            tracep->chgQData(oldp+364,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U])))),64);
            tracep->chgQData(oldp+366,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU])))),64);
            tracep->chgQData(oldp+368,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU])))),64);
            tracep->chgQData(oldp+370,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU])))),64);
            tracep->chgBit(oldp+372,((1U & (vlSelf->SimTop__DOT__icvt__DOT__dresp[2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+373,((1U & vlSelf->SimTop__DOT__icvt__DOT__dresp[2U])));
            tracep->chgQData(oldp+374,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__icvt__DOT__dresp[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__icvt__DOT__dresp[0U])))),64);
            tracep->chgBit(oldp+376,((1U & ((vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                             >> 3U) 
                                            & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                               >> 2U)))));
            tracep->chgBit(oldp+377,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+378,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+379,((7U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+380,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+382,((0xffU & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[2U] 
                                                 >> 0xaU))),8);
            tracep->chgQData(oldp+383,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+385,((0xffU & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[0U] 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+386,((3U & vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[0U])),2);
            tracep->chgBit(oldp+387,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+388,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+389,((7U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                              >> 9U))),3);
            tracep->chgQData(oldp+390,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U])) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[8U])) 
                                            << 0x17U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[7U])) 
                                              >> 9U)))),64);
            tracep->chgCData(oldp+392,((0xffU & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[7U] 
                                                 >> 1U))),8);
            tracep->chgQData(oldp+393,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[7U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[6U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[5U])) 
                                              >> 1U)))),64);
            tracep->chgCData(oldp+395,((0xffU & ((vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[5U] 
                                                  << 7U) 
                                                 | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                                    >> 0x19U)))),8);
            tracep->chgCData(oldp+396,((3U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                              >> 0x17U))),2);
            tracep->chgBit(oldp+397,(vlSelf->SimTop__DOT__mux__DOT__busy));
            tracep->chgIData(oldp+398,(vlSelf->SimTop__DOT__mux__DOT__index),32);
            tracep->chgIData(oldp+399,(vlSelf->SimTop__DOT__mux__DOT__select),32);
            tracep->chgBit(oldp+400,((1U & (vlSelf->SimTop__DOT__mux__DOT__saved_req[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+401,((1U & (vlSelf->SimTop__DOT__mux__DOT__saved_req[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+402,((7U & (vlSelf->SimTop__DOT__mux__DOT__saved_req[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+403,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__mux__DOT__saved_req[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__mux__DOT__saved_req[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__mux__DOT__saved_req[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+405,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__saved_req[2U] 
                                                 >> 0xaU))),8);
            tracep->chgQData(oldp+406,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__mux__DOT__saved_req[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__mux__DOT__saved_req[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__mux__DOT__saved_req[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+408,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__saved_req[0U] 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+409,((3U & vlSelf->SimTop__DOT__mux__DOT__saved_req[0U])),2);
            tracep->chgBit(oldp+410,((1U & (vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+411,((1U & (vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+412,((7U & (vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+413,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__mux__DOT__selected_req[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__mux__DOT__selected_req[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__mux__DOT__selected_req[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+415,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__selected_req[2U] 
                                                 >> 0xaU))),8);
            tracep->chgQData(oldp+416,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__mux__DOT__selected_req[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__mux__DOT__selected_req[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__mux__DOT__selected_req[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+418,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__selected_req[0U] 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+419,((3U & vlSelf->SimTop__DOT__mux__DOT__selected_req[0U])),2);
            tracep->chgIData(oldp+420,(vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i),32);
            tracep->chgIData(oldp+421,(vlSelf->SimTop__DOT__mux__DOT__unnamedblk2__DOT__i),32);
            tracep->chgBit(oldp+422,((1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+423,((1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+424,((7U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+425,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__ram__DOT__saved_oreq[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+427,((0xffU & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U] 
                                                 >> 0xaU))),8);
            tracep->chgQData(oldp+428,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__ram__DOT__saved_oreq[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+430,((0xffU & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U] 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+431,((3U & vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U])),2);
            tracep->chgCData(oldp+432,(vlSelf->SimTop__DOT__ram__DOT__state),2);
            tracep->chgCData(oldp+433,(vlSelf->SimTop__DOT__ram__DOT__count_down),8);
            tracep->chgCData(oldp+434,(vlSelf->SimTop__DOT__ram__DOT__size),4);
            tracep->chgQData(oldp+435,(vlSelf->SimTop__DOT__ram__DOT__addr),64);
            tracep->chgQData(oldp+437,(vlSelf->SimTop__DOT__ram__DOT__idx),64);
            tracep->chgQData(oldp+439,(vlSelf->SimTop__DOT__ram__DOT__wrap1),64);
            tracep->chgQData(oldp+441,(vlSelf->SimTop__DOT__ram__DOT__wrap2),64);
            tracep->chgQData(oldp+443,(vlSelf->SimTop__DOT__ram__DOT__cyc_cnt),64);
            tracep->chgQData(oldp+445,(vlSelf->SimTop__DOT__ram__DOT__ms_cnt),64);
            tracep->chgQData(oldp+447,(vlSelf->SimTop__DOT__ram__DOT__wmask),64);
            tracep->chgQData(oldp+449,(vlSelf->SimTop__DOT__ram__DOT__mtime),64);
            tracep->chgQData(oldp+451,(vlSelf->SimTop__DOT__ram__DOT__mtimecmp),64);
            tracep->chgBit(oldp+453,(vlSelf->SimTop__DOT__ram__DOT__msip));
        }
        tracep->chgBit(oldp+454,(vlSelf->clock));
        tracep->chgBit(oldp+455,(vlSelf->reset));
        tracep->chgQData(oldp+456,(vlSelf->io_logCtrl_log_begin),64);
        tracep->chgQData(oldp+458,(vlSelf->io_logCtrl_log_end),64);
        tracep->chgQData(oldp+460,(vlSelf->io_logCtrl_log_level),64);
        tracep->chgBit(oldp+462,(vlSelf->io_perfInfo_clean));
        tracep->chgBit(oldp+463,(vlSelf->io_perfInfo_dump));
        tracep->chgBit(oldp+464,(vlSelf->io_uart_out_valid));
        tracep->chgCData(oldp+465,(vlSelf->io_uart_out_ch),8);
        tracep->chgBit(oldp+466,(vlSelf->io_uart_in_valid));
        tracep->chgCData(oldp+467,(vlSelf->io_uart_in_ch),8);
    }
}

void VSimTop___024root__traceCleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VSimTop___024root* const __restrict vlSelf = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}

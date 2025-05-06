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
            tracep->chgIData(oldp+0,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__unnamedblk1__DOT__i),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+1,((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                          >> 0x16U))));
            tracep->chgBit(oldp+2,((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                          >> 0x15U))));
            tracep->chgCData(oldp+3,((7U & (vlSelf->SimTop__DOT__oreq[4U] 
                                            >> 0x12U))),3);
            tracep->chgQData(oldp+4,((((QData)((IData)(
                                                       vlSelf->SimTop__DOT__oreq[4U])) 
                                       << 0x2eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oreq[3U])) 
                                        << 0xeU) | 
                                       ((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oreq[2U])) 
                                        >> 0x12U)))),64);
            tracep->chgCData(oldp+6,((0xffU & (vlSelf->SimTop__DOT__oreq[2U] 
                                               >> 0xaU))),8);
            tracep->chgQData(oldp+7,((((QData)((IData)(
                                                       vlSelf->SimTop__DOT__oreq[2U])) 
                                       << 0x36U) | 
                                      (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oreq[1U])) 
                                        << 0x16U) | 
                                       ((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oreq[0U])) 
                                        >> 0xaU)))),64);
            tracep->chgCData(oldp+9,((0xffU & (vlSelf->SimTop__DOT__oreq[0U] 
                                               >> 2U))),8);
            tracep->chgCData(oldp+10,((3U & vlSelf->SimTop__DOT__oreq[0U])),2);
            tracep->chgBit(oldp+11,((1U & (vlSelf->SimTop__DOT__oresp[2U] 
                                           >> 1U))));
            tracep->chgBit(oldp+12,((1U & vlSelf->SimTop__DOT__oresp[2U])));
            tracep->chgQData(oldp+13,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oresp[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__oresp[0U])))),64);
            tracep->chgBit(oldp+15,(vlSelf->SimTop__DOT__trint));
            tracep->chgBit(oldp+16,(vlSelf->SimTop__DOT__swint));
            tracep->chgBit(oldp+17,(vlSelf->SimTop__DOT__exint));
            tracep->chgBit(oldp+18,((1U & vlSelf->SimTop__DOT__ireq[2U])));
            tracep->chgQData(oldp+19,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__ireq[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__ireq[0U])))),64);
            tracep->chgBit(oldp+21,((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                                   >> 0x21U)))));
            tracep->chgBit(oldp+22,((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                                   >> 0x20U)))));
            tracep->chgIData(oldp+23,((IData)(vlSelf->SimTop__DOT__iresp)),32);
            tracep->chgBit(oldp+24,((1U & (vlSelf->SimTop__DOT__dreq[4U] 
                                           >> 0xbU))));
            tracep->chgQData(oldp+25,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__dreq[4U])) 
                                        << 0x35U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__dreq[3U])) 
                                         << 0x15U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__dreq[2U])) 
                                           >> 0xbU)))),64);
            tracep->chgCData(oldp+27,((7U & (vlSelf->SimTop__DOT__dreq[2U] 
                                             >> 8U))),3);
            tracep->chgCData(oldp+28,((0xffU & vlSelf->SimTop__DOT__dreq[2U])),8);
            tracep->chgQData(oldp+29,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__dreq[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__dreq[0U])))),64);
            tracep->chgBit(oldp+31,((1U & (vlSelf->SimTop__DOT__dresp[2U] 
                                           >> 1U))));
            tracep->chgBit(oldp+32,((1U & vlSelf->SimTop__DOT__dresp[2U])));
            tracep->chgQData(oldp+33,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__dresp[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__dresp[0U])))),64);
            tracep->chgBit(oldp+35,((1U & (vlSelf->SimTop__DOT__icreq[4U] 
                                           >> 0x16U))));
            tracep->chgBit(oldp+36,((1U & (vlSelf->SimTop__DOT__icreq[4U] 
                                           >> 0x15U))));
            tracep->chgCData(oldp+37,((7U & (vlSelf->SimTop__DOT__icreq[4U] 
                                             >> 0x12U))),3);
            tracep->chgQData(oldp+38,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__icreq[4U])) 
                                        << 0x2eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__icreq[3U])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__icreq[2U])) 
                                         >> 0x12U)))),64);
            tracep->chgCData(oldp+40,((0xffU & (vlSelf->SimTop__DOT__icreq[2U] 
                                                >> 0xaU))),8);
            tracep->chgQData(oldp+41,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__icreq[2U])) 
                                        << 0x36U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__icreq[1U])) 
                                         << 0x16U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__icreq[0U])) 
                                           >> 0xaU)))),64);
            tracep->chgCData(oldp+43,((0xffU & (vlSelf->SimTop__DOT__icreq[0U] 
                                                >> 2U))),8);
            tracep->chgCData(oldp+44,((3U & vlSelf->SimTop__DOT__icreq[0U])),2);
            tracep->chgBit(oldp+45,((1U & (vlSelf->SimTop__DOT__dcreq[4U] 
                                           >> 0x16U))));
            tracep->chgBit(oldp+46,((1U & (vlSelf->SimTop__DOT__dcreq[4U] 
                                           >> 0x15U))));
            tracep->chgCData(oldp+47,((7U & (vlSelf->SimTop__DOT__dcreq[4U] 
                                             >> 0x12U))),3);
            tracep->chgQData(oldp+48,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__dcreq[4U])) 
                                        << 0x2eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__dcreq[3U])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__dcreq[2U])) 
                                         >> 0x12U)))),64);
            tracep->chgCData(oldp+50,((0xffU & (vlSelf->SimTop__DOT__dcreq[2U] 
                                                >> 0xaU))),8);
            tracep->chgQData(oldp+51,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__dcreq[2U])) 
                                        << 0x36U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__dcreq[1U])) 
                                         << 0x16U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__dcreq[0U])) 
                                           >> 0xaU)))),64);
            tracep->chgCData(oldp+53,((0xffU & (vlSelf->SimTop__DOT__dcreq[0U] 
                                                >> 2U))),8);
            tracep->chgCData(oldp+54,((3U & vlSelf->SimTop__DOT__dcreq[0U])),2);
            tracep->chgBit(oldp+55,((1U & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                           >> 3U))));
            tracep->chgBit(oldp+56,((1U & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                           >> 2U))));
            tracep->chgQData(oldp+57,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U])) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT____Vcellout__mux__iresps[3U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U])) 
                                           >> 2U)))),64);
            tracep->chgBit(oldp+59,((1U & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U] 
                                           >> 1U))));
            tracep->chgBit(oldp+60,((1U & vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U])));
            tracep->chgQData(oldp+61,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT____Vcellout__mux__iresps[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT____Vcellout__mux__iresps[0U])))),64);
            tracep->chgQData(oldp+63,(vlSelf->SimTop__DOT__core__DOT__pc),64);
            tracep->chgQData(oldp+65,(vlSelf->SimTop__DOT__core__DOT__pc_nxt),64);
            tracep->chgQData(oldp+67,(vlSelf->SimTop__DOT__core__DOT__offset),64);
            tracep->chgIData(oldp+69,(vlSelf->SimTop__DOT__core__DOT__raw_instr),32);
            tracep->chgBit(oldp+70,((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataW[0U] 
                                              >> 0xcU)))));
            tracep->chgIData(oldp+71,(((vlSelf->SimTop__DOT__core__DOT__dataF[3U] 
                                        << 0x1fU) | 
                                       (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                        >> 1U))),32);
            tracep->chgQData(oldp+72,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataF[2U])) 
                                        << 0x3fU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataF[1U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataF[0U])) 
                                           >> 1U)))),64);
            tracep->chgBit(oldp+74,((1U & vlSelf->SimTop__DOT__core__DOT__dataF[0U])));
            tracep->chgIData(oldp+75,(((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                        << 0x1fU) | 
                                       (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                        >> 1U))),32);
            tracep->chgQData(oldp+76,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) 
                                        << 0x3fU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataF_nxt[1U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataF_nxt[0U])) 
                                           >> 1U)))),64);
            tracep->chgBit(oldp+78,((1U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[0U])));
            tracep->chgIData(oldp+79,(((vlSelf->SimTop__DOT__core__DOT__saved_dataF[3U] 
                                        << 0x1fU) | 
                                       (vlSelf->SimTop__DOT__core__DOT__saved_dataF[2U] 
                                        >> 1U))),32);
            tracep->chgQData(oldp+80,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__saved_dataF[2U])) 
                                        << 0x3fU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__saved_dataF[1U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__saved_dataF[0U])) 
                                           >> 1U)))),64);
            tracep->chgBit(oldp+82,((1U & vlSelf->SimTop__DOT__core__DOT__saved_dataF[0U])));
            tracep->chgQData(oldp+83,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[0x16U])) 
                                        << 0x35U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[0x15U])) 
                                         << 0x15U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD[0x14U])) 
                                           >> 0xbU)))),64);
            tracep->chgQData(oldp+85,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[0x14U])) 
                                        << 0x35U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[0x13U])) 
                                         << 0x15U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD[0x12U])) 
                                           >> 0xbU)))),64);
            tracep->chgQData(oldp+87,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[0x12U])) 
                                        << 0x35U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[0x11U])) 
                                         << 0x15U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD[0x10U])) 
                                           >> 0xbU)))),64);
            tracep->chgQData(oldp+89,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[0x10U])) 
                                        << 0x35U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[0xfU])) 
                                         << 0x15U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD[0xeU])) 
                                           >> 0xbU)))),64);
            tracep->chgQData(oldp+91,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[0xeU])) 
                                        << 0x35U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[0xdU])) 
                                         << 0x15U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD[0xcU])) 
                                           >> 0xbU)))),64);
            tracep->chgCData(oldp+93,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[0xcU] 
                                                >> 4U))),7);
            tracep->chgCData(oldp+94,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataD[0xcU] 
                                                 << 3U) 
                                                | (vlSelf->SimTop__DOT__core__DOT__dataD[0xbU] 
                                                   >> 0x1dU)))),7);
            tracep->chgBit(oldp+95,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[0xbU] 
                                           >> 0x1cU))));
            tracep->chgBit(oldp+96,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[0xbU] 
                                           >> 0x1bU))));
            tracep->chgSData(oldp+97,((0xfffU & ((vlSelf->SimTop__DOT__core__DOT__dataD[7U] 
                                                  << 0xbU) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataD[6U] 
                                                    >> 0x15U)))),12);
            tracep->chgQData(oldp+98,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[6U])) 
                                        << 0x2bU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[5U])) 
                                         << 0xbU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[4U])) 
                                         >> 0x15U)))),64);
            tracep->chgBit(oldp+100,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                            >> 0x14U))));
            tracep->chgSData(oldp+101,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__dataD[9U] 
                                                  >> 2U))),12);
            tracep->chgQData(oldp+102,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[9U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD[8U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataD[7U])) 
                                              >> 2U)))),64);
            tracep->chgBit(oldp+104,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[7U] 
                                            >> 1U))));
            tracep->chgSData(oldp+105,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__dataD[0xbU] 
                                                  >> 0xfU))),12);
            tracep->chgQData(oldp+106,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[0xbU])) 
                                         << 0x31U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD[0xaU])) 
                                            << 0x11U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataD[9U])) 
                                              >> 0xfU)))),64);
            tracep->chgBit(oldp+108,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[9U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+109,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+110,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+111,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                 >> 0xdU))),5);
            tracep->chgQData(oldp+112,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[4U])) 
                                         << 0x33U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD[3U])) 
                                            << 0x13U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataD[2U])) 
                                              >> 0xdU)))),64);
            tracep->chgQData(oldp+114,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[2U])) 
                                         << 0x33U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD[1U])) 
                                            << 0x13U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataD[0U])) 
                                              >> 0xdU)))),64);
            tracep->chgBit(oldp+116,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                            >> 0xcU))));
            tracep->chgSData(oldp+117,((0xfffU & vlSelf->SimTop__DOT__core__DOT__dataD[0U])),12);
            tracep->chgQData(oldp+118,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0x16U])) 
                                         << 0x35U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0x15U])) 
                                            << 0x15U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0x14U])) 
                                              >> 0xbU)))),64);
            tracep->chgQData(oldp+120,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0x14U])) 
                                         << 0x35U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0x13U])) 
                                            << 0x15U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0x12U])) 
                                              >> 0xbU)))),64);
            tracep->chgQData(oldp+122,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0x12U])) 
                                         << 0x35U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0x11U])) 
                                            << 0x15U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0x10U])) 
                                              >> 0xbU)))),64);
            tracep->chgQData(oldp+124,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0x10U])) 
                                         << 0x35U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xfU])) 
                                            << 0x15U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                              >> 0xbU)))),64);
            tracep->chgQData(oldp+126,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                         << 0x35U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                            << 0x15U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xcU])) 
                                              >> 0xbU)))),64);
            tracep->chgCData(oldp+128,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xcU] 
                                                 >> 4U))),7);
            tracep->chgCData(oldp+129,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xcU] 
                                                  << 3U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU] 
                                                    >> 0x1dU)))),7);
            tracep->chgBit(oldp+130,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+131,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU] 
                                            >> 0x1bU))));
            tracep->chgSData(oldp+132,((0xfffU & ((
                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[7U] 
                                                   << 0xbU) 
                                                  | (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[6U] 
                                                     >> 0x15U)))),12);
            tracep->chgQData(oldp+133,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[6U])) 
                                         << 0x2bU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])) 
                                            << 0xbU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])) 
                                              >> 0x15U)))),64);
            tracep->chgBit(oldp+135,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                            >> 0x14U))));
            tracep->chgSData(oldp+136,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[9U] 
                                                  >> 2U))),12);
            tracep->chgQData(oldp+137,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[9U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD_nxt[8U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataD_nxt[7U])) 
                                              >> 2U)))),64);
            tracep->chgBit(oldp+139,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[7U] 
                                            >> 1U))));
            tracep->chgSData(oldp+140,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU] 
                                                  >> 0xfU))),12);
            tracep->chgQData(oldp+141,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                         << 0x31U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xaU])) 
                                            << 0x11U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataD_nxt[9U])) 
                                              >> 0xfU)))),64);
            tracep->chgBit(oldp+143,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[9U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+144,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+145,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+146,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                                 >> 0xdU))),5);
            tracep->chgQData(oldp+147,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])) 
                                         << 0x33U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD_nxt[3U])) 
                                            << 0x13U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataD_nxt[2U])) 
                                              >> 0xdU)))),64);
            tracep->chgQData(oldp+149,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[2U])) 
                                         << 0x33U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD_nxt[1U])) 
                                            << 0x13U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0U])) 
                                              >> 0xdU)))),64);
            tracep->chgBit(oldp+151,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0U] 
                                            >> 0xcU))));
            tracep->chgSData(oldp+152,((0xfffU & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0U])),12);
            tracep->chgQData(oldp+153,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE[0x10U])) 
                                         << 0x35U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE[0xfU])) 
                                            << 0x15U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE[0xeU])) 
                                              >> 0xbU)))),64);
            tracep->chgQData(oldp+155,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE[0xeU])) 
                                         << 0x35U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE[0xdU])) 
                                            << 0x15U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE[0xcU])) 
                                              >> 0xbU)))),64);
            tracep->chgQData(oldp+157,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE[0xcU])) 
                                         << 0x35U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE[0xbU])) 
                                            << 0x15U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE[0xaU])) 
                                              >> 0xbU)))),64);
            tracep->chgCData(oldp+159,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataE[0xaU] 
                                                 >> 4U))),7);
            tracep->chgCData(oldp+160,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataE[0xaU] 
                                                  << 3U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataE[9U] 
                                                    >> 0x1dU)))),7);
            tracep->chgBit(oldp+161,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[9U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+162,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[9U] 
                                            >> 0x1bU))));
            tracep->chgSData(oldp+163,((0xfffU & ((
                                                   vlSelf->SimTop__DOT__core__DOT__dataE[5U] 
                                                   << 0xbU) 
                                                  | (vlSelf->SimTop__DOT__core__DOT__dataE[4U] 
                                                     >> 0x15U)))),12);
            tracep->chgQData(oldp+164,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE[4U])) 
                                         << 0x2bU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE[3U])) 
                                            << 0xbU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE[2U])) 
                                              >> 0x15U)))),64);
            tracep->chgBit(oldp+166,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                            >> 0x14U))));
            tracep->chgSData(oldp+167,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__dataE[7U] 
                                                  >> 2U))),12);
            tracep->chgQData(oldp+168,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE[7U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE[6U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE[5U])) 
                                              >> 2U)))),64);
            tracep->chgBit(oldp+170,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[5U] 
                                            >> 1U))));
            tracep->chgSData(oldp+171,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__dataE[9U] 
                                                  >> 0xfU))),12);
            tracep->chgQData(oldp+172,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE[9U])) 
                                         << 0x31U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE[8U])) 
                                            << 0x11U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE[7U])) 
                                              >> 0xfU)))),64);
            tracep->chgBit(oldp+174,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[7U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+175,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+176,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+177,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                 >> 0xdU))),5);
            tracep->chgQData(oldp+178,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE[2U])) 
                                         << 0x33U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE[1U])) 
                                            << 0x13U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE[0U])) 
                                              >> 0xdU)))),64);
            tracep->chgBit(oldp+180,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                            >> 0xcU))));
            tracep->chgSData(oldp+181,((0xfffU & vlSelf->SimTop__DOT__core__DOT__dataE[0U])),12);
            tracep->chgQData(oldp+182,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0x10U])) 
                                         << 0x35U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0xfU])) 
                                            << 0x15U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0xeU])) 
                                              >> 0xbU)))),64);
            tracep->chgQData(oldp+184,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0xeU])) 
                                         << 0x35U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0xdU])) 
                                            << 0x15U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0xcU])) 
                                              >> 0xbU)))),64);
            tracep->chgQData(oldp+186,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0xcU])) 
                                         << 0x35U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0xbU])) 
                                            << 0x15U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0xaU])) 
                                              >> 0xbU)))),64);
            tracep->chgCData(oldp+188,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0xaU] 
                                                 >> 4U))),7);
            tracep->chgCData(oldp+189,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0xaU] 
                                                  << 3U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U] 
                                                    >> 0x1dU)))),7);
            tracep->chgBit(oldp+190,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+191,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U] 
                                            >> 0x1bU))));
            tracep->chgSData(oldp+192,((0xfffU & ((
                                                   vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U] 
                                                   << 0xbU) 
                                                  | (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[4U] 
                                                     >> 0x15U)))),12);
            tracep->chgQData(oldp+193,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE_nxt[4U])) 
                                         << 0x2bU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])) 
                                            << 0xbU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                              >> 0x15U)))),64);
            tracep->chgBit(oldp+195,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
                                            >> 0x14U))));
            tracep->chgSData(oldp+196,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U] 
                                                  >> 2U))),12);
            tracep->chgQData(oldp+197,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_nxt[6U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U])) 
                                              >> 2U)))),64);
            tracep->chgBit(oldp+199,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U] 
                                            >> 1U))));
            tracep->chgSData(oldp+200,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U] 
                                                  >> 0xfU))),12);
            tracep->chgQData(oldp+201,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                                         << 0x31U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                            << 0x11U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                              >> 0xfU)))),64);
            tracep->chgBit(oldp+203,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+204,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+205,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+206,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
                                                 >> 0xdU))),5);
            tracep->chgQData(oldp+207,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                         << 0x33U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                            << 0x13U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                              >> 0xdU)))),64);
            tracep->chgBit(oldp+209,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U] 
                                            >> 0xcU))));
            tracep->chgSData(oldp+210,((0xfffU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])),12);
            tracep->chgQData(oldp+211,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM[0x10U])) 
                                         << 0x35U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM[0xfU])) 
                                            << 0x15U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM[0xeU])) 
                                              >> 0xbU)))),64);
            tracep->chgQData(oldp+213,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM[0xeU])) 
                                         << 0x35U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM[0xdU])) 
                                            << 0x15U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM[0xcU])) 
                                              >> 0xbU)))),64);
            tracep->chgQData(oldp+215,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM[0xcU])) 
                                         << 0x35U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM[0xbU])) 
                                            << 0x15U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM[0xaU])) 
                                              >> 0xbU)))),64);
            tracep->chgCData(oldp+217,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataM[0xaU] 
                                                 >> 4U))),7);
            tracep->chgCData(oldp+218,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataM[0xaU] 
                                                  << 3U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataM[9U] 
                                                    >> 0x1dU)))),7);
            tracep->chgBit(oldp+219,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[9U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+220,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[9U] 
                                            >> 0x1bU))));
            tracep->chgSData(oldp+221,((0xfffU & ((
                                                   vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                                                   << 0xbU) 
                                                  | (vlSelf->SimTop__DOT__core__DOT__dataM[4U] 
                                                     >> 0x15U)))),12);
            tracep->chgQData(oldp+222,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM[4U])) 
                                         << 0x2bU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM[3U])) 
                                            << 0xbU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM[2U])) 
                                              >> 0x15U)))),64);
            tracep->chgBit(oldp+224,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                            >> 0x14U))));
            tracep->chgSData(oldp+225,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__dataM[7U] 
                                                  >> 2U))),12);
            tracep->chgQData(oldp+226,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM[7U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM[6U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM[5U])) 
                                              >> 2U)))),64);
            tracep->chgBit(oldp+228,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                                            >> 1U))));
            tracep->chgSData(oldp+229,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__dataM[9U] 
                                                  >> 0xfU))),12);
            tracep->chgQData(oldp+230,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM[9U])) 
                                         << 0x31U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM[8U])) 
                                            << 0x11U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM[7U])) 
                                              >> 0xfU)))),64);
            tracep->chgBit(oldp+232,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[7U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+233,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+234,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+235,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                 >> 0xdU))),5);
            tracep->chgQData(oldp+236,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM[2U])) 
                                         << 0x33U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM[1U])) 
                                            << 0x13U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM[0U])) 
                                              >> 0xdU)))),64);
            tracep->chgBit(oldp+238,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                                            >> 0xcU))));
            tracep->chgSData(oldp+239,((0xfffU & vlSelf->SimTop__DOT__core__DOT__dataM[0U])),12);
            tracep->chgQData(oldp+240,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0x10U])) 
                                         << 0x35U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0xfU])) 
                                            << 0x15U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0xeU])) 
                                              >> 0xbU)))),64);
            tracep->chgQData(oldp+242,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0xeU])) 
                                         << 0x35U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0xdU])) 
                                            << 0x15U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0xcU])) 
                                              >> 0xbU)))),64);
            tracep->chgQData(oldp+244,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0xcU])) 
                                         << 0x35U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0xbU])) 
                                            << 0x15U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0xaU])) 
                                              >> 0xbU)))),64);
            tracep->chgCData(oldp+246,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0xaU] 
                                                 >> 4U))),7);
            tracep->chgCData(oldp+247,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0xaU] 
                                                  << 3U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[9U] 
                                                    >> 0x1dU)))),7);
            tracep->chgBit(oldp+248,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[9U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+249,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[9U] 
                                            >> 0x1bU))));
            tracep->chgSData(oldp+250,((0xfffU & ((
                                                   vlSelf->SimTop__DOT__core__DOT__dataM_nxt[5U] 
                                                   << 0xbU) 
                                                  | (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[4U] 
                                                     >> 0x15U)))),12);
            tracep->chgQData(oldp+251,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM_nxt[4U])) 
                                         << 0x2bU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM_nxt[3U])) 
                                            << 0xbU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U])) 
                                              >> 0x15U)))),64);
            tracep->chgBit(oldp+253,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U] 
                                            >> 0x14U))));
            tracep->chgSData(oldp+254,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[7U] 
                                                  >> 2U))),12);
            tracep->chgQData(oldp+255,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM_nxt[7U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM_nxt[6U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM_nxt[5U])) 
                                              >> 2U)))),64);
            tracep->chgBit(oldp+257,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[5U] 
                                            >> 1U))));
            tracep->chgSData(oldp+258,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[9U] 
                                                  >> 0xfU))),12);
            tracep->chgQData(oldp+259,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM_nxt[9U])) 
                                         << 0x31U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM_nxt[8U])) 
                                            << 0x11U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM_nxt[7U])) 
                                              >> 0xfU)))),64);
            tracep->chgBit(oldp+261,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[7U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+262,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+263,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+264,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U] 
                                                 >> 0xdU))),5);
            tracep->chgQData(oldp+265,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U])) 
                                         << 0x33U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM_nxt[1U])) 
                                            << 0x13U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0U])) 
                                              >> 0xdU)))),64);
            tracep->chgBit(oldp+267,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0U] 
                                            >> 0xcU))));
            tracep->chgSData(oldp+268,((0xfffU & vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0U])),12);
            tracep->chgQData(oldp+269,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataW[0x10U])) 
                                         << 0x35U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataW[0xfU])) 
                                            << 0x15U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataW[0xeU])) 
                                              >> 0xbU)))),64);
            tracep->chgQData(oldp+271,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataW[0xeU])) 
                                         << 0x35U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataW[0xdU])) 
                                            << 0x15U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataW[0xcU])) 
                                              >> 0xbU)))),64);
            tracep->chgQData(oldp+273,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataW[0xcU])) 
                                         << 0x35U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataW[0xbU])) 
                                            << 0x15U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataW[0xaU])) 
                                              >> 0xbU)))),64);
            tracep->chgCData(oldp+275,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataW[0xaU] 
                                                 >> 4U))),7);
            tracep->chgCData(oldp+276,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataW[0xaU] 
                                                  << 3U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataW[9U] 
                                                    >> 0x1dU)))),7);
            tracep->chgBit(oldp+277,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[9U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+278,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[9U] 
                                            >> 0x1bU))));
            tracep->chgSData(oldp+279,((0xfffU & ((
                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U] 
                                                   << 0xbU) 
                                                  | (vlSelf->SimTop__DOT__core__DOT__dataW[4U] 
                                                     >> 0x15U)))),12);
            tracep->chgQData(oldp+280,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                                         << 0x2bU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                            << 0xbU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                              >> 0x15U)))),64);
            tracep->chgBit(oldp+282,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                            >> 0x14U))));
            tracep->chgSData(oldp+283,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__dataW[7U] 
                                                  >> 2U))),12);
            tracep->chgQData(oldp+284,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                              >> 2U)))),64);
            tracep->chgBit(oldp+286,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[5U] 
                                            >> 1U))));
            tracep->chgSData(oldp+287,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__dataW[9U] 
                                                  >> 0xfU))),12);
            tracep->chgQData(oldp+288,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataW[9U])) 
                                         << 0x31U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataW[8U])) 
                                            << 0x11U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                                              >> 0xfU)))),64);
            tracep->chgBit(oldp+290,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[7U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+291,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+292,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+293,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                 >> 0xdU))),5);
            tracep->chgQData(oldp+294,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                         << 0x33U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataW[1U])) 
                                            << 0x13U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataW[0U])) 
                                              >> 0xdU)))),64);
            tracep->chgBit(oldp+296,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[0U] 
                                            >> 0xcU))));
            tracep->chgSData(oldp+297,((0xfffU & vlSelf->SimTop__DOT__core__DOT__dataW[0U])),12);
            tracep->chgCData(oldp+298,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                 >> 0x10U))),5);
            tracep->chgCData(oldp+299,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                 >> 0x15U))),5);
            tracep->chgQData(oldp+300,(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1),64);
            tracep->chgQData(oldp+302,(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2),64);
            tracep->chgSData(oldp+304,(vlSelf->SimTop__DOT__core__DOT__csr_ra),12);
            tracep->chgBit(oldp+305,(vlSelf->SimTop__DOT__core__DOT__stallpc));
            tracep->chgBit(oldp+306,(vlSelf->SimTop__DOT__core__DOT__stalldata));
            tracep->chgBit(oldp+307,(vlSelf->SimTop__DOT__core__DOT__bubble));
            tracep->chgBit(oldp+308,(vlSelf->SimTop__DOT__core__DOT__flush));
            tracep->chgBit(oldp+309,(((((((((0x32U 
                                             == (0x7fU 
                                                 & (vlSelf->SimTop__DOT__core__DOT__dataW[0xaU] 
                                                    >> 4U))) 
                                            | (0x33U 
                                               == (0x7fU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataW[0xaU] 
                                                      >> 4U)))) 
                                           | (0x34U 
                                              == (0x7fU 
                                                  & (vlSelf->SimTop__DOT__core__DOT__dataW[0xaU] 
                                                     >> 4U)))) 
                                          | (0x35U 
                                             == (0x7fU 
                                                 & (vlSelf->SimTop__DOT__core__DOT__dataW[0xaU] 
                                                    >> 4U)))) 
                                         | (0x36U == 
                                            (0x7fU 
                                             & (vlSelf->SimTop__DOT__core__DOT__dataW[0xaU] 
                                                >> 4U)))) 
                                        | (0x37U == 
                                           (0x7fU & 
                                            (vlSelf->SimTop__DOT__core__DOT__dataW[0xaU] 
                                             >> 4U)))) 
                                       | (0x39U == 
                                          (0x7fU & 
                                           (vlSelf->SimTop__DOT__core__DOT__dataW[0xaU] 
                                            >> 4U)))) 
                                      & (~ (vlSelf->SimTop__DOT__core__DOT__dataW[0U] 
                                            >> 0xcU)))));
            tracep->chgBit(oldp+310,(((~ (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                          >> 0xcU)) 
                                      & ((((~ (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                               >> 0xcU)) 
                                           & ((0x1fU 
                                               & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                  >> 0x10U)) 
                                              == (0x1fU 
                                                  & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                     >> 0xdU)))) 
                                          | ((~ (vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                                                 >> 0xcU)) 
                                             & ((0x1fU 
                                                 & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                    >> 0x10U)) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                    >> 0xdU))))) 
                                         | ((~ (vlSelf->SimTop__DOT__core__DOT__dataW[0U] 
                                                >> 0xcU)) 
                                            & ((0x1fU 
                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                   >> 0x10U)) 
                                               == (0x1fU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                      >> 0xdU))))))));
            tracep->chgBit(oldp+311,(((~ (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                          >> 0xcU)) 
                                      & ((((~ (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                               >> 0xcU)) 
                                           & ((0x1fU 
                                               & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                  >> 0x15U)) 
                                              == (0x1fU 
                                                  & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                     >> 0xdU)))) 
                                          | ((~ (vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                                                 >> 0xcU)) 
                                             & ((0x1fU 
                                                 & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                    >> 0x15U)) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                    >> 0xdU))))) 
                                         | ((~ (vlSelf->SimTop__DOT__core__DOT__dataW[0U] 
                                                >> 0xcU)) 
                                            & ((0x1fU 
                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                   >> 0x15U)) 
                                               == (0x1fU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                      >> 0xdU))))))));
            tracep->chgBit(oldp+312,(vlSelf->SimTop__DOT__core__DOT__hazard_jalr));
            tracep->chgBit(oldp+313,(vlSelf->SimTop__DOT__core__DOT__hazard_csr));
            tracep->chgCData(oldp+314,(vlSelf->SimTop__DOT__core__DOT__op_in),5);
            tracep->chgCData(oldp+315,(vlSelf->SimTop__DOT__core__DOT__op_out),5);
            tracep->chgCData(oldp+316,(vlSelf->SimTop__DOT__core__DOT__csr_state),2);
            tracep->chgCData(oldp+317,(vlSelf->SimTop__DOT__core__DOT__csr_state_next),2);
            tracep->chgCData(oldp+318,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[7U] 
                                                 >> 0x12U))),7);
            tracep->chgCData(oldp+319,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[7U] 
                                                 >> 0xbU))),7);
            tracep->chgBit(oldp+320,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[7U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+321,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[7U] 
                                            >> 9U))));
            tracep->chgSData(oldp+322,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[2U] 
                                                  >> 3U))),12);
            tracep->chgQData(oldp+323,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[2U])) 
                                         << 0x3dU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[1U])) 
                                            << 0x1dU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[0U])) 
                                              >> 3U)))),64);
            tracep->chgBit(oldp+325,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[0U] 
                                            >> 2U))));
            tracep->chgSData(oldp+326,((0xfffU & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[4U] 
                                                  >> 0x10U))),12);
            tracep->chgQData(oldp+327,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[4U])) 
                                         << 0x30U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[3U])) 
                                            << 0x10U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[2U])) 
                                              >> 0x10U)))),64);
            tracep->chgBit(oldp+329,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[2U] 
                                            >> 0xfU))));
            tracep->chgSData(oldp+330,((0xfffU & ((
                                                   vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[7U] 
                                                   << 3U) 
                                                  | (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[6U] 
                                                     >> 0x1dU)))),12);
            tracep->chgQData(oldp+331,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[6U])) 
                                         << 0x23U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[5U])) 
                                            << 3U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[4U])) 
                                              >> 0x1dU)))),64);
            tracep->chgBit(oldp+333,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[4U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+334,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+335,((1U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl[0U])));
            tracep->chgCData(oldp+336,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                 >> 1U))),7);
            tracep->chgCData(oldp+337,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                  << 6U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                    >> 0x1aU)))),7);
            tracep->chgCData(oldp+338,((7U & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                              >> 0xdU))),3);
            tracep->chgCData(oldp+339,((0x3fU & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                  << 5U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                    >> 0x1bU)))),6);
            tracep->chgQData(oldp+340,(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result),64);
            tracep->chgQData(oldp+342,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a),64);
            tracep->chgQData(oldp+344,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b),64);
            tracep->chgCData(oldp+346,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__msize),3);
            tracep->chgCData(oldp+347,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe),8);
            tracep->chgBit(oldp+348,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__isunsigned));
            tracep->chgBit(oldp+349,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit));
            tracep->chgQData(oldp+350,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata),64);
            tracep->chgQData(oldp+352,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata),64);
            tracep->chgBit(oldp+354,((((((((0x32U == 
                                            (0x7fU 
                                             & (vlSelf->SimTop__DOT__core__DOT__dataW[0xaU] 
                                                >> 4U))) 
                                           | (0x33U 
                                              == (0x7fU 
                                                  & (vlSelf->SimTop__DOT__core__DOT__dataW[0xaU] 
                                                     >> 4U)))) 
                                          | (0x34U 
                                             == (0x7fU 
                                                 & (vlSelf->SimTop__DOT__core__DOT__dataW[0xaU] 
                                                    >> 4U)))) 
                                         | (0x35U == 
                                            (0x7fU 
                                             & (vlSelf->SimTop__DOT__core__DOT__dataW[0xaU] 
                                                >> 4U)))) 
                                        | (0x36U == 
                                           (0x7fU & 
                                            (vlSelf->SimTop__DOT__core__DOT__dataW[0xaU] 
                                             >> 4U)))) 
                                       | (0x37U == 
                                          (0x7fU & 
                                           (vlSelf->SimTop__DOT__core__DOT__dataW[0xaU] 
                                            >> 4U)))) 
                                      & (~ (vlSelf->SimTop__DOT__core__DOT__dataW[0U] 
                                            >> 0xcU)))));
            tracep->chgIData(oldp+355,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__unnamedblk2__DOT__i),32);
            tracep->chgBit(oldp+356,(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE));
            tracep->chgQData(oldp+357,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0U])))),64);
            tracep->chgQData(oldp+359,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[2U])))),64);
            tracep->chgQData(oldp+361,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[4U])))),64);
            tracep->chgQData(oldp+363,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[6U])))),64);
            tracep->chgQData(oldp+365,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[8U])))),64);
            tracep->chgQData(oldp+367,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xaU])))),64);
            tracep->chgQData(oldp+369,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xcU])))),64);
            tracep->chgQData(oldp+371,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xeU])))),64);
            tracep->chgQData(oldp+373,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x10U])))),64);
            tracep->chgQData(oldp+375,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x12U])))),64);
            tracep->chgQData(oldp+377,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x14U])))),64);
            tracep->chgQData(oldp+379,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x17U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x16U])))),64);
            tracep->chgQData(oldp+381,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x19U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x18U])))),64);
            tracep->chgQData(oldp+383,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1aU])))),64);
            tracep->chgQData(oldp+385,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1cU])))),64);
            tracep->chgQData(oldp+387,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1eU])))),64);
            tracep->chgQData(oldp+389,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x21U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x20U])))),64);
            tracep->chgQData(oldp+391,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x23U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x22U])))),64);
            tracep->chgQData(oldp+393,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x25U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x24U])))),64);
            tracep->chgQData(oldp+395,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x27U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x26U])))),64);
            tracep->chgQData(oldp+397,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x29U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x28U])))),64);
            tracep->chgQData(oldp+399,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2aU])))),64);
            tracep->chgQData(oldp+401,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2cU])))),64);
            tracep->chgQData(oldp+403,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2eU])))),64);
            tracep->chgQData(oldp+405,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x31U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x30U])))),64);
            tracep->chgQData(oldp+407,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x33U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x32U])))),64);
            tracep->chgQData(oldp+409,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x35U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x34U])))),64);
            tracep->chgQData(oldp+411,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x37U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x36U])))),64);
            tracep->chgQData(oldp+413,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x39U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x38U])))),64);
            tracep->chgQData(oldp+415,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3aU])))),64);
            tracep->chgQData(oldp+417,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3cU])))),64);
            tracep->chgQData(oldp+419,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3eU])))),64);
            tracep->chgQData(oldp+421,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0U])))),64);
            tracep->chgQData(oldp+423,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[2U])))),64);
            tracep->chgQData(oldp+425,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[4U])))),64);
            tracep->chgQData(oldp+427,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[6U])))),64);
            tracep->chgQData(oldp+429,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[8U])))),64);
            tracep->chgQData(oldp+431,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU])))),64);
            tracep->chgQData(oldp+433,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU])))),64);
            tracep->chgQData(oldp+435,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU])))),64);
            tracep->chgQData(oldp+437,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U])))),64);
            tracep->chgQData(oldp+439,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U])))),64);
            tracep->chgQData(oldp+441,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U])))),64);
            tracep->chgQData(oldp+443,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U])))),64);
            tracep->chgQData(oldp+445,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U])))),64);
            tracep->chgQData(oldp+447,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU])))),64);
            tracep->chgQData(oldp+449,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU])))),64);
            tracep->chgQData(oldp+451,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU])))),64);
            tracep->chgQData(oldp+453,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U])))),64);
            tracep->chgQData(oldp+455,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U])))),64);
            tracep->chgQData(oldp+457,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U])))),64);
            tracep->chgQData(oldp+459,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U])))),64);
            tracep->chgQData(oldp+461,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U])))),64);
            tracep->chgQData(oldp+463,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU])))),64);
            tracep->chgQData(oldp+465,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU])))),64);
            tracep->chgQData(oldp+467,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU])))),64);
            tracep->chgQData(oldp+469,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U])))),64);
            tracep->chgQData(oldp+471,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U])))),64);
            tracep->chgQData(oldp+473,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U])))),64);
            tracep->chgQData(oldp+475,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U])))),64);
            tracep->chgQData(oldp+477,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U])))),64);
            tracep->chgQData(oldp+479,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU])))),64);
            tracep->chgQData(oldp+481,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU])))),64);
            tracep->chgQData(oldp+483,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU])))),64);
            tracep->chgBit(oldp+485,((1U & ((vlSelf->SimTop__DOT__core__DOT__dataW[9U] 
                                             >> 0x1bU) 
                                            & (~ (vlSelf->SimTop__DOT__core__DOT__dataW[1U] 
                                                  >> 0xcU))))));
            tracep->chgCData(oldp+486,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                 >> 0xdU))),8);
            tracep->chgQData(oldp+487,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0U])))),64);
            tracep->chgQData(oldp+489,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[2U])))),64);
            tracep->chgQData(oldp+491,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[4U])))),64);
            tracep->chgQData(oldp+493,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[6U])))),64);
            tracep->chgQData(oldp+495,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[8U])))),64);
            tracep->chgQData(oldp+497,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU])))),64);
            tracep->chgQData(oldp+499,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU])))),64);
            tracep->chgQData(oldp+501,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU])))),64);
            tracep->chgQData(oldp+503,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U])))),64);
            tracep->chgQData(oldp+505,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U])))),64);
            tracep->chgQData(oldp+507,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U])))),64);
            tracep->chgQData(oldp+509,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U])))),64);
            tracep->chgQData(oldp+511,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U])))),64);
            tracep->chgQData(oldp+513,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU])))),64);
            tracep->chgQData(oldp+515,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU])))),64);
            tracep->chgQData(oldp+517,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU])))),64);
            tracep->chgQData(oldp+519,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U])))),64);
            tracep->chgQData(oldp+521,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U])))),64);
            tracep->chgQData(oldp+523,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U])))),64);
            tracep->chgQData(oldp+525,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U])))),64);
            tracep->chgQData(oldp+527,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U])))),64);
            tracep->chgQData(oldp+529,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU])))),64);
            tracep->chgQData(oldp+531,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU])))),64);
            tracep->chgQData(oldp+533,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU])))),64);
            tracep->chgQData(oldp+535,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U])))),64);
            tracep->chgQData(oldp+537,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U])))),64);
            tracep->chgQData(oldp+539,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U])))),64);
            tracep->chgQData(oldp+541,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U])))),64);
            tracep->chgQData(oldp+543,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U])))),64);
            tracep->chgQData(oldp+545,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU])))),64);
            tracep->chgQData(oldp+547,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU])))),64);
            tracep->chgQData(oldp+549,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU])))),64);
            tracep->chgBit(oldp+551,((1U & (vlSelf->SimTop__DOT__icvt__DOT__dresp[2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+552,((1U & vlSelf->SimTop__DOT__icvt__DOT__dresp[2U])));
            tracep->chgQData(oldp+553,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__icvt__DOT__dresp[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__icvt__DOT__dresp[0U])))),64);
            tracep->chgBit(oldp+555,((1U & vlSelf->SimTop__DOT__ireq[2U])));
            tracep->chgQData(oldp+556,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__ireq[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__ireq[0U])))),64);
            tracep->chgBit(oldp+558,((1U & ((vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                             >> 3U) 
                                            & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                               >> 2U)))));
            tracep->chgBit(oldp+559,((1U & ((vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U] 
                                             >> 1U) 
                                            & vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U]))));
            tracep->chgBit(oldp+560,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+561,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+562,((7U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+563,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+565,((0xffU & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[2U] 
                                                 >> 0xaU))),8);
            tracep->chgQData(oldp+566,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+568,((0xffU & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[0U] 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+569,((3U & vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[0U])),2);
            tracep->chgBit(oldp+570,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+571,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+572,((7U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                              >> 9U))),3);
            tracep->chgQData(oldp+573,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U])) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[8U])) 
                                            << 0x17U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[7U])) 
                                              >> 9U)))),64);
            tracep->chgCData(oldp+575,((0xffU & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[7U] 
                                                 >> 1U))),8);
            tracep->chgQData(oldp+576,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[7U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[6U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[5U])) 
                                              >> 1U)))),64);
            tracep->chgCData(oldp+578,((0xffU & ((vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[5U] 
                                                  << 7U) 
                                                 | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                                    >> 0x19U)))),8);
            tracep->chgCData(oldp+579,((3U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                              >> 0x17U))),2);
            tracep->chgBit(oldp+580,(vlSelf->SimTop__DOT__mux__DOT__busy));
            tracep->chgIData(oldp+581,(vlSelf->SimTop__DOT__mux__DOT__index),32);
            tracep->chgIData(oldp+582,(vlSelf->SimTop__DOT__mux__DOT__select),32);
            tracep->chgBit(oldp+583,((1U & (vlSelf->SimTop__DOT__mux__DOT__saved_req[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+584,((1U & (vlSelf->SimTop__DOT__mux__DOT__saved_req[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+585,((7U & (vlSelf->SimTop__DOT__mux__DOT__saved_req[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+586,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__mux__DOT__saved_req[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__mux__DOT__saved_req[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__mux__DOT__saved_req[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+588,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__saved_req[2U] 
                                                 >> 0xaU))),8);
            tracep->chgQData(oldp+589,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__mux__DOT__saved_req[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__mux__DOT__saved_req[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__mux__DOT__saved_req[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+591,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__saved_req[0U] 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+592,((3U & vlSelf->SimTop__DOT__mux__DOT__saved_req[0U])),2);
            tracep->chgBit(oldp+593,((1U & (vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+594,((1U & (vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+595,((7U & (vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+596,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__mux__DOT__selected_req[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__mux__DOT__selected_req[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__mux__DOT__selected_req[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+598,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__selected_req[2U] 
                                                 >> 0xaU))),8);
            tracep->chgQData(oldp+599,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__mux__DOT__selected_req[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__mux__DOT__selected_req[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__mux__DOT__selected_req[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+601,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__selected_req[0U] 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+602,((3U & vlSelf->SimTop__DOT__mux__DOT__selected_req[0U])),2);
            tracep->chgIData(oldp+603,(vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i),32);
            tracep->chgIData(oldp+604,(vlSelf->SimTop__DOT__mux__DOT__unnamedblk2__DOT__i),32);
            tracep->chgBit(oldp+605,((1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+606,((1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+607,((7U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+608,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__ram__DOT__saved_oreq[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+610,((0xffU & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U] 
                                                 >> 0xaU))),8);
            tracep->chgQData(oldp+611,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__ram__DOT__saved_oreq[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+613,((0xffU & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U] 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+614,((3U & vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U])),2);
            tracep->chgCData(oldp+615,(vlSelf->SimTop__DOT__ram__DOT__state),2);
            tracep->chgCData(oldp+616,(vlSelf->SimTop__DOT__ram__DOT__count_down),8);
            tracep->chgCData(oldp+617,(vlSelf->SimTop__DOT__ram__DOT__size),4);
            tracep->chgQData(oldp+618,(vlSelf->SimTop__DOT__ram__DOT__addr),64);
            tracep->chgQData(oldp+620,(vlSelf->SimTop__DOT__ram__DOT__idx),64);
            tracep->chgQData(oldp+622,(vlSelf->SimTop__DOT__ram__DOT__wrap1),64);
            tracep->chgQData(oldp+624,(vlSelf->SimTop__DOT__ram__DOT__wrap2),64);
            tracep->chgQData(oldp+626,(vlSelf->SimTop__DOT__ram__DOT__cyc_cnt),64);
            tracep->chgQData(oldp+628,(vlSelf->SimTop__DOT__ram__DOT__ms_cnt),64);
            tracep->chgQData(oldp+630,(vlSelf->SimTop__DOT__ram__DOT__wmask),64);
            tracep->chgQData(oldp+632,(vlSelf->SimTop__DOT__ram__DOT__mtime),64);
            tracep->chgQData(oldp+634,(vlSelf->SimTop__DOT__ram__DOT__mtimecmp),64);
            tracep->chgBit(oldp+636,(vlSelf->SimTop__DOT__ram__DOT__msip));
        }
        tracep->chgBit(oldp+637,(vlSelf->clock));
        tracep->chgBit(oldp+638,(vlSelf->reset));
        tracep->chgQData(oldp+639,(vlSelf->io_logCtrl_log_begin),64);
        tracep->chgQData(oldp+641,(vlSelf->io_logCtrl_log_end),64);
        tracep->chgQData(oldp+643,(vlSelf->io_logCtrl_log_level),64);
        tracep->chgBit(oldp+645,(vlSelf->io_perfInfo_clean));
        tracep->chgBit(oldp+646,(vlSelf->io_perfInfo_dump));
        tracep->chgBit(oldp+647,(vlSelf->io_uart_out_valid));
        tracep->chgCData(oldp+648,(vlSelf->io_uart_out_ch),8);
        tracep->chgBit(oldp+649,(vlSelf->io_uart_in_valid));
        tracep->chgCData(oldp+650,(vlSelf->io_uart_in_ch),8);
        tracep->chgQData(oldp+651,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr
                                   [vlSelf->SimTop__DOT__core__DOT__csr_ra]),64);
        tracep->chgQData(oldp+653,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                   [0x341U]),64);
        tracep->chgCData(oldp+655,((0xffU & (IData)(
                                                    vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                                    [0xf14U]))),8);
        tracep->chgQData(oldp+656,((0x7e79bbULL & vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                    [0x300U])),64);
        tracep->chgQData(oldp+658,((0x800000030001e000ULL 
                                    & vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                    [0x100U])),64);
        tracep->chgQData(oldp+660,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                   [0x343U]),64);
        tracep->chgQData(oldp+662,((0xfffffffffffffffdULL 
                                    & vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                    [0x305U])),64);
        tracep->chgQData(oldp+664,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                   [0x342U]),64);
        tracep->chgQData(oldp+666,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                   [0x180U]),64);
        tracep->chgQData(oldp+668,((0x333ULL & vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                    [0x344U])),64);
        tracep->chgQData(oldp+670,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                   [0x304U]),64);
        tracep->chgQData(oldp+672,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                   [0x340U]),64);
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

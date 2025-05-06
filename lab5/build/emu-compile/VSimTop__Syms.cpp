// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VSimTop__Syms.h"
#include "VSimTop.h"
#include "VSimTop___024root.h"
#include "VSimTop___024unit.h"

// FUNCTIONS
VSimTop__Syms::~VSimTop__Syms()
{
}

VSimTop__Syms::VSimTop__Syms(VerilatedContext* contextp, const char* namep,VSimTop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
    , TOP____024unit(Verilated::catName(namep, "$unit"))
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    TOP____024unit.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_SimTop__core.configure(this, name(), "SimTop.core", "core", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SimTop__core__csr_regfile.configure(this, name(), "SimTop.core.csr_regfile", "csr_regfile", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_SimTop__core__decode__decoder.configure(this, name(), "SimTop.core.decode.decoder", "decoder", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SimTop__core__memory.configure(this, name(), "SimTop.core.memory", "memory", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SimTop__ram.configure(this, name(), "SimTop.ram", "ram", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_SimTop__core__csr_regfile.varInsert(__Vfinal,"csr", &(TOP.SimTop__DOT__core__DOT__csr_regfile__DOT__csr), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RD,2 ,63,0 ,0,4095);
        __Vscope_SimTop__core__csr_regfile.varInsert(__Vfinal,"csr_nxt", &(TOP.SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RD,2 ,63,0 ,0,4095);
    }
}

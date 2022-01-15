// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vxor_stage__Syms.h"


//======================

void Vxor_stage::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vxor_stage::traceInit, &Vxor_stage::traceFull, &Vxor_stage::traceChg, this);
}
void Vxor_stage::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vxor_stage* t = (Vxor_stage*)userthis;
    Vxor_stage__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vxor_stage::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vxor_stage* t = (Vxor_stage*)userthis;
    Vxor_stage__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vxor_stage::traceInitThis(Vxor_stage__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vxor_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vxor_stage::traceFullThis(Vxor_stage__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vxor_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vxor_stage::traceInitThis__1(Vxor_stage__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vxor_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+1+i*1,"data_i", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+65+i*1,"data_o", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+1+i*1,"xor_stage data_i", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBit(c+65+i*1,"xor_stage data_o", true,(i+0));}}
    }
}

void Vxor_stage::traceFullThis__1(Vxor_stage__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vxor_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->data_i[0]));
        vcdp->fullBit(c+2,(vlTOPp->data_i[1]));
        vcdp->fullBit(c+3,(vlTOPp->data_i[2]));
        vcdp->fullBit(c+4,(vlTOPp->data_i[3]));
        vcdp->fullBit(c+5,(vlTOPp->data_i[4]));
        vcdp->fullBit(c+6,(vlTOPp->data_i[5]));
        vcdp->fullBit(c+7,(vlTOPp->data_i[6]));
        vcdp->fullBit(c+8,(vlTOPp->data_i[7]));
        vcdp->fullBit(c+65,(vlTOPp->data_o[0]));
        vcdp->fullBit(c+66,(vlTOPp->data_o[1]));
        vcdp->fullBit(c+67,(vlTOPp->data_o[2]));
        vcdp->fullBit(c+68,(vlTOPp->data_o[3]));
        vcdp->fullBit(c+69,(vlTOPp->data_o[4]));
        vcdp->fullBit(c+70,(vlTOPp->data_o[5]));
        vcdp->fullBit(c+71,(vlTOPp->data_o[6]));
        vcdp->fullBit(c+72,(vlTOPp->data_o[7]));
    }
}

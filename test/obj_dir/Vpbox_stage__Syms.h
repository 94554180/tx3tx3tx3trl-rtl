// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VPBOX_STAGE__SYMS_H_
#define _VPBOX_STAGE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vpbox_stage.h"

// SYMS CLASS
class Vpbox_stage__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vpbox_stage*                   TOPp;
    
    // CREATORS
    Vpbox_stage__Syms(Vpbox_stage* topp, const char* namep);
    ~Vpbox_stage__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

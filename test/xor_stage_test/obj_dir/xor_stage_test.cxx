#include "Vxor_stage.h"
#include "Vxor_stage.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <stdlib.h>

int main(int argc, char **argv) {
  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(true);
  VerilatedVcdC *trace = new VerilatedVcdC;
  Vxor_stage *top = new Vxor_stage;

  //
  top->trace(trace, 99);
  trace->open("xor_stage_test_trace.vcd");
  
  /*
  while(!Verilated::gotFinish()) {
          //top->i_clk = 1;
          //top->eval();
          //top->i_clk = 0;
          top->eval();
  } exit(EXIT_SUCCESS);
  */

  for (int i = 0; i < 10; i++) {
    top->eval();
  }

	trace->close();
	exit(0);
}
#include <stdlib.h>
#include "Vxor_stage.h"
#include "verilated.h"
#include <verilated_vcd_c.h>

int main(int argc, char **argv) {
	// Initialize Verilators variables
	Verilated::commandArgs(argc, argv);

	// Create an instance of our module under test
	Vxor_stage *tb = new Vxor_stage;

	// Tick the clock until we are done
	while(!Verilated::gotFinish()) {
		//tb->i_clk = 1;
		//tb->eval();
		//tb->i_clk = 0;
		//tb->eval();
	} exit(EXIT_SUCCESS);

	tb->opentrace("xor_stage_test_trace.vcd");
}
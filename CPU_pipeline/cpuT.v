`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:30:03 01/11/2021
// Design Name:   cpu
// Module Name:   D:/CPU_Pipeline_BranchHazard/lab3/CPUT.v
// Project Name:  lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cpu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CPUT;

	// Inputs
	reg clk;
	reg reset;

	// Outputs
	wire [31:0] debug_wb_pc;
	wire debug_wb_rf_wen;
	wire [4:0] debug_wb_rf_addr;
	wire [31:0] debug_wb_rf_wdata;
	wire [31:0] PC_Addr_out;
	wire [31:0] check_Addr;
	wire [31:0] PC_Addr_in;
	wire update_choice;
	wire BTB_Choice;
	wire [7:0] GHR;

	// Instantiate the Unit Under Test (UUT)
	cpu uut (
		.clk(clk), 
		.reset(reset), 
		.debug_wb_pc(debug_wb_pc), 
		.debug_wb_rf_wen(debug_wb_rf_wen), 
		.debug_wb_rf_addr(debug_wb_rf_addr), 
		.debug_wb_rf_wdata(debug_wb_rf_wdata), 
		.PC_Addr_out(PC_Addr_out), 
		.check_Addr(check_Addr), 
		.PC_Addr_in(PC_Addr_in), 
		.update_choice(update_choice), 
		.BTB_Choice(BTB_Choice), 
		.GHR(GHR)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;

		// Wait 100 ns for global reset to finish
		#100;
      reset=0; 
		// Add stimulus here

	end
 always #5 clk=~clk;   
      
endmodule


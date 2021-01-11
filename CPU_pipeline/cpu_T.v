`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:30:02 01/04/2021
// Design Name:   cpu
// Module Name:   D:/CPU_Pipeline_BranchHazard/lab3/cpu_T.v
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

module cpu_T;

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
	wire [31:0] IF_ID_PC;
	wire [31:0] oot_A;
	wire [31:0] oot_B;
	wire [31:0] EX_MEM_ALU_output;
	wire [31:0] Read_data1_Reg;
	wire [31:0] Read_data2_Reg;
	wire IF_ID_Write;
	wire IF_ID_Flush;
	wire PC_Write;
	wire ID_EX_Flush;
	wire Zero;
	wire update_choice;
	wire update_en;
	wire Gpre;
	wire BTB_Choice;
	wire IF_ID_Choice;
	wire Jump;
	wire Branch;
	wire [7:0] GHR;
	wire [1:0] ForwardA;
	wire [1:0] ForwardB;

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
		.IF_ID_PC(IF_ID_PC), 
		.oot_A(oot_A), 
		.oot_B(oot_B), 
		.EX_MEM_ALU_output(EX_MEM_ALU_output), 
		.Read_data1_Reg(Read_data1_Reg), 
		.Read_data2_Reg(Read_data2_Reg), 
		.IF_ID_Write(IF_ID_Write), 
		.IF_ID_Flush(IF_ID_Flush), 
		.PC_Write(PC_Write), 
		.ID_EX_Flush(ID_EX_Flush), 
		.Zero(Zero), 
		.update_choice(update_choice), 
		.update_en(update_en), 
		.Gpre(Gpre), 
		.BTB_Choice(BTB_Choice), 
		.IF_ID_Choice(IF_ID_Choice), 
		.Jump(Jump), 
		.Branch(Branch), 
		.GHR(GHR), 
		.ForwardA(ForwardA), 
		.ForwardB(ForwardB)
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


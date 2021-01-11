`timescale 1ns / 1ps
module cpu(
   input         clk,
   input         reset,
   output [31:0] debug_wb_pc,    //The PC from Write_back pipeline register
	output  debug_wb_rf_wen,  //The RegWrite enable signal from Write_back pipeline register
	output [4 :0] debug_wb_rf_addr,  //The index of register that requires to wirte back from Wirte_back pipeline register
   output [31:0] debug_wb_rf_wdata, //The data requires to write back to the RegFile from Wirte_back pipeline register
	output [31:0] PC_Addr_out,check_Addr,PC_Addr_in,
	output update_choice,BTB_Choice,
	output [7:0] GHR
);
	 (* KEEP="TRUE" *)wire [31:0] /*PC_Addr_out,*/Read_data_Mem,IF_ID_Inst;
	 wire [31:0]  oot_1,oot_2,oot_A,oot_B,EX_MEM_ALU_output,Inst,/*check_Addr,*/
	 ALU_output,Jump_Addr,Ext_Imm,ALU_input,Read_data1_Reg,Read_data2_Reg,
     Ext_Imm_L2,Beq_Addr,IF_ID_PC,EX_MEM_Write_data,wb_data,IF_ID_Chosen_Addr,
     ID_EX_PC,ID_EX_Read_data1_Reg,ID_EX_Read_data2_Reg,ID_EX_Ext_Imm,
	  EX_MEM_PC/*,PC_Addr_in*/;
     wire IF_ID_Write,IF_ID_Flush,PC_Write,ID_EX_Flush,ID_EX_MemRead,RegWrite,
	  RegDst,Jump,Branch,MemtoReg,ALUSrc,MemWrite,MemRead,
	  ID_EX_MemtoReg,ID_EX_MemWrite,ID_EX_ALUSrc,ID_EX_RegWrite,
	  EX_MEM_MemRead,EX_MEM_MemtoReg,EX_MEM_RegWrite,EX_MEM_MemWrite,
	  Zero/*update_choice*/,update_en,Gpre,/*BTB_Choice*/IF_ID_Choice;
	  wire[1:0] Forward1,Forward2,ForwardA,ForwardB,ID_EX_ALUOp,ALUOp;
	  wire [4:0] Write_Register,ID_EX_Rd,ID_EX_Rs1,ID_EX_Rs2,EX_MEM_Rd;
	  wire [5:0] ID_EX_Inst50;
	  wire [3:0] ALUctr;
	 
	 PC u_PC(clk,reset,PC_Addr_in,PC_Addr_out,PC_Write); //PC
	 Gshare u_Gshare(PC_Addr_out,IF_ID_PC,update_choice,update_en,Branch,clk,Gpre,GHR);
	 Branch_Target_Buffer u_BTB(PC_Addr_out,IF_ID_PC,check_Addr,Branch,Jump,Gpre,clk,update_en,IF_ID_Choice,update_choice,IF_ID_Flush,BTB_Choice,PC_Addr_in);
	 Inst_Mem u_Inst_Mem(PC_Addr_out,Inst);
	 
	 IF_ID u_IF_ID(PC_Addr_out,IF_ID_PC,BTB_Choice,IF_ID_Choice,Inst,IF_ID_Inst,PC_Addr_in,
	 IF_ID_Chosen_Addr,IF_ID_Write,IF_ID_Flush,clk,reset);//IF_ID
	 Hazard_detection_unit u_hazard_detec(IF_ID_Inst[25:21],IF_ID_Inst[20:16],ID_EX_Rd,EX_MEM_Rd,Branch,
	 ID_EX_RegWrite,EX_MEM_MemRead,ID_EX_MemRead,IF_ID_Write,PC_Write,ID_EX_Flush);
	 Left_S2_Com u_Left_S2_Com(IF_ID_Inst[25:0],IF_ID_Inst[31:28],Jump_Addr);
	 Control u_Control(IF_ID_Inst[31:26],RegDst,Jump,Branch,MemRead,MemtoReg,ALUOp,MemWrite,ALUSrc,RegWrite);
	 Mux_5 u_Mux_5(IF_ID_Inst[20:16],IF_ID_Inst[15:11],Write_Register,RegDst);
	 RegFile u_RegFile(IF_ID_Inst[25:21],IF_ID_Inst[20:16],debug_wb_rf_addr,debug_wb_rf_wdata,debug_wb_rf_wen,Read_data1_Reg,Read_data2_Reg,clk);
	 Sign_Ext u_Sign_Ext(IF_ID_Inst[15:0],Ext_Imm);
	 Left_S2 u_Left_S2(Ext_Imm,Ext_Imm_L2);
	 Adder u_Adder2(IF_ID_PC,Ext_Imm_L2,Beq_Addr);
	 Updater u_Updater(Branch,Zero,Beq_Addr,Jump,Jump_Addr,ID_EX_Flush,IF_ID_Chosen_Addr,IF_ID_Choice,update_en,update_choice,
	 IF_ID_Flush,check_Addr);
	 XOR u_XOR(oot_A,oot_B,Zero);
	 Mux3_32 u_Mux3_32_2(Read_data1_Reg,debug_wb_rf_wdata,EX_MEM_ALU_output,ForwardA,oot_A);
	 Mux3_32 u_Mux3_32_3(Read_data2_Reg,debug_wb_rf_wdata,EX_MEM_ALU_output,ForwardB,oot_B);
	 
  	 ID_EX u_ID_EX(ID_EX_Flush,IF_ID_PC,ID_EX_PC,MemRead,ID_EX_MemRead,
	 MemtoReg,ID_EX_MemtoReg,ALUOp,ID_EX_ALUOp,MemWrite,ID_EX_MemWrite,ALUSrc,ID_EX_ALUSrc,RegWrite,ID_EX_RegWrite,
	 Read_data1_Reg,ID_EX_Read_data1_Reg,Read_data2_Reg,ID_EX_Read_data2_Reg,Ext_Imm,
	 ID_EX_Ext_Imm,IF_ID_Inst[5:0],ID_EX_Inst50,
	 IF_ID_Inst[25:21],ID_EX_Rs1,IF_ID_Inst[20:16],ID_EX_Rs2,Write_Register,ID_EX_Rd,clk,reset);//ID_EX 
	 Mux3_32 u_Mux3_32_0(ID_EX_Read_data1_Reg,debug_wb_rf_wdata,EX_MEM_ALU_output,Forward1,oot_1);
	 Mux3_32 u_Mux3_32_1(ID_EX_Read_data2_Reg,debug_wb_rf_wdata,EX_MEM_ALU_output,Forward2,oot_2);
	 Mux_32 u_Mux_321(oot_2,ID_EX_Ext_Imm,ALU_input,ID_EX_ALUSrc); 
    ALU u_ALU(ALUctr,oot_1,ALU_input,ALU_output);
	 ALU_Con u_ALU_Con(ID_EX_ALUOp,ID_EX_Inst50,ALUctr);
	 Forwarding_Unit u_Forwarding_Unit(IF_ID_Inst[25:21],IF_ID_Inst[20:16],ID_EX_Rs1,ID_EX_Rs2,EX_MEM_Rd,debug_wb_rf_addr,
	 EX_MEM_RegWrite,debug_wb_rf_wen,Forward1,Forward2,ForwardA,ForwardB);
	 
	 EX_MEM u_EX_MEM(ID_EX_PC,EX_MEM_PC,ID_EX_MemRead,EX_MEM_MemRead,
	 ID_EX_MemtoReg, EX_MEM_MemtoReg,ID_EX_MemWrite,EX_MEM_MemWrite,ID_EX_RegWrite,EX_MEM_RegWrite,
	 ALU_output,EX_MEM_ALU_output,oot_2,EX_MEM_Write_data,ID_EX_Rd,EX_MEM_Rd,clk,reset);//EX_MEM
	 Data_Mem u_Data_Mem(clk,EX_MEM_ALU_output,EX_MEM_Write_data,Read_data_Mem,EX_MEM_MemWrite,EX_MEM_MemRead);
	 Mux_32 u_Mux_322(EX_MEM_ALU_output,Read_data_Mem,wb_data,EX_MEM_MemtoReg);
	 MEM_WB u_MEM_WB(EX_MEM_PC,debug_wb_pc,EX_MEM_RegWrite,debug_wb_rf_wen,
	 wb_data,debug_wb_rf_wdata,EX_MEM_Rd,debug_wb_rf_addr,clk,reset);//MEM_WB
	 endmodule
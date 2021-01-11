`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:12:56 01/01/2021 
// Design Name: 
// Module Name:    Branch_Target_Buffer 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Branch_Target_Buffer(
 input [31:0] PC_in,
 input [31:0] old_PC,
 input [31:0] check_Addr,
 input is_Branch,
 input is_Jump,
 input Gpre,
 input clk,
 input update_En,
 input old_Choice,
 input update_Choice,
 input Remedy,
 output reg Choice,
 output reg [31:0] NEXT_PC
    );
integer i;
reg [53:0] BTB [1023:0]; //53:valid bit,52:uncondition bit,51~32:Tag,31~0:Target address
wire Valid_bit =BTB[PC_in[11:2]][53:53];
wire Uncondition_bit=BTB[PC_in[11:2]][52:52];
wire [19:0] Tag=BTB[PC_in[11:2]][51:32];
wire [31:0] Target_addr=BTB[PC_in[11:2]][31:0];
always @(posedge clk)//update
begin
 if(update_En)  //if update_En is enabled,then update !
 begin
  if(is_Branch||is_Jump)
    BTB[old_PC[11:2]]<={1'b1,is_Jump,old_PC[31:12],check_Addr};
 end
end 
always @ *//(negedge clk/*Valid_bit,Tag,PC_in,Target_addr,Gpre,Uncondition_bit,Remedy,update_Choice,check_Addr*/)  //predict
begin
 if(!Remedy)      //Predict or Remedy
 begin
  if(!Valid_bit||Tag!=PC_in[31:12])
  begin  
    NEXT_PC<=PC_in+4;
	 Choice<=0;
  end	
  else if(Gpre||Uncondition_bit)
  begin
    NEXT_PC<=Target_addr; 
	 Choice<=1;
  end	
  else
  begin
    NEXT_PC<=PC_in+4; 
	 Choice<=0;
  end
 end
 else if(update_Choice==1)
    NEXT_PC<=check_Addr; 
 else 
    NEXT_PC<=old_PC+4;
end
initial begin
NEXT_PC<=32'hffff_ffff;
Choice<=0;
for (i=0;i<1024;i=i+1)
  BTB[i]<=54'b0;
end
endmodule

//////////////////////////////////////////////////////////////////////////////////
//  @Copyright HIT team
//  CPU Automated testing environment
//////////////////////////////////////////////////////////////////////////////////
`timescale 1ns / 1ps

module cpu_top_tb;

	//clock and reset signal simulation
	reg clk;
	reg reset;

	initial begin
		 clk    = 1'b0;
		 reset  = 1'b1;
		 #100;
		 reset  = 1'b0;
	end

	always #5 clk = ~clk;


	// call the CPU module	
	wire [3:0] segan_en;
	wire [7:0] segans;

	cpu_top U_cpu_top(
		.clk(clk), 
		.reset(reset), 
		.segan_en(segan_en), 
		.segans(segans)
	);
	
	
	//-----monitor test-----
	initial begin
		$timeformat(-9,0," ns",10);
		while(reset) #5;
		$display("==============================================================");
		$display("Test begin!");
		#10000;
	end
      
endmodule





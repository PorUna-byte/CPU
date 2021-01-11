
 
 
 

 



window new WaveWindow  -name  "Waves for BMG Example Design"
waveform  using  "Waves for BMG Example Design"


      waveform add -signals /Cache_tb/status
    waveform add -signals /Cache_tb/Cache_synth_inst/bmg_port/S_ACLK
    waveform add -signals /Cache_tb/Cache_synth_inst/bmg_port/S_AXI_AWADDR
    waveform add -signals /Cache_tb/Cache_synth_inst/bmg_port/S_AXI_AWVALID
    waveform add -signals /Cache_tb/Cache_synth_inst/bmg_port/S_AXI_AWREADY
    waveform add -signals /Cache_tb/Cache_synth_inst/bmg_port/S_AXI_AWLEN
    waveform add -signals /Cache_tb/Cache_synth_inst/bmg_port/S_AXI_AWSIZE
    waveform add -signals /Cache_tb/Cache_synth_inst/bmg_port/S_AXI_AWBURST
    waveform add -signals /Cache_tb/Cache_synth_inst/bmg_port/S_AXI_AWID
    waveform add -signals /Cache_tb/Cache_synth_inst/bmg_port/S_AXI_WDATA
    waveform add -signals /Cache_tb/Cache_synth_inst/bmg_port/S_AXI_WSTRB
    waveform add -signals /Cache_tb/Cache_synth_inst/bmg_port/S_AXI_WVALID
    waveform add -signals /Cache_tb/Cache_synth_inst/bmg_port/S_AXI_WREADY
    waveform add -signals /Cache_tb/Cache_synth_inst/bmg_port/S_AXI_WLAST
    waveform add -signals /Cache_tb/Cache_synth_inst/bmg_port/S_AXI_BID
    waveform add -signals /Cache_tb/Cache_synth_inst/bmg_port/S_AXI_BRESP
    waveform add -signals /Cache_tb/Cache_synth_inst/bmg_port/S_AXI_BVALID
    waveform add -signals /Cache_tb/Cache_synth_inst/bmg_port/S_AXI_BREADY
    waveform add -signals /Cache_tb/Cache_synth_inst/bmg_port/S_AXI_ARID
    waveform add -signals /Cache_tb/Cache_synth_inst/bmg_port/S_AXI_ARADDR
    waveform add -signals /Cache_tb/Cache_synth_inst/bmg_port/S_AXI_ARLEN
    waveform add -signals /Cache_tb/Cache_synth_inst/bmg_port/S_AXI_ARSIZE
    waveform add -signals /Cache_tb/Cache_synth_inst/bmg_port/S_AXI_ARBURST
    waveform add -signals /Cache_tb/Cache_synth_inst/bmg_port/S_AXI_ARVALID
    waveform add -signals /Cache_tb/Cache_synth_inst/bmg_port/S_AXI_ARREADY
    waveform add -signals /Cache_tb/Cache_synth_inst/bmg_port/S_AXI_RID
    waveform add -signals /Cache_tb/Cache_synth_inst/bmg_port/S_AXI_RDATA
    waveform add -signals /Cache_tb/Cache_synth_inst/bmg_port/S_AXI_RRESP
    waveform add -signals /Cache_tb/Cache_synth_inst/bmg_port/S_AXI_RLAST
    waveform add -signals /Cache_tb/Cache_synth_inst/bmg_port/S_AXI_RVALID
    waveform add -signals /Cache_tb/Cache_synth_inst/bmg_port/S_AXI_RREADY
      waveform add -signals /Cache_tb/Cache_synth_inst/bmg_port/S_ARESETN
console submit -using simulator -wait no "run"

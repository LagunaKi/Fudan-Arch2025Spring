`ifndef CONFIG_SV
`define CONFIG_SV

package config_pkg;
	// parameters
	parameter AXI_BURST_NUM = 16;
	
	// MMU configuration
	parameter ENABLE_MMU = 1; // Enable MMU
	parameter PAGE_LEVELS = 3; // Sv39 uses 3-level page tables
	parameter PAGE_SIZE = 4096; // 4KB page size
	parameter SV39_MODE = 8; // Sv39 mode value for satp.mode
endpackage

`endif

/*  This module implements SRAM based CY7C128A architecture
    that can hold approximately 16k bits (2k X 8) and has
    active low chip enable, active low write, and
    active low enable. */

module sram(data_out, data_in, addr, chipEnable, writeEnable, outputEnable);
  output reg  [7:0]   data_out;
  input wire  [7:0]   data_in;
  input wire  [10:0]  addr;
  input wire  chipEnable, writeEnable, outputEnable;

  /* 2048 X 8 RAM architecture */
  reg [7:0] mem [2047:0];

  always@(*) begin
    if (!chipEnable) begin
      if (!writeEnable) begin
        mem[addr] = data_in;
		  data_out = 8'b11111111;
      end else if (!outputEnable) begin
        data_out = mem[addr];
      end else begin
			data_out = 8'b11111111;
		end
    end else begin
		data_out = 8'b11111111;
	 end
  end

endmodule

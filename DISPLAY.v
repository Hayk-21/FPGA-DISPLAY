`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:09:09 04/23/2023 
// Design Name: 
// Module Name:    DISPLAY 
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
module DISPLAY(
    input clk,
    output reg [6:0] seg,
    output reg [3:0] an
);

always @(posedge clk) begin
    seg <= 7'b1001111;
    an <= 4'b1110;
end

endmodule


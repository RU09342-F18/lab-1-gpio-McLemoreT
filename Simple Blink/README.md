+-------------------------------------+
|                                     |
| Overview			line:   9		  |
|									  | 
| Code				line:  11         |
|									  |
+-------------------------------------+

Overview:
	The purpose of this code is to blink an LED on a regular un-timed interval. This interval is based on the amount of times it takes the MSP430G2 chip to calculate 20,000 additions on a given variable.
Code:
	The LED is connected to Port 1.0 on the test board and is set as an output. Since this is the only active element in the code, this is the only input and/or output.
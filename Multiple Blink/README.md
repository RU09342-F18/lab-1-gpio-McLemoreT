+-------------------------------------+
|                                     |
| Overview			line:   9		  |
|									  | 
| Code				line:  12         |
|									  |
+-------------------------------------+

Overview:
		The purpose of this code is to blink two LEDs on a regular un-timed interval. This interval is based on the amount of times it takes the MSP430G2 chip to calculate 20,000 
	additions on a given variable. The two LEDs are set to blink out of sync, but will every now and then blink at the same time due to the nature of how timings works.
Code:
		LED 0 is connected to Port 1.0 on the test board and is set as an output. LED 1 is connected to port 1.6. These ports are opened in the code by calling the decimal number "65"
	which in binary would be "0100 0001" (Notice how the 0th and 6th bit are both "1"). Since these is the only active element in the code, this is the only input and/or output.
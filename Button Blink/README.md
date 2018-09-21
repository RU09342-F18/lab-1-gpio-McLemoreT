+-------------------------------------+
|                                     |
| Overview			line:   10		  |
|									  | 
| Code				line:  13         |
|									  |
|									  |
+-------------------------------------+

Overview:
		The purpose of this code is to act as a light switch for an LED using only one button. The LED starts off and then can be "Switched" on using the on board button. By pushing 
	the button the LED will turn on and remain on. Pushing the button again will turn off the LED. You can repeat these steps as many times as the user wishes.
Code:
		The code starts off by defining certain Bits (Bit0, and Bit3) as more relevant names in an attempt to increase the readability of the code. The next thing the program does is
	set up it's environment. The ports are defined as either inputs or outputs and the default setting for both ports are both set. In this case, the Button is the only input, and the
	LED is the only output. The default value of the Button is "1" and the default value of the LED is "0" The next thing the code does is enter an infinite while loop that continuously
	polls the button to see if it has been pressed. On a press the value of a boolean in the code is reversed, as to keep track of whether the light is on or off. Next, depending on 
	the current state, the light may switch it's current value.
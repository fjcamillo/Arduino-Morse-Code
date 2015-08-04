Arduino Morse Code Breakout board

This breakout board is in response to the objectives of our Digital Signal Processing Subject.

The board is composed of 2 Modes
  1. Manual Mode
  2. Automatic Mode or Automated Mode

Manual Mode
  The manual mode is activated by moving the SPDT switch to the right then attach the positive pin of the source to both of the PINS where the copper is small while the larger copper line is for the ground.
  This enables the manual mode on which once the user presses the button the relay shall work and thus transmits electromagnetic signals thus enabling any AM radio receiver to hear the data sent.
  
Automatic Mode
  The automatic mode is activated by moving the SPDT switch to the left then attach the positive pin to the 5V pin of the arduino then attach the ground pin to the ground pin of the arduino. The data pin shall be added onto the digital pin label 3. Then check which Serial COM is being used by the arduino then purposely change the COM number on the python code, to enable the connection via Serial enabled. Once it is done, we can now run the python code and input our desired single character on the python shell. Making the arduino produce a specific pattern for that specific code.

__author__ = 'Jerhone Camillo'
import serial
import time

arduino = serial.Serial('COM38', 9600, timeout=.1)

while True:
    print arduino.readline()
    user = raw_input("Please type the code to be sent: ")
    x = user.lower()
    y = len(x)
    z = 0
    a = arduino.readline()

    while z != y:
        arduino.write(str(x[z]))
        print(x[z])
        z += 1





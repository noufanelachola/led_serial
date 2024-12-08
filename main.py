import serial
import time

arduino = serial.Serial("COM5",9600)
time.sleep(2)

while True:
    user_input = input("Enter 1 to turn ON the LED, 0 to turn OFF the LED: ")

    if user_input == '0' or user_input == '1':
        arduino.write(user_input.encode())
    else:
        break

arduino.close()
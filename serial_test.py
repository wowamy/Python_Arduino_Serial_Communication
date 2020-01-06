import serial

ser=serial.Serial('/dev/ttyACM0',9600)

while 1:
    val=raw_input("ENTER 1 LED_ON");
    ser.write(val)
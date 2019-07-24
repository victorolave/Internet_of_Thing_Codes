import RPi.GPIO as gpio 
import time

gpio.setmode(gpio.BOARD)

gpio.setup(24, gpio.OUT)
gpio.setup(23, gpio.IN)

gpio.output(12, True)

while True:
    input_state == GPIO.inpu(23)

    if input_state == False:
        gpio.output(24, True)
    else
        gpio.output(24, False)
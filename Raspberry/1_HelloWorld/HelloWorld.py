import RPi.GPIO as gpio 
import time

gpio.setmode(gpio.BOARD)

gpio.setup(24, gpio.OUT)
gpio.setup(23, gpio.IN, pull_up_down = gpio.PUD_UP)|

gpio.output(12, True)

while True:
    input_state == GPIO.inpu(23)

    if input_state == False:
        gpio.output(24, True)
    else
        gpio.output(24, False)

time.sleep(0.3)
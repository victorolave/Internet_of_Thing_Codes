import RPi.GPIO as gpio 
import time

gpio.setmode(gpio.BOARD)
gpio.setup(12, gpio.OUT)
gpio.output(12, True)
time.sleep(20)
gpio.output(12, False)
gpio.cleanup(12)
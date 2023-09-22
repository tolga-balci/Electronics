# ESP8266-Blink-Built-in-LED

This code is for the ultimate beginners like me who struggle to blink their LEDs on their ESP8266 devices.

First, as mentioned in the [Problem Solving with Python Forum](https://problemsolvingwithpython.com/12-MicroPython/12.04-Blinking-a-LED/), the ON value for the link is 0 and the OFF value is 1. This is what I wasn't expecting - I was expecting the ON value to be 1.

Given this, when you access the built-in PIN (this is PIN 2 on my device), setting the `machine.Pin(2, machine.Pin.OUT)` will turn the led to ON.

I am providing the 8-line code that blinks the LED with 0.5 seconds of delay, which I am able to successfully run on my board.

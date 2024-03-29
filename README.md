# arduino-vu-meter-led
Simple Arduino code to read levels from a SparkFun Sound Detector and turn on LEDs accordingly. 

SparkFun Sound Detector:
https://www.sparkfun.com/products/12642

Arduino UNO:
https://www.mcielectronics.cl/shop/product/arduino-uno-r3-arduino-10230

I used this on my 3D-printed Google Home Wurlitzer, to drive the 12 LEDS according to the music:
![alt text](https://raw.githubusercontent.com/cvasquez-github/arduino-vu-meter-led/main/cvs-wurlitzer-led.png)

| Arduino         | Connected to            |
| :-------------: | :-------------:         |
| A0              | Sound Detector Envelope |
| 5V (POWER)      | Sound Detector VCC      |
| GND (POWER)     | Sound Detector GND      |
| GND (14)        | All LEDs (-)            |
| PIN 5           | LED 1 and 7 (+) (with a 330 ohm resistor)         |
| PIN 6           | LED 2 and 8 (+) (with a 330 ohm resistor)         |
| PIN 7           | LED 3 and 9 (+) (with a 330 ohm resistor)         |
| PIN 8           | LED 4 and 10 (+) (with a 330 ohm resistor)        |
| PIN 9           | LED 5 and 11 (+) (with a 330 ohm resistor)        |
| PIN 11          | LED 6 and 12 (+) (with a 330 ohm resistor)        |


https://www.instagram.com/tv/CbPt0gJgOKf/

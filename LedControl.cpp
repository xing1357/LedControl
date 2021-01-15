#include "Arduino.h"
#include "LedControl.h"

void blinkLED(int pin, int delayTime){
 	pinMode(pin, OUTPUT);
 	digitalWrite(pin, HIGH);
 	delay(delayTime);
 	digitalWrite(pin, LOW);
 	delay(delayTime);  
}

void fadeLED(int pin, int brightness, int fadeAmount){
	pinMode(pin, OUTPUT);
	analogWrite(pin, brightness);
	brightness = brightness + fadeAmount;
	if (brightness <= 0 || brightness >= 255) {
    		fadeAmount = -fadeAmount;
 	 }
	delay(30);
}

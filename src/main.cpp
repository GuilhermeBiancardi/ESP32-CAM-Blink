#include <Arduino.h>

#define pinLed 4

void setup() {
	Serial.begin(115200);
    pinMode(pinLed, OUTPUT);
}

void loop() {
	digitalWrite(pinLed, HIGH);
	delay(1000);
	digitalWrite(pinLed, LOW);
	delay(1000);
}
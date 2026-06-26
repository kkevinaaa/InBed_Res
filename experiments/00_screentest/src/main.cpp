#include <Arduino.h>

void setup() {
	Serial.begin(115200);
	delay(2000);

	Serial.println();
	Serial.println("ESP32-C3 serial test start");
}

void loop() {
	Serial.print("running, millis = ");
	Serial.println(millis());
	delay(1000);
}
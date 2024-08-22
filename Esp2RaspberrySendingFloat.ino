/*
 Name:		Esp2RaspberrySendingFloat.ino
 Created:	6/27/2023 3:51:45 PM
 Author:	Imami Joel Betofe
*/

#include <HardwareSerial.h>


HardwareSerial espSerial(1);
float s;

void setup() {
	// Initialize the serial port at 115200 baud
	Serial.begin(115200);
	// Initialize the software serial port at 9600 baud
	espSerial.begin(9600, SERIAL_8N1, 21, 22);
	s = 20.9;
}

void loop() {
	// Send the float value to the Raspberry Pi
	espSerial.write((byte*)&s, sizeof(s));
	delay(1000);
}



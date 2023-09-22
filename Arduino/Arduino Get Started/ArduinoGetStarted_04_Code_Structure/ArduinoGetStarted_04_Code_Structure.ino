#include <Arduino.h> 

void setup() {
Serial.begin(9600);
Serial.println("This is setup code");
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("This is loop code");
delay(1000);
}

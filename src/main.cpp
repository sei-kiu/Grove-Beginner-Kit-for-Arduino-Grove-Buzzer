#include <Arduino.h>

int BuzzerPin = 5;
 
void setup() {
  pinMode(BuzzerPin, OUTPUT);
}
 
void loop() {
  analogWrite(BuzzerPin, 128);
  delay(500);
  analogWrite(BuzzerPin, 0);
  delay(500);
}

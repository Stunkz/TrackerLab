#include <Arduino.h>

int myFunction(int, int);

void setup() {
  Serial.begin(115200);
  Serial.println("Hello, World!");
}

void loop() {
  Serial.println("Hello, World!");
  delay(100);
}
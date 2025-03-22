#include <Arduino.h>

int flashPin = 4;

void setup()
{
  Serial.begin(115200);
  pinMode(flashPin, OUTPUT);
}

void loop()
{
  digitalWrite(flashPin, HIGH);
  Serial.println("HIGH");
  delay(1000);
  digitalWrite(flashPin, LOW);
  Serial.println("LOW");
  delay(1000);
}
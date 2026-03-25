#include<Ticker.h>

Ticker timer;

const int ledPin = 2;

void toggleLED(){
  digitalWrite(ledPin, !digitalRead(ledPin));
}

void setup() {
  pinMode(ledPin, OUTPUT);

  timer.attach(1, toggleLED);

}

void loop() {
  // put your main code here, to run repeatedly:

}

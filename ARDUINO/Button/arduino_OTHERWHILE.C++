Otherwhile


      




int ledPins[] = {2, 3, 4, 5, 6, 7};
int numLeds = sizeof(ledPins) / sizeof(ledPins[0]);
int delayTime = 1000;

void setup() {
  for (int i = 0; i < numLeds; i++) {pinMode(ledPins[i], OUTPUT);}
}

void loop() {
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH); delay(delayTime);
    digitalWrite(ledPins[i], LOW);
  }

  for (int i = numLeds - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH); delay(delayTime);
    digitalWrite(ledPins[i], LOW);
  }
}

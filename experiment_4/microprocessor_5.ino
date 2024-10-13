const int led = 8;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    char inputLed = Serial.read();
    if (inputLed == 'h' || inputLed == 'H') {
      digitalWrite(led, HIGH);
    } else if (inputLed == 'l' || inputLed == 'L') {
      digitalWrite(led, LOW);
    }
  }
}
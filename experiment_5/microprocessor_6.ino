const int led = 8;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    String inputLed = Serial.readString();
    if (inputLed == 'on') {
      digitalWrite(led, HIGH);
    } else if (inputLed == 'off') {
      digitalWrite(led, LOW);
    }
  }
}
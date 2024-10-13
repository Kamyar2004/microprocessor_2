#include <math.h>
const int numPoints = 360;
const float amplitude = 100;
const float offset = 512;

void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < numPoints; i++) {
    float radians = i * (PI / 180);
    float sineValue = amplitude * sin(radians) + offset;
    float cosValue = amplitude * cos(radians) + offset;
    Serial.print(sineValue);
    Serial.print(",");
    Serial.println(cosValue);
    delay(10);
    }
}
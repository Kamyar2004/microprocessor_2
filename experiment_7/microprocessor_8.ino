float num1;
float num2;
char operator;
float result;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    num1 = Serial.parseFloat();
    operator = Serial.read();
    num2 = Serial.parseFloat();

  switch(operator) {
    case '+' : result = num1 + num2;
    break;
    case '-' : result = num1 - num2;
    break;
    case '*' : result = num1 * num2;
    break;
    case '/' :
    if (num2 != 0) {
     result = num1 / num2;
    }
    break;
  }
  
   Serial.print(result);
  }
}

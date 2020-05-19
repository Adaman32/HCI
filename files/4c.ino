int greenLedPin = 9; 
int redLedPin = 10;
void setup() {
  pinMode(greenLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
}

void loop() {
  for (int brightness=0; brightness <256; brightness++)
  { 
    analogWrite(greenLedPin, brightness);
    analogWrite(redLedPin, 255 - brightness);
    delay(10);
  }
  for (int brightness=0; brightness <256; brightness++)
  { 
    analogWrite(greenLedPin, 255 - brightness);
    analogWrite(redLedPin, brightness);
    delay(10);
  }
}

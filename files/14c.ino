#include <Servo.h>

Servo myServo;
int servoPin = 9;
int pos = 0;
int sensorPin = A0;


void setup() {
  Serial.begin(9600);
  myServo.attach(servoPin);
  pinMode(sensorPin, INPUT);
}

void loop() {
    pos = analogRead(sensorPin);
    pos = map(pos, 0, 1023, 0, 160);
    
    myServo.write(pos);
    delay(30);
}

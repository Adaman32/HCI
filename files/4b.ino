#include <Servo.h>
int valSpeaker;
int valServo;  // Data received from the serial port 
Servo myServo;
int servoPin = 9;
int speakerPin = 8;

void setup() {
myServo.attach(servoPin);
pinMode(speakerPin, OUTPUT);
Serial.begin(115200); // Start serial communication at 9600 bps
}

void loop() {
  while (Serial.available()) 
  { // If data is available to read,
    valSpeaker = Serial.read();
    valServo = valSpeaker;
    valServo = map(valServo, 0 ,510, 0, 160);
    valServo = constrain(valServo, 0, 160);
    myServo.write(valServo);
    delay(15);
    valSpeaker = map(valSpeaker,0,510, 262, 523);
    valSpeaker = constrain(valSpeaker, 262,523);
    tone(speakerPin, valSpeaker, 200);

  }
}

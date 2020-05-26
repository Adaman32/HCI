int speakerPin = 8;
void setup() {
  pinMode(speakerPin, OUTPUT);
}
void loop() {
  tone(speakerPin, 523, 200);
  delay(200);
  tone(speakerPin, 493, 200);
  delay(250);
  tone(speakerPin, 466, 700);
  delay(800);
  tone(speakerPin, 493, 200);
  delay(250);
  tone(speakerPin, 466, 200);
  delay(250);
  tone(speakerPin, 440, 700);
  delay(800);
  tone(speakerPin, 466, 200);
  delay(250);
  tone(speakerPin, 440, 200);
  delay(250);
  tone(speakerPin, 415, 700);
  delay(800);
  tone(speakerPin, 392, 100);
  delay(250);
  tone(speakerPin, 415, 100);
  delay(250);
}

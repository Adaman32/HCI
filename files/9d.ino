int speakerPin = 8;
float sensorValue = 0; // variable for sensor value 
int sensorPin = A0; // variable for sensor pin
bool change = false;
void setup() {
   pinMode(sensorPin, INPUT); 
  Serial.begin(9600);
  pinMode(speakerPin, OUTPUT);
}
void loop() {
  sensorValue = analogRead(sensorPin); 
  sensorValue = map(sensorValue, 300, 830, 200, 1800);
  tone(speakerPin, sensorValue, 100);
}

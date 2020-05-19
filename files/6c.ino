float sensorValue = 0; // variable for sensor value 
int sensorPin = A0; // variable for sensor pin
int greenLedPin = 10; 
int redLedPin = 9;

void setup() { 
  pinMode(sensorPin, INPUT); 
  pinMode(greenLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  sensorValue = analogRead(sensorPin); // read the value/voltage on the sensor pin and // store that value in the variable sensorValue
  sensorValue = map(sensorValue, 0, 1023, 0, 255);
  Serial.println(sensorValue); // print out sensorValue to the Serial Monitor
  analogWrite(greenLedPin, sensorValue);
  analogWrite(redLedPin, 255 - sensorValue);
  delay(20); // delay for 0.2 seconds 
}

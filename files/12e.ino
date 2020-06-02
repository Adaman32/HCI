float sensorValue = 0; 
int sensorPin = A0; 
int greenLedPin = 9;
int yellowLedPin = 10;

void setup() { 
  Serial.begin(9600);
  pinMode(sensorPin, INPUT); 
  pinMode(greenLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
}

void loop() {
sensorValue = analogRead(sensorPin); // Read the value/current on the sensor pin and
sensorValue = (sensorValue/1023)*255; // Rescale the sensor's value.

analogWrite(greenLedPin, sensorValue);// Send power to LED 
Serial.println(sensorValue); // Print the sensorValue to the serial
delay(100); // Wait 0.1 seconds
}

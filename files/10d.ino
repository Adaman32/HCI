int ledPin = 13; 
int sensorPin = A0;
void setup() { 
  pinMode(ledPin, OUTPUT); 
  pinMode(sensorPin, INPUT); 
  Serial.begin(9600);

}
// temp: 491, 509
void loop() {
int sensorValue = analogRead(sensorPin); // read sensorpin 
Serial.println(sensorValue); // print to serial monitor
delay(10); // wait 

if(sensorValue > 500){
  analogWrite(ledPin, 255);
}
else analogWrite(ledPin, 0);

}

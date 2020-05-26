
int greenLedPin = 9;
int yellowLedPin = 10;
int redLedPin = 11;
const int echoPin = 6; 
const int trigPin = 7;
void setup() {
 pinMode(echoPin, INPUT);
 pinMode(trigPin, OUTPUT);
 pinMode(greenLedPin, OUTPUT);
 pinMode(yellowLedPin, OUTPUT);
 pinMode(redLedPin, OUTPUT);
Serial.begin(9600); 
}
void loop() {
  // send a pulse 
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(5); 
  digitalWrite(trigPin, LOW);

  // wait for the echo
  long duration = pulseIn(echoPin, HIGH);
  
// convert the time into a distance, the speed of sound is 29 microseconds per centimeter,
//the pulse traveled forth and back, so we divided the distance by 2
int cm = duration / 29 / 2;
Serial.print(cm); Serial.println("cm");
delay(100);

//if the measured distance is lower than 50 cm, turn on LED 
if(cm>160){
 digitalWrite(greenLedPin, HIGH);
 digitalWrite(yellowLedPin, LOW);
 digitalWrite(redLedPin, LOW);
}
//else turn off LED 
else if(cm<160 && cm>140){
  digitalWrite(greenLedPin, LOW);
 digitalWrite(yellowLedPin, HIGH);
 digitalWrite(redLedPin, LOW);
}
else if(cm<140){
  digitalWrite(greenLedPin, LOW);
 digitalWrite(yellowLedPin, LOW);
 digitalWrite(redLedPin, HIGH);
}
}

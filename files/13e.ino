
int ledPin = 13; 
int buttonPinL = 2; 
int buttonPinR = 3;
void setup() { 
  pinMode(ledPin, OUTPUT); 
  pinMode(buttonPinL, INPUT); 
  pinMode(buttonPinR, INPUT);
}

void loop(){
  if((digitalRead(buttonPinL) == HIGH && digitalRead(buttonPinR) == LOW) 
  ||  (digitalRead(buttonPinL) == LOW && digitalRead(buttonPinR) == HIGH))
  {
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(ledPin, LOW);
  }
}

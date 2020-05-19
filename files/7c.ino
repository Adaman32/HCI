#include "LedControl.h"
/*
DIN connects to pin 12 CLK connects to pin 11 CS connects to pin 10
*/
LedControl lc = LedControl(12,11,10,1); // create a new LedControl object
void setup() {
  lc.shutdown(0,false);// Turn matrix on, no power saving 
  lc.setIntensity(0,8); // Set brightness to a medium value 
  lc.clearDisplay(0); // Clear the display
  Serial.begin(9600);
}
void loop(){ 
 int sensorValue = analogRead(A0); // read sensor, 0-1023 
  Serial.println(sensorValue);
  sensorValue = map(sensorValue, 0, 1000, 0, 7); // remap the value 0-7. (1000 eliminates noise)
  if(sensorValue <4){
    lc.clearDisplay(0); // Clear the display 
  }
  lc.setLed(0, sensorValue,sensorValue, 1);
  lc.setLed(0, 7-sensorValue,sensorValue, 1);
  lc.setLed(0, 7-sensorValue, 7-sensorValue, 1);
  lc.setLed(0, sensorValue, 7-sensorValue, 1);
  delay(20);
}

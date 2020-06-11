import processing.serial.*;
Serial myPort; 
int valueSend;

void setup()
{
  size(255, 255);
  String portName = Serial.list()[1]; 
  myPort = new Serial(this, portName, 115200); 
}

void draw() {
  background(255);
  fill(mouseX, mouseY, 128);
  ellipse(mouseX,mouseY, 100,100);
  valueSend = mouseY + mouseX;
  println(valueSend);
  myPort.write(valueSend);
}

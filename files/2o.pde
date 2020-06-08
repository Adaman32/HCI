  float colorRed;
  float colorBlue;

void setup(){
  size(400,400);
  frameRate(15);
    background(200,200,200);
}

void draw(){
    background(200,200,200);
  colorRed = mouseX;
  colorBlue = mouseY;
  map(colorRed, 0, 400, 0, 255);
  constrain(colorRed, 0, 255);
  map(colorBlue, 0, 400, 0, 255);
  constrain(colorBlue, 0, 255);
  
  fill(colorRed, 0, colorBlue);
  stroke(0,0,0);
  ellipse(150, 150, 100, 100);
  
  fill(128, 255, 120);
  noStroke();
  triangle(mouseX, mouseY, 100, 300, 250, 250);
}

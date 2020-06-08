import gab.opencv.*;
import java.awt.Rectangle;


PImage img;
OpenCV opencv;
Rectangle[] faces;

void setup() {
  opencv = new OpenCV(this, "test.jpg");
  img = loadImage("monocle.png");
  size(1080, 720);

  opencv.loadCascade(OpenCV.CASCADE_EYE);  
  faces = opencv.detect();
}

void draw() {
  image(opencv.getInput(), 0, 0);

  noFill();
  stroke(0, 0, 0);
  strokeWeight(10);
  for (int i = 0; i < faces.length; i++) {
    image(img, faces[i].x - img.width/5, faces[i].y,  width/4, height/4);
  }
}

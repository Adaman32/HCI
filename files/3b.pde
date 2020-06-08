import gab.opencv.*;
import java.awt.Rectangle;

OpenCV opencv;
Rectangle[] faces;

void setup() {
  opencv = new OpenCV(this, "test.jpg");
  size(1080, 720);

  opencv.loadCascade(OpenCV.CASCADE_FRONTALFACE);  
  faces = opencv.detect();
}

void draw() {
  image(opencv.getInput(), 0, 0);

  fill(0,0,0);
  stroke(0, 0, 0);
  strokeWeight(10);
  for (int i = 0; i < faces.length; i++) {
    rect(faces[i].x, faces[i].y + faces[i].height/3, faces[i].width, 40);
  }
}

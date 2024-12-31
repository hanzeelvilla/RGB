#include <Rgb.h>

#define RED_PIN 25
#define GREEN_PIN 26
#define BLUE_PIN 27

RGB myRgb(RED_PIN, GREEN_PIN, BLUE_PIN);

void setup() {
  Serial.begin(115200);
  myRgb.init();
}

void loop() {
  myRgb.setColor(red);
  delay(1000);
  myRgb.setColor(green);
  delay(1000);
  myRgb.setColor(blue);
  delay(1000);
  myRgb.setColor(cyan);
  delay(1000);
  myRgb.setColor(yellow);
  delay(1000);
  myRgb.setColor(orange);
  delay(1000);
  myRgb.setColor(pink);
  delay(1000);
  myRgb.setColor(purple);
  delay(1000);
  myRgb.setColor(white);
  delay(1000);
  myRgb.setColor(off);
  delay(1000);
}

#include <Arduino.h>
#include <librgb.h>

#define RED_PIN 2
#define GREEN_PIN 22
#define BLUE_PIN 23

RGB rgb = RGB(RED_PIN, GREEN_PIN, BLUE_PIN);

void setup() {

}

void loop() {
  rgb.red();
  delay(1000);
  rgb.green();
  delay(1000);
  rgb.blue();
  delay(1000);
}

#include <wire.h>
#include <arduino.h>
#include "RGBsensor.h"
#include "Adafruit_TCS34725.h"

byte gammatable[256];
Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);

RGBsensor::RGBsetup() {
  Serial.begin(9600);
  Serial.println("Color View Test!");

  if (tcs.begin()) {
    Serial.println("Found sensor");
  } else {
    Serial.println("No TCS34725 found ... check your connections");
    while (1); // halt!
  }
}

int RGBsensor::getColour() {
  float red, green, blue;

  delay(60);  // takes 50ms to read

  tcs.getRGB(&red, &green, &blue); //gets colour value
  if (int(red) >= 150) { // if red value is equal to or above 150 return 1
    serial.print("\n")
    return 1;
  }
  else if (int(green) >= 115) { //if green value is equal to or above 115 return 2
    serial.print("\n")
    return 2;
  }
  else if (int(blue) >= 120) { //if blue value is equal to or above 120 return 3
    serial.print("\n")
    return 3;
  }
}

void RGBsensor::RGBconvert() {
   for (int i=0; i<256; i++) {
    float x = i;
    x /= 255;
    x = pow(x, 2.5);
    x *= 255;

    gammatable[i] = 255 - x;
}
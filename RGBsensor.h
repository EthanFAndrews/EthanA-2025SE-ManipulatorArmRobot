#ifndef RGBsensor_h
#define RGBsensor_h

#include <Wire.h>
#include "Adafruit_TCS34725.h"
#include <arduino.h>


class RGBsensor {
  private:
    byte _pin;
    byte _colour;
  public:
    RGBsensor() {}
    void RGBsetup;
    void RGBconvert;
    int getColour;
}

#endif
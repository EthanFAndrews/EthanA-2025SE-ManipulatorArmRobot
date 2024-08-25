
#include <Servo.h>
#include <Arduino.h>
#include "Servo_Arm.h"
#include "RGBsensor.h"

#define SERVO_ELBOW_PIN 10;
#define SERVO_WRIST_PIN 11;
#define SERVO_HAND_PIN 6;
#define SERVO_ROTATORJOINT_PIN 9;


RGBsensor rgbsensor;
Arm mecharm;

void setup () 
{
  rgbsensor.RGBconvert; //prepare RGB sensor by converting values into numbers used by get colour
}

void loop () 
{  
  mecharm.grab(); // begin basic grab sequence

  int sensedColour = rgbsensor.getColour();
  
  if (sensedColour == 1) {
    mecharm.red_grab(); // if the value is red init red grab sequence
  }
  else if (sensedColour == 2) { 
    mecharm.green_grab(); // if the value is green init green grab sequence
  }
  else if (sensedColour == 3) {
    mecharm.blue_grab(); // if the value is blue init blue grab sequence
  }
}


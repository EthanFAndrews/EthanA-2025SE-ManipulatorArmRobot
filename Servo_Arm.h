
#ifndef Servo_Arm_h
#define Servo_Arm_h

#include "Arduino.h"
#include <Servo.h>



#define SERVO_ELBOW_PIN 10
#define SERVO_WRIST_PIN 11
#define SERVO_HAND_PIN 6
#define SERVO_ROTATORJOINT_PIN 9

class Arm {
  private:
    Servo Elbow;
    Servo Wrist;
    Servo Hand;
    Servo RotatorJoint;
  public: 
    void grab();
    void green_grab();
    void blue_grab();
    void red_grab();
};


#endif


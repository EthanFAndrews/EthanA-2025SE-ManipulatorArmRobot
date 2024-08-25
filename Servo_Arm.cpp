#include "Servo_Arm.h"
#include "RGBsensor.h"

RGBsensor rgbsensor;

void Arm::grab() {

  Wrist.attach(SERVO_WRIST_PIN);
  Hand.attach(SERVO_HAND_PIN);
  Elbow.attach(SERVO_ELBOW_PIN);
  RotatorJoint.attach(SERVO_ROTATORJOINT_PIN);  

  rgbsensor.RGBsetup(); // Set up RGB sensor

  Elbow.write(160);
  delay (1000);  
  Hand.write (80);
  delay (1000);
  Wrist.write(20);
  delay (1000);
  rgbsensor.getColour // get the colour of the block
  delay(1000);
  Hand.write(120);
  delay(1000);
  Elbow.write(90);
  delay (1000);
  Wrist.write(90);
  delay (2000); // Grab the block and hold in base position

};

void Arm::red_grab() {
  RotatorJoint.write(0);
  delay(1000);
  Elbow.write(160);
  delay (1000);
  Wrist.write(20);
  delay(1000);
  Hand.write(80);
  delay (1000);
  Elbow.write(90);
  delay(1000);
  Wrist.write(90);
  delay(1000); // move block to red area
}

void Arm::green_grab() {
  RotatorJoint.write(180);
  delay(1000);
  Elbow.write(160);
  delay (1000);
  Wrist.write(20);
  delay(1000);
  Hand.write(80);
  delay (1000);
  Elbow.write(90);
  delay(1000);
  Wrist.write(90);
  delay(1000); // move block to green area
}

void Arm::blue_grab() {
  RotatorJoint.write(90);
  delay(1000);
  Elbow.write(20);
  delay (1000);
  Wrist.write(20);
  delay(1000);
  Hand.write(80);
  delay (1000);
  Elbow.write(90);
  delay(1000);
  Wrist.write(90);
  delay(1000); // move block to blue area
}

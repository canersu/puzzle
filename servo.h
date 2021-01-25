#ifndef _SERVO_H_
#define _SERVO_H_

#include<Arduino.h>
#include <Servo.h>

class MoveServo{
  private:
    byte _pin;
    int _pos;
    int _target;
    Servo _servo;
  public:
    MoveServo(byte,int);
    void setUpServo();
    void moveUp();
    void moveDown();
};

#endif

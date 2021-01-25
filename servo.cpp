#include"servo.h"


MoveServo::MoveServo(byte pin, int target)
{
  _target = target;
  _pin = pin;
}


void MoveServo::moveUp()
{
  for (_pos = 0; _pos <= _target; _pos += 1) { // goes from 0 degrees to _target degrees
    _servo.write(_pos);              // tell servo to go to position in variable '_pos'
    delay(5);                     // waits 5ms for the servo to reach the position
  }
}


void MoveServo::moveDown()
{
  for (_pos = _target; _pos >= 0; _pos -= 1) { // goes from _target degrees to 0 degrees
    _servo.write(_pos);              // tell servo to go to position in variable '_pos'
    delay(5);                       // waits 5ms for the servo to reach the position
  }
}


void MoveServo::setUpServo()
{
  Serial.begin(9600);
  _servo.attach(_pin);
}

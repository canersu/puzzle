#include<Arduino.h>
#include"buttons.h"

Buttons::Buttons(int buttons[])
{
  _buttons[5] = buttons[5];
  for(byte i=0; i<5; i++)
  {
    pinMode(_buttons[0], INPUT_PULLUP);
    pinMode(_buttons[1], INPUT_PULLUP);
    pinMode(_buttons[2], INPUT_PULLUP);
    pinMode(_buttons[3], INPUT_PULLUP);
    pinMode(_buttons[4], INPUT_PULLUP);
  }
}
bool Buttons::isPressed(byte _idx)
{
  return !digitalRead(_buttons[_idx]);
} 

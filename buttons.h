#ifndef _BUTTONS_H_
#define _BUTTONS_H_

#define btn0 1
#define btn1 1
#define btn2 1
#define btn3 1
#define btn4 1

class Buttons {
private:
  int _buttons[5];
  byte _idx;
public: 
  Buttons(int[]);
  bool isPressed(byte);
};
#endif _BUTTONS_H_

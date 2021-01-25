#ifndef _LEDS_H_
#define _LEDS_H_
#include<Arduino.h>

class Leds {
private:
  byte _idx;
public: 
  Leds(int[]);
  void lightUp(int[],int[]);
};
#endif

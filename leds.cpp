#include"leds.h"

Leds::Leds(int leds[5])
{
  for(_idx=0; _idx<5; _idx++)
  {
    pinMode(leds[_idx], 1);
  }
}


void Leds::lightUp(int leds[5], int lights[5])
{
  for(_idx=0; _idx<5; _idx++)
  {
    if(lights[_idx] == 0)
    {
      digitalWrite(leds[_idx], LOW);
      Serial.println("leds_off");
    }

    else
    {
      digitalWrite(leds[_idx], HIGH);
      Serial.println("leds_on");
    }
  }
  Serial.print("l0: ");
  Serial.print(lights[0]);
  Serial.print(" l1: ");
  Serial.print(lights[1]);
  Serial.print(" l2: ");
  Serial.print(lights[2]);
  Serial.print(" l3: ");
  Serial.print(lights[3]);
  Serial.print(" l4: ");
  Serial.print(lights[4]);
  Serial.println();
}

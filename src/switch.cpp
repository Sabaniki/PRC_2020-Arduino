#include<Arduino.h>
#include"switch.h"
#include"pin.h"

int SWtoFL(){
  int flag = -1;

  if(digitalRead(pin_SW0) == LOW){
    flag = 0;
  }else if(digitalRead(pin_SW1) == LOW){
    flag = 1;
  }else if(digitalRead(pin_SW2) == LOW){
    flag = 2;
  }else if(digitalRead(pin_SW3) == LOW){
    flag = 3;
  }else if(digitalRead(pin_SW4) == LOW){
    flag = 4;
  }else if(digitalRead(pin_SW5) == LOW){
    flag = 5;
  }else if(digitalRead(pin_SW6) == LOW){
    flag = 6;
  }

  return flag;
}

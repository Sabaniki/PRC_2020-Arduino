#include"sensor.h"
#include"pin.h"
#include<Arduino.h>


//この関数要らない気が滅茶苦茶する。何で作ったんだろう。
void ValueUpdate(int *SenL3,int *SenL2,int *SenL1,int *SenR1,int *SenR2,int *SenR3){
  *SenR3 = digitalRead(pin_SensorR3);
  *SenR2 = digitalRead(pin_SensorR2);
  *SenR1 = digitalRead(pin_SensorR1);
  *SenL1 = digitalRead(pin_SensorL1);
  *SenL2 = digitalRead(pin_SensorL2);
  *SenL3 = digitalRead(pin_SensorL3);
}

//
bool isBlack(int pin){
  if(digitalRead(pin) == 1){
    return true;
  }
  return false;
}

int someBlack(){
  int sum = 0;

  if(isBlack(pin_SensorL4) == true){
    sum++;
  }
  if(isBlack(pin_SensorL3) == true){
    sum++;
  }
  if(isBlack(pin_SensorL2) == true){
    sum++;
  }
  if(isBlack(pin_SensorL1) == true){
    sum++;
  }
  if(isBlack(pin_SensorC) == true){
    sum++;
  }
  if(isBlack(pin_SensorR1) == true){
    sum++;
  }
  if(isBlack(pin_SensorR2) == true){
    sum++;
  }
  if(isBlack(pin_SensorR3) == true){
    sum++;
  }
  if(isBlack(pin_SensorR4) == true){
    sum++;
  }

  return sum;
}

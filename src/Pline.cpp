#include<Arduino.h>
#include"Pline.h"
#include"pin.h"
#include"motor.h"
#include"sensor.h"

void GO(int way){
  if (way == r) {
    MOVE(75,-50);
  }else if(way == l){
    MOVE(-50,75);
  }else if(way == f){
    MOVE(75,75);
  }else if(way == s){
    MOVE(0,0);
  }
}

void Pline(){
  if(isBlack(pin_SensorR4)){
    GO(r);
  }else if(isBlack(pin_SensorL4)){
    GO(l);
  }else if(isBlack(pin_SensorR3)){
    GO(r);
  }else if(isBlack(pin_SensorL3)){
    GO(l);
  }else if(isBlack(pin_SensorR2)){
    GO(r);
  }else if(isBlack(pin_SensorL2)){
    GO(l);
  }else if(isBlack(pin_SensorR1)){
    GO(r);
  }else if(isBlack(pin_SensorL1)){
    GO(l);
  }else if(isBlack(pin_SensorC)){
    GO(f);
  }
}

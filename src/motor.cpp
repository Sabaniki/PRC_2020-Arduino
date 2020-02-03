#include"motor.h"
#include"pin.h"
#include<Arduino.h>

void MOVE(int MspL,int MspR){

  bool isMinL = false;
  bool isMinR = false;

  if(MspR == 0 && MspL == 0){
    analogWrite(pin_motorR1,LOW);
    analogWrite(pin_motorR2,LOW);
    analogWrite(pin_motorL1,LOW);
    analogWrite(pin_motorL2,LOW);
  }
  if(MspL < 0){
    MspL *= -1;
    isMinL = true;
  }
  if(MspR < 0){
    MspR *= -1;
    isMinR = true;
  }

  if(isMinL == false){
    analogWrite(pin_motorL1,MspL);
    analogWrite(pin_motorL2,LOW);
  }
  if(isMinR == false){
    analogWrite(pin_motorR1,MspR);
    analogWrite(pin_motorR2,LOW);
  }
  if(isMinL == true){
    analogWrite(pin_motorL1,LOW);
    analogWrite(pin_motorL2,MspL);
  }
  if(isMinR == true){
    analogWrite(pin_motorR1,LOW);
    analogWrite(pin_motorR2,MspR);
  }
}

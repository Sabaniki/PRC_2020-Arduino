#include <Arduino.h>
#include"pin.h"
#include"motor.h"
#include"sensor.h"
#include"Pline.h"
#include"event.h"
#include"str.h"
#include"pid.h"
#include"flag.h"
#include"switch.h"

#define kp 10
#define ki 0
#define kd 0

#define MotorSpeed 150

int flag = 0;

void setup(){
  Serial.begin(9600);
  pinsetup();
  FlagLight(0);
  while(digitalRead(pin_SW0) == HIGH){delay(1);}
  // while(SWtoFL() == -1){delay(1);}
  // flag = SWtoFL();
}

void loop(){
  //flagの更新とflagごとのイベント
  flag = FlagEvent(flag);

  //flagの値によって光らせるLEDを変える
  FlagLight(flag);

  //ON/OFFライントレース
  Pline();
}

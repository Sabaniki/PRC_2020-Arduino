#include"flag.h"
#include"Pline.h"
#include"event.h"
#include"motor.h"
#include"sensor.h"
#include"pin.h"
#include<Arduino.h>
#include"str.h"

int FlagEvent(int flag){
  if((someBlack() >= 6) && (flag == 0)){//スタート地点通過
    delay(1000);
    return 1;
  }
  if((someBlack() >= 6) && (flag == 1)){//A地点
    event1();
    struct motion order;
    String str;
    int L,R;
    if(!Serial){
      Serial.begin(9600);
    }
    while(1){
      //通信
      if(Serial.available() > 0){
        str = Serial.readStringUntil('\n');
        order = getfromstr(str);

        MOVE(order.l,order.r);

        if(order.act == 'E'){
          break;
        }

      }
    }
    delay(1000);
    return 2;
  }

  if((someBlack() >= 6) && (flag == 2)){//B地点
    event2();
    delay(1000);
    return 3;
  }

  if((someBlack() >= 4) && (isBlack(pin_SensorL4) == true) && (isBlack(pin_SensorR4) == false) && (flag == 3)){//C地点
    GO(s);
    delay(10);
    GO(f);
    delay(500);
    MOVE(-255,255);
    while(someBlack() <= 0){}
    delay(1000);
    return 4;
  }

  if((someBlack() >= 6) && (flag == 4)){//T字路
    event3();
    delay(1000);
    return 5;
  }

  if((someBlack() >= 6) && (flag == 5)){//C'地点
    GO(s);
    delay(10);
    GO(f);
    delay(500);
    MOVE(-255,255);
    while(someBlack() <= 0){}
  }

  if((someBlack() >= 6) && (flag = 5)){//A'地点
    event4();
    delay(1000);
    return 6;
  }

  return flag;
}

void FlagLight(int flag){
  switch(flag){
    case 0:
      digitalWrite(pin_LED_SW0,HIGH);
      digitalWrite(pin_LED_SW1,LOW);
      digitalWrite(pin_LED_SW2,LOW);
      digitalWrite(pin_LED_SW3,LOW);
      digitalWrite(pin_LED_SW4,LOW);
      digitalWrite(pin_LED_SW5,LOW);
      digitalWrite(pin_LED_SW6,LOW);
      break;
    case 1:
      digitalWrite(pin_LED_SW0,LOW);
      digitalWrite(pin_LED_SW1,HIGH);
      digitalWrite(pin_LED_SW2,LOW);
      digitalWrite(pin_LED_SW3,LOW);
      digitalWrite(pin_LED_SW4,LOW);
      digitalWrite(pin_LED_SW5,LOW);
      digitalWrite(pin_LED_SW6,LOW);
      break;
    case 2:
      digitalWrite(pin_LED_SW0,LOW);
      digitalWrite(pin_LED_SW1,LOW);
      digitalWrite(pin_LED_SW2,HIGH);
      digitalWrite(pin_LED_SW3,LOW);
      digitalWrite(pin_LED_SW4,LOW);
      digitalWrite(pin_LED_SW5,LOW);
      digitalWrite(pin_LED_SW6,LOW);
      break;
    case 3:
      digitalWrite(pin_LED_SW0,LOW);
      digitalWrite(pin_LED_SW1,LOW);
      digitalWrite(pin_LED_SW2,LOW);
      digitalWrite(pin_LED_SW3,HIGH);
      digitalWrite(pin_LED_SW4,LOW);
      digitalWrite(pin_LED_SW5,LOW);
      digitalWrite(pin_LED_SW6,LOW);
      break;
    case 4:
      digitalWrite(pin_LED_SW0,LOW);
      digitalWrite(pin_LED_SW1,LOW);
      digitalWrite(pin_LED_SW2,LOW);
      digitalWrite(pin_LED_SW3,LOW);
      digitalWrite(pin_LED_SW4,HIGH);
      digitalWrite(pin_LED_SW5,LOW);
      digitalWrite(pin_LED_SW6,LOW);
      break;
    case 5:
      digitalWrite(pin_LED_SW0,LOW);
      digitalWrite(pin_LED_SW1,LOW);
      digitalWrite(pin_LED_SW2,LOW);
      digitalWrite(pin_LED_SW3,LOW);
      digitalWrite(pin_LED_SW4,LOW);
      digitalWrite(pin_LED_SW5,HIGH);
      digitalWrite(pin_LED_SW6,LOW);
      break;
    case 6:
      digitalWrite(pin_LED_SW0,LOW);
      digitalWrite(pin_LED_SW1,LOW);
      digitalWrite(pin_LED_SW2,LOW);
      digitalWrite(pin_LED_SW3,LOW);
      digitalWrite(pin_LED_SW4,LOW);
      digitalWrite(pin_LED_SW5,LOW);
      digitalWrite(pin_LED_SW6,HIGH);
      break;
  }
}

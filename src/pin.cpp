#include<Arduino.h>
#include"pin.h"

void pinsetup(){
  pinMode(pin_motorR1,OUTPUT);
  pinMode(pin_motorR2,OUTPUT);
  pinMode(pin_motorL1,OUTPUT);
  pinMode(pin_motorL2,OUTPUT);

  pinMode(pin_LED_SW0,OUTPUT);
  pinMode(pin_LED_SW1,OUTPUT);
  pinMode(pin_LED_SW2,OUTPUT);
  pinMode(pin_LED_SW3,OUTPUT);
  pinMode(pin_LED_SW4,OUTPUT);
  pinMode(pin_LED_SW5,OUTPUT);
  pinMode(pin_LED_SW6,OUTPUT);

  pinMode(pin_SW0,INPUT_PULLUP);
  pinMode(pin_SW0,INPUT_PULLUP);
  pinMode(pin_SW0,INPUT_PULLUP);
  pinMode(pin_SW0,INPUT_PULLUP);
  pinMode(pin_SW0,INPUT_PULLUP);
  pinMode(pin_SW0,INPUT_PULLUP);
  pinMode(pin_SW0,INPUT_PULLUP);

  pinMode(pin_SensorL4,INPUT);
  pinMode(pin_SensorL3,INPUT);
  pinMode(pin_SensorL2,INPUT);
  pinMode(pin_SensorL1,INPUT);
  pinMode(pin_SensorC,INPUT);
  pinMode(pin_SensorR1,INPUT);
  pinMode(pin_SensorR2,INPUT);
  pinMode(pin_SensorR3,INPUT);
  pinMode(pin_SensorR4,INPUT);

}

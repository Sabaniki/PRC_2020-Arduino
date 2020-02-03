#ifndef pinH
#define pinH
#include <Arduino.h>

const int pin_SensorR4 = A4;
const int pin_SensorR3 = A5;
const int pin_SensorR2 = A6;
const int pin_SensorR1 = A7;
const int pin_SensorC = A8;
const int pin_SensorL1 = A0;
const int pin_SensorL2 = A1;
const int pin_SensorL3 = A2;
const int pin_SensorL4 = A3;

const int pin_motorR2 = 10;
const int pin_motorR1 = 11;
const int pin_motorL2 = 12;
const int pin_motorL1 = 13;

//LED
//19(Reset pin)
const int pin_LED_SW0 = 26;
const int pin_LED_SW1 = 30;
const int pin_LED_SW2 = 34;
const int pin_LED_SW3 = 38;
const int pin_LED_SW4 = 42;
const int pin_LED_SW5 = 47;
const int pin_LED_SW6 = 50;

//Switch
//18(Reset pin)
const int pin_SW0 = 28;
const int pin_SW1 = 32;
const int pin_SW2 = 36;
const int pin_SW3 = 40;
const int pin_SW4 = 44;
const int pin_SW5 = 49;
const int pin_SW6 = 52;

//pinMode用関数
void pinsetup();

#endif

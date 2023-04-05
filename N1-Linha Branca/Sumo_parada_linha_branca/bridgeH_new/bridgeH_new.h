/*

bridgeH_new.h

Autor: Alberto Zilio
Março 2023

*/

#ifndef bridgeH_new
#define bridgeH_new

#include "Arduino.h"

class bridgeH_n{

  public:
  bridgeH_n(int pinA, int pinB, int pinEA, int speed);   //Declaração dos pinos
  bool statuspinA();                //valor do pino A;
  bool statuspinB();                //valor do pino B;
  bool statuspinEA();               //valor do pino Enable;
  int statusspeed();                //Valor da Velocidade


  private:
bool _pinA;
bool _pinB;
int _pinEA;

};




#endif
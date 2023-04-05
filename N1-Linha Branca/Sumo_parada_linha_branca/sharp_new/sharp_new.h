/*

sharp_new.h

Autor: Alberto Zilio
Março 2023

*/

#ifndef sharp_new
#define sharp_new

#include "Arduino.h"

class sharp_n{

  public:
  sharp_n(const uint8_t sensPin);   //leitura do pino
  int getDistance();              //valor Distância em mm

  private:
  uint8_t _sensPin;
};




#endif
/*

qtr_new.h

Autor: Alberto Zilio
Março 2023

*/

#ifndef qtr_new
#define qtr_new

#include "Arduino.h"

class qtr_n{

  public:
  qtr_n(const uint8_t sensPin, int threshold);   //leitura do pino 
  float getValue();                 //valor lido
  bool getcolorWhite();
  bool getcolorBlack();

  private:
  uint8_t _sensPin;
  int _threshold;
};




#endif
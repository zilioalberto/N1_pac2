/*

qtr_new.h

Autor: Alberto Zilio
Março 2023

*/

#include "Arduino.h"
#include "qtr_new.h"

qtr_n::qtr_n(const uint8_t sensPin, int threshold)


{
_sensPin=(sensPin);
_threshold=(threshold);

}//end constructor
float qtr_n::getValue()
{
  return(analogRead(_sensPin));

}
bool qtr_n::getcolorWhite()
{
  if ((qtr_n::getValue())>=_threshold){
return false;
  }else{
    return true;
  }
 
}
bool qtr_n::getcolorBlack()
{
  if ((qtr_n::getValue())< _threshold){
return false;
  }else{
    return true;
  }
};
/*

bridgeH_new.h

Autor: Alberto Zilio
Março 2023

*/

#include "Arduino.h"
#include "bridgeH_new.h"

bridgeH_n::bridgeH_n(int pinA, int pinB, int pinEA, int speed)
{
pinMode(pinA, OUTPUT);
pinMode(pinB, OUTPUT);
pinMode(pinEA, OUTPUT);

if (speed==0){
  digitalWrite(pinA,LOW);
  digitalWrite(pinB,LOW);
  analogWrite(pinEA,0);
   _pinEA=(0);

}else if (speed>0){
   digitalWrite(pinA,HIGH);
  digitalWrite(pinB,LOW);
  analogWrite(pinEA,speed); 
  _pinEA=(speed);
  
}else if (speed<0){
   digitalWrite(pinA,LOW);
  digitalWrite(pinB,HIGH);
  analogWrite(pinEA,-speed); 
   _pinEA=(-speed);

  
}

_pinA=digitalRead(pinA);
_pinB=digitalRead(pinB);


};//end constructor

 bool bridgeH_n::statuspinA()
 {
   return (_pinA);
 };
 
  bool bridgeH_n::statuspinB()
 {
   return (_pinB);
 };

   int bridgeH_n::statusspeed()
 {
   return (_pinEA);
 };
 
 
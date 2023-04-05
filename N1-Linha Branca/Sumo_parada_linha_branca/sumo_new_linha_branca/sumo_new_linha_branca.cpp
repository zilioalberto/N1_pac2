/*

sumo_new_linha_branca.h

Autor: Alberto Zilio
Abril 2023

*/

#include "Arduino.h"
#include "sumo_new_linha_branca.h"

sumo_n::sumo_n(bool rWhite, bool lWhite, int dist, int distAttack, int tpRecover, int tpSearch)

{
_rWhite       = rWhite;
_lWhite       = lWhite;
_dist         = dist;
_distAttack   = distAttack;
_tpRecover    = tpRecover;
_tpSearch     = tpSearch;



//estado de parada na linha branca

 // Em caso de detecção do oponente

if ((!_rWhite) && (!_lWhite)  &&  (_index != 5)){
  _index = 1;             //caso não esteja na linha branca
}


//Caso sensor da direita e esquerda tenham detectado linha branca

if ((_rWhite) && (_lWhite) &&  (_index != 10)) {
_atTime = millis();     //Registro do tempo atual do arduino    
_index = 2;             //retorna com velocidades iguais nas rodas
 };




//********************************** Swich case  *************************************************

switch (_index)

{
  case 1: //avanço

_RSpeed = 200;
_LSpeed = 200;

 break;

  case 2: //parada em caso de linha branca

_RSpeed = 0;
_LSpeed = 0;
 break;
 

  default:
_RSpeed = 0;
_LSpeed = 0;
 break;
}


};

int sumo_n::getRSpeed()              //valor retornado de de velocidade para motor direita
{

return _RSpeed;

}
int sumo_n::getLSpeed()            //valor retornado de de velocidade para motor esquerda
{
return _LSpeed;
}

int sumo_n::getIndex()
{
  return _index;
}


/*

sumo_new_linha_branca.h

Autor: Alberto Zilio
Abril 2023

*/

#ifndef sumo_new_linha_branca
#define sumo_new_linha_branca

#include "Arduino.h"

class sumo_n{

  public:
  sumo_n(bool rWhite, bool lWhite, int dist, int distAttack, int tpRecover, int tpSearch);              //rWhite QTR dir branco , lWhite QTR esq branco , dist distancia do oponente
                                                                                                        // distAttack distância para ataque, tpRecover tempo de recuperação , tpSearch tempo de busca
  int getRSpeed();               //valor retornado de de velocidade para motor direita
  int getLSpeed();               //valor retornado de de velocidade para motor esquerda
  int getIndex();                //retorna o valor do index atuaal

  private:
  bool  _rWhite;
  bool  _lWhite;
  int   _dist;
  int   _distAttack;
  int   _tpRecover;
  int   _tpSearch;
  int   _RSpeed;              //Variavel interna velocidade direita
  int   _LSpeed;              //Variavel interna velocidade esquerda
  int   _index;               //Variavel do switch case
  unsigned long _atTime;      //Atual tempo arduino;
};




#endif
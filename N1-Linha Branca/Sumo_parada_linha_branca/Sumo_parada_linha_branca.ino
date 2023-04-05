// Programa teste parada por tempo quando encontrar linha branca na direita e na esquerda;

#include <Arduino.h>
#include <bridgeH_new.h>
#include <sharp_new.h>
#include <qtr_new.h>
#include <sumo_new_linha_branca.h>


int speedD=0;
int speedE=0;
int distance;
int distanceQtrD;
int distanceQtrE;
bool corBrancaD;
bool corBrancaE;


sharp_n sharp1(A0);   //Definição do pino conectado ao sharp
qtr_n qtrD(A1, 400);
qtr_n qtrE(A2, 400);



void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);

  Serial.println("Sumo_Teste 0");
}


void loop() {
  // put your main code here, to run repeatedly:

// speed=map(analogRead(A0),0,1023,-255,255);

//Bloco de controle da ponte H 

bridgeH_n bridgeH_D(3,4,5,speedD);
bridgeH_n bridgeH_E(7,8,6,speedE);


distance = sharp1.getDistance();
distanceQtrD= qtrD.getValue();
distanceQtrE= qtrE.getValue();

corBrancaD =qtrD.getcolorWhite();
corBrancaE =qtrE.getcolorWhite();

// Construtor Sumo

sumo_n sumoV1(corBrancaD,corBrancaE,distance,30,500,800);

speedD = sumoV1.getRSpeed();
speedE = sumoV1.getLSpeed();



  Serial.print(distance);
    Serial.print("  ");
  Serial.print(distanceQtrE);
   Serial.print("  ");
  Serial.print(corBrancaD);
    Serial.print(" ");
     Serial.print(corBrancaE);
    Serial.print(" "); 
  Serial.println(sumoV1.getIndex());
  

//Serial.println(speed);

/*
  pinA = bridgeH_n.statuspinA();
  pinB = bridgeH_n.statuspinB();
  stSpeed = bridgeH_n.statusspeed();
  delay(200);

    Serial.print(speed);
    Serial.print("  ");
    Serial.print(stSpeed);
    Serial.print("  ");
    Serial.print(pinA);
      Serial.print("  ");
    Serial.println(pinB);

  value= qtrD.getValue();
  whiteColor=qtrD.getcolorWrite();
  blackColor=qtrD.getcolorBlack();

  Serial.println(value);
  Serial.println("Cor Branca : "+ whiteColor);
  Serial.println( whiteColor);
  Serial.println("Cor Preta : "+ blackColor);

  */
  
}

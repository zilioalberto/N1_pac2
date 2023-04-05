
#include <Arduino.h>
#include <qtr_new.h>

float value;
bool whiteColor;
bool blackColor;

qtr_n qtrD(A0,500);


void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);

  Serial.println("Qtr sensor");
}


void loop() {
  // put your main code here, to run repeatedly:

  value= qtrD.getValue();
  whiteColor=qtrD.getcolorWrite();
  blackColor=qtrD.getcolorBlack();

  Serial.println(value);
  Serial.println("Cor Branca : "+ whiteColor);
  Serial.println( whiteColor);
  Serial.println("Cor Preta : "+ blackColor);
  Serial.println(blackColor);
  
}

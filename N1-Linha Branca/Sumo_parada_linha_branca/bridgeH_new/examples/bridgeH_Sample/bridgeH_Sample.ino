
#include <Arduino.h>
#include <bridgeH_new.h>

int speed;
bool pinA;
bool pinB;
int stSpeed;





void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);

  Serial.println("Ponte H");
}


void loop() {
  // put your main code here, to run repeatedly:

 speed=map(analogRead(A0),0,1023,-255,255);
 
bridgeH_n bridgeH_n(2,8,13,speed);


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

 /* value= qtrD.getValue();
  whiteColor=qtrD.getcolorWrite();
  blackColor=qtrD.getcolorBlack();

  Serial.println(value);
  Serial.println("Cor Branca : "+ whiteColor);
  Serial.println( whiteColor);
  Serial.println("Cor Preta : "+ blackColor);
  Serial.println(blackColor);
  */
  
}

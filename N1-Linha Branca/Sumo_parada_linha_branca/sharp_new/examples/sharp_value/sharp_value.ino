
#include <Arduino.h>
#include <sharp_new.h>

float distance;

sharp_n sharp1(A0);


void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);

  Serial.println("Sharp Distance");
}


void loop() {
  // put your main code here, to run repeatedly:

  distance= sharp1.getDistance();

 Serial.println(distance);
  //Serial.println((static_cast<float>(analogRead(A0)))/1023*5);
    //Serial.println((static_cast<float>(analogRead(A0))));
  
}

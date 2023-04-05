/*

sharp_new.h

Autor: Alberto Zilio
Março 2023

*/

#include "Arduino.h"
#include "sharp_new.h"

sharp_n::sharp_n(const uint8_t sensPin)

{
_sensPin=(sensPin);
}//end constructor
int sharp_n::getDistance()

{
int distance;
//if (analogRead(_sensPin)>=260 && analogRead(_sensPin)<=680){
//distance = 48000/((static_cast<float>(analogRead(_sensPin)))-200);
//}

//if ((analogRead(_sensPin)>=600) && (distance<=120)){
//distance = 99;
//}else if ((analogRead(_sensPin)<=100) && (distance>=800)){
//distance = 801;
//} else {
 //distance = 48000/((static_cast<float>(analogRead(_sensPin)))-200);
distance = (6762/(analogRead(_sensPin))-9)-4;
//distance = 48000/((static_cast<float>(analogRead(_sensPin)))-200);
//}

return distance;


//if(distance > 800) return 801;
//				else if(distance < 100) return 99;
//				else return distance;

//return (static_cast<float>(analogRead(_sensPin))/1023.00*5.00);
};
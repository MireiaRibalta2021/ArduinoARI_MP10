/**********************************************************************************
**                                                                               **
**                               Dau de LEDs                                     **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int transistors[] = {11, 12, 13};
int leds[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
int i;
int j;

//********** Setup ****************************************************************
void setup(){
 Serial.begin(9600);

    
    for (int i = 0; i < 4; i ++ ){ 
        pinMode(transistors[i], OUTPUT);
        digitalWrite(transistors[i], LOW);
    }
    
    for (int i = 0; i < 10; i ++ ){
        pinMode(leds[i], OUTPUT);
        digitalWrite(leds[i], LOW);
    }
}

//********** Loop *****************************************************************
void loop(){

    
    for (int j = 0; j < 4; j ++ ){
        digitalWrite (transistors[j], HIGH);
        for (int i = 0; i < 10; i ++ ){
            digitalWrite(leds[i], HIGH);
            delay(500);
            digitalWrite(leds[i], LOW);
        }
        digitalWrite (transistors[j], LOW);
    }
    delay(1000);
}
//********** Funcions *************************************************************

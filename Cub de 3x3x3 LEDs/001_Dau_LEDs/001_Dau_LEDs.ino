/**********************************************************************************
**                                                                               **
**                               Dau de LEDs                                     **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

const int led4 = 5;
const int led3 = 6;
const int led2 = 7;
const int led1 = 8;

int buttonState = 0;     

int temps = 500;

void setup() 
{
   pinMode(led4, OUTPUT);
   pinMode(led3, OUTPUT);
   pinMode(led2, OUTPUT);
   pinMode(led1, OUTPUT);
}

void loop() 
{
     digitalWrite(led4, LOW);       // 1
     digitalWrite(led3, LOW);
     digitalWrite(led2, LOW);
     digitalWrite(led1, HIGH); 
     delay(temps);
    
     digitalWrite(led4, HIGH);      // 2
     digitalWrite(led3, LOW);
     digitalWrite(led2, LOW);
     digitalWrite(led1, LOW);
     delay(temps);
   
     digitalWrite(led4, LOW);      // 3
     digitalWrite(led3, HIGH);
     digitalWrite(led2, LOW);
     digitalWrite(led1, HIGH);
     delay(temps);
  
     digitalWrite(led4, LOW);       // 4 
     digitalWrite(led3, HIGH);
     digitalWrite(led2, HIGH);
     digitalWrite(led1, LOW);
     delay(temps);
  
     digitalWrite(led4, LOW);       // 5
     digitalWrite(led3, HIGH);
     digitalWrite(led2, HIGH);
     digitalWrite(led1, HIGH);
      
      delay(temps);   
  
     digitalWrite(led4, HIGH);      // 6
     digitalWrite(led3, HIGH);
     digitalWrite(led2, HIGH);
     digitalWrite(led1, LOW);
     delay(temps);
   
     digitalWrite(led4, LOW);
     digitalWrite(led3, LOW);
     digitalWrite(led2, LOW);
     digitalWrite(led1, LOW);
     
      delay(temps); 
}

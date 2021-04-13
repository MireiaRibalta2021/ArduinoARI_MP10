/**********************************************************************************
**                                                                               **
**                               Dau de LEDs                                     **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int temps = 1000;
const int led4 = 5;          // donar nom al pin 5 de l’Arduino
const int led3 = 6;          // donar nom al pin 6 de l’Arduino
const int led2 = 7;          // donar nom al pin 7 de l’Arduino
const int led1 = 8;          // donar nom al pin 8 de l’Arduino
int buttonState;
int buttonPin = 2;
long aleatori;

//********** Setup ****************************************************************
void setup()
{
  
  pinMode(led1, OUTPUT);     
  pinMode(led2, OUTPUT);     
  pinMode(led3, OUTPUT);    
  pinMode(led4, OUTPUT); 
  pinMode(buttonPin, INPUT);
}

//********** Loop *****************************************************************
void loop()
{
  buttonState = digitalRead(buttonPin);
  
  
  if (buttonState == 0)  
  {
    aleatori = random(1, 6);
    delay(500);
  }
  switch (aleatori)
  {
    case 1:
     digitalWrite(led4, LOW);       // 1
     digitalWrite(led3, LOW);
     digitalWrite(led2, LOW);
     digitalWrite(led1, HIGH); 
     delay(temps);
    break;
    case 2:
     digitalWrite(led4, HIGH);      // 2
     digitalWrite(led3, LOW);
     digitalWrite(led2, LOW);
     digitalWrite(led1, LOW);
     delay(temps);
    break;
    case 3:
     digitalWrite(led4, LOW);      // 3
     digitalWrite(led3, HIGH);
     digitalWrite(led2, LOW);
     digitalWrite(led1, HIGH);
     delay(temps);
    break;
    case 4:
     digitalWrite(led4, LOW);       // 4 
     digitalWrite(led3, HIGH);
     digitalWrite(led2, HIGH);
     digitalWrite(led1, LOW);
     delay(temps);
    break;
    case 5:
     digitalWrite(led4, LOW);       // 5
     digitalWrite(led3, HIGH);
     digitalWrite(led2, HIGH);
     digitalWrite(led1, HIGH);
     delay(temps);
    break;
    case 6:
     digitalWrite(led4, HIGH);      // 6
     digitalWrite(led3, HIGH);
     digitalWrite(led2, HIGH);
     digitalWrite(led1, LOW);
     delay(temps);
    default:
    break;
  } 
}

//********** Funcions ************************************************************

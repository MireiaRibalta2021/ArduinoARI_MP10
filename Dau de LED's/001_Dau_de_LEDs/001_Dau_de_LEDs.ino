/**********************************************************************************
**                               Dau de LEDs                                     **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const int led1 = 8;          // donar nom al pin 3 de l’Arduino
const int led2 = 7;          // donar nom al pin 5 de l’Arduino
const int led3 = 6;          // donar nom al pin 6 de l’Arduino
const int led4 = 5;          // donar nom al pin 9 de l’Arduino         // donar nom al pin 11 de l’Arduino
int temps = 500;         // velocitat de l'acció en ms
long aleatori;
const int buttonPin2 = 2;
int buttonState2 = 0;

//********** Setup ****************************************************************
void setup()
{
      // definir el pin 3 com una sortida
  pinMode(buttonPin2, INPUT);
  pinMode(led1, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 10 com una sortida
      // definir el pin 11 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  buttonState2 = digitalRead(buttonPin2);
  if(buttonState2==HIGH){
    aleatori=random(1,7);
  }
  else if (aleatori==1){
  
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, LOW);    // posar a 5V el pin 7
  digitalWrite(led3, LOW);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9
  
  delay(temps);
  }
  else if (aleatori == 2) {      
  
  digitalWrite(led1, LOW);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, LOW);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9
  
  delay(temps);
  }
  else if(aleatori==3){   
 
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, LOW);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9
  
  delay(temps);
  }
  else if(aleatori==4){
  
  digitalWrite(led1, LOW);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9
  
  delay(temps);
  }
  else if(aleatori==5){

  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9
  
  delay(temps);
  }
  else if (aleatori==6){

  digitalWrite(led1, LOW);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  
  delay(temps);
  }    
}

//********** Funcions *************************************************************

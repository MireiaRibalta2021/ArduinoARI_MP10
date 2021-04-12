/**********************************************************************************
**                                                                               **
**                            Display de 7 segments                              **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int ledg = 7;          // donar nom al pin 5 de l’Arduino
const int ledc = 8;          // donar nom al pin 6 de l’Arduino
const int ledb = 9;          // donar nom al pin 7 de l’Arduino
const int leda = 10;          // donar nom al pin 8 de l’Arduino
const int ledf = 11;          // donar nom al pin 9 de l’Arduino
const int lede = 12;         // donar nom al pin 10 de l’Arduino
const int ledd = 13;         // donar nom al pin 11 de l’Arduino

//********** Setup ****************************************************************
void setup()
{
  pinMode(leda, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(ledb, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(ledc, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(ledd, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(lede, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(ledf, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(ledg, OUTPUT);     // definir el pin 11 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(leda, HIGH);    //M
  digitalWrite(ledc, HIGH);    
  digitalWrite(lede, HIGH);
      
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(lede, LOW);     //I
  digitalWrite(ledb, HIGH);     
  digitalWrite(leda, LOW);     
  digitalWrite(ledc, HIGH);     
  
  delay(500);                  // es queden leds 500ms apagats
  digitalWrite(ledc, LOW);     //R
  digitalWrite(lede, HIGH);     
  digitalWrite(ledg, HIGH);        
  digitalWrite(ledb, LOW);
  delay(500);                  // es queden leds 500ms apagats
  digitalWrite(leda, HIGH);     //E
  digitalWrite(ledd, HIGH);     
  digitalWrite(lede, HIGH);     
  digitalWrite(ledf, HIGH);     
  digitalWrite(ledg, HIGH);
  delay(500);                  // es queden leds 500ms apagats
  digitalWrite(leda, LOW);     //I
  digitalWrite(ledb, HIGH);     
  digitalWrite(ledd, LOW);     
  digitalWrite(ledc, HIGH);     
  digitalWrite(lede, LOW);
  digitalWrite(ledf, LOW);
  digitalWrite(ledg, LOW);
  delay(500);                  // es queden leds 500ms apagats
  digitalWrite(ledf, HIGH);     //A
  digitalWrite(lede, HIGH);     
  digitalWrite(leda, HIGH);     
  digitalWrite(ledg, HIGH);     
  digitalWrite(ledd, LOW);
  digitalWrite(ledb, HIGH); 
  delay(500);                  // es queden leds 500ms apagats
  digitalWrite(ledf, LOW);     
  digitalWrite(lede, LOW);     
  digitalWrite(leda, LOW);     
  digitalWrite(ledg, LOW);     
  digitalWrite(ledd, LOW);
  digitalWrite(ledb, LOW); 
  digitalWrite(ledc, LOW);
  delay(500);                  // es queden leds 500ms apagats
}

//********** Funcions *************************************************************

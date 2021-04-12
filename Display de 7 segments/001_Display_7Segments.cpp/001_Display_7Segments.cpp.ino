/**********************************************************************************
**                                                                               **
**                            Display de 7 segments                              **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int leda = 5;          // donar nom al pin 5 de l’Arduino
const int ledb = 6;          // donar nom al pin 6 de l’Arduino
const int ledc = 7;          // donar nom al pin 7 de l’Arduino
const int ledd = 8;          // donar nom al pin 8 de l’Arduino
const int lede = 9;          // donar nom al pin 9 de l’Arduino
const int ledf = 10;         // donar nom al pin 10 de l’Arduino
const int ledg = 11;         // donar nom al pin 11 de l’Arduino


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
  digitalWrite(ledd, HIGH);    //M
  digitalWrite(ledb, HIGH);    
  digitalWrite(ledf, HIGH);    
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(ledf, LOW);     //I
  digitalWrite(lede, HIGH);     
  digitalWrite(ledb, LOW);     
  digitalWrite(ledd, HIGH);     
  
  delay(500);                  // es queden leds 500ms apagats
  digitalWrite(lede, LOW);     //R
  digitalWrite(ledd, HIGH);     
  digitalWrite(ledg, HIGH);        
  
  delay(500);                  // es queden leds 500ms apagats
  digitalWrite(ledf, HIGH);     //E
  digitalWrite(lede, HIGH);     
  digitalWrite(ledg, HIGH);     
  digitalWrite(ledd, HIGH);     
  digitalWrite(ledc, HIGH);
  delay(500);                  // es queden leds 500ms apagats
  digitalWrite(ledf, LOW);     //I
  digitalWrite(lede, HIGH);     
  digitalWrite(ledg, LOW);     
  digitalWrite(ledd, HIGH);     
  digitalWrite(ledc, LOW);
  delay(500);                  // es queden leds 500ms apagats
  digitalWrite(ledf, HIGH);     //A
  digitalWrite(lede, HIGH);     
  digitalWrite(leda, HIGH);     
  digitalWrite(ledg, HIGH);     
  digitalWrite(ledd, HIGH);
  digitalWrite(ledb, HIGH); 
  delay(500);                  // es queden leds 500ms apagats
  digitalWrite(ledf, LOW);     //A
  digitalWrite(lede, LOW);     
  digitalWrite(leda, LOW);     
  digitalWrite(ledg, LOW);     
  digitalWrite(ledd, LOW);
  digitalWrite(ledb, LOW); 
  delay(500);                  // es queden leds 500ms apagats
}

//********** Funcions *************************************************************

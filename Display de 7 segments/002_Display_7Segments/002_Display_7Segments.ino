/**********************************************************************************
**                                                                               **
**                            Display de 7 segments                              **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int ledg = 7;          // donar nom al pin 7 de l’Arduino
const int ledc = 8;          // donar nom al pin 8 de l’Arduino
const int ledb = 9;          // donar nom al pin 9 de l’Arduino
const int leda = 10;         // donar nom al pin 10 de l’Arduino
const int ledf = 11;         // donar nom al pin 11 de l’Arduino
const int lede = 12;         // donar nom al pin 12 de l’Arduino
const int ledd = 13;         // donar nom al pin 13 de l’Arduino

//********** Setup ****************************************************************
void setup()
{
  pinMode(leda, OUTPUT);     
  pinMode(ledb, OUTPUT);     
  pinMode(ledc, OUTPUT);     
  pinMode(ledd, OUTPUT);     
  pinMode(lede, OUTPUT);     
  pinMode(ledf, OUTPUT);     
  pinMode(ledg, OUTPUT);     
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(leda, HIGH);    //0
  digitalWrite(ledb, HIGH);    
  digitalWrite(ledc, HIGH);
  digitalWrite(ledd, HIGH);
  digitalWrite(lede, HIGH);
  digitalWrite(ledf, HIGH);
  digitalWrite(ledg, LOW);    
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(ledd, LOW);     //1
  digitalWrite(ledb, HIGH);     
  digitalWrite(leda, LOW);     
  digitalWrite(ledc, HIGH); 
  digitalWrite(ledf, LOW);
  digitalWrite(lede, LOW);    
  
  delay(500);                  // es queden leds 500ms apagats
  digitalWrite(leda, HIGH);     //2
  digitalWrite(ledb, HIGH);     
  digitalWrite(ledg, HIGH);        
  digitalWrite(lede, HIGH);
  digitalWrite(ledd, HIGH);
  digitalWrite(ledc, LOW);
  delay(500);                  // es queden leds 500ms apagats
  digitalWrite(leda, HIGH);     //3
  digitalWrite(ledd, HIGH);     
  digitalWrite(ledc, HIGH);     
  digitalWrite(ledb, HIGH);     
  digitalWrite(ledg, HIGH);
  digitalWrite(lede, LOW);
  digitalWrite(ledf, LOW);
  delay(500);                  // es queden leds 500ms apagats
  digitalWrite(leda, LOW);     //4
  digitalWrite(ledb, HIGH);     
  digitalWrite(ledc, HIGH);     
  digitalWrite(ledd, LOW);     
  digitalWrite(lede, LOW);
  digitalWrite(ledf, HIGH);
  digitalWrite(ledg, HIGH);
  delay(500);                  // es queden leds 500ms apagats
  digitalWrite(ledf, HIGH);     //5
  digitalWrite(lede, LOW);     
  digitalWrite(leda, HIGH);     
  digitalWrite(ledg, HIGH);     
  digitalWrite(ledd, HIGH);
  digitalWrite(ledb, LOW);
  digitalWrite(ledc, HIGH); 
  delay(500);                  // es queden leds 500ms apagats
  digitalWrite(ledf, HIGH);     //6
  digitalWrite(lede, HIGH);     
  digitalWrite(leda, LOW);     
  digitalWrite(ledg, HIGH);     
  digitalWrite(ledd, HIGH);
  digitalWrite(ledb, LOW); 
  digitalWrite(ledc, HIGH);
  delay(500);                  // es queden leds 500ms apagats
  digitalWrite(ledf, LOW);     //7
  digitalWrite(lede, LOW);     
  digitalWrite(leda, HIGH);     
  digitalWrite(ledg, LOW);     
  digitalWrite(ledd, LOW);
  digitalWrite(ledb, HIGH); 
  digitalWrite(ledc, HIGH);
  delay(500);                  // es queden leds 500ms apagats
  digitalWrite(ledf, HIGH);     //8
  digitalWrite(lede, HIGH);     
  digitalWrite(leda, HIGH);     
  digitalWrite(ledg, HIGH);     
  digitalWrite(ledd, HIGH);
  digitalWrite(ledb, HIGH); 
  digitalWrite(ledc, HIGH);
  delay(500);                  // es queden leds 500ms apagats
  digitalWrite(ledf, HIGH);     //9
  digitalWrite(lede, LOW);     
  digitalWrite(leda, HIGH);     
  digitalWrite(ledg, HIGH);     
  digitalWrite(ledd, LOW);
  digitalWrite(ledb, HIGH); 
  digitalWrite(ledc, HIGH);
  delay(500);                  // es queden leds 500ms apagats
}

//********** Funcions *************************************************************

/**********************************************************************************
**                              Array de 8 LEDs                                  **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const int led0 = 5;          // donar nom al pin 5 de l’Arduino


//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  
  digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);                  
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100); 
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  delay(100);
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);  
  digitalWrite(led0, LOW);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms apagats 
  digitalWrite(led0, LOW);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);
  digitalWrite(led0, LOW);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms apagats
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);  
  digitalWrite(led0, LOW);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms apagats 
  digitalWrite(led0, LOW);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);                  
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100); 
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  delay(100);
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);  
  digitalWrite(led0, LOW);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms apagats 
  digitalWrite(led0, LOW);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);
  digitalWrite(led0, LOW);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms apagats
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);  
  digitalWrite(led0, LOW);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms apagats 
  digitalWrite(led0, LOW);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);                  
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100); 
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  delay(100);
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);  
  digitalWrite(led0, LOW);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms apagats 
  digitalWrite(led0, LOW);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);
  digitalWrite(led0, LOW);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms apagats
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);  
  digitalWrite(led0, LOW);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms apagats 
  digitalWrite(led0, LOW);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
}
//********** Loop *****************************************************************
void loop()
{
  

 }
//********** Funcions *************************************************************

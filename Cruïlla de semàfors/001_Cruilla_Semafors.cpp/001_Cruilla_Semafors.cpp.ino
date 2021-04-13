/**********************************************************************************
**                                                                               **
**                              Cruïlla de semàfors                              **
**                                                                               **
**                                                                               **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const int ledr1 = 7;          // donar nom al pin 7 de l’Arduino
const int ledg1 = 8;          // donar nom al pin 8 de l’Arduino
const int ledv1 = 9;          // donar nom al pin 9 de l’Arduino
const int ledr2 = 10;         // donar nom al pin 10 de l’Arduino
const int ledg2 = 11;         // donar nom al pin 11 de l’Arduino
const int ledv2 = 12;         // donar nom al pin 12 de l’Arduino

//********** Setup ****************************************************************
void setup()
{

  pinMode(ledr1, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(ledg1, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(ledv1, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(ledr2, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(ledg2, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(ledv2, OUTPUT);     // definir el pin 12 com una sortida
}
//********** Loop *****************************************************************
void loop()
{
  digitalWrite(ledr1, HIGH);        //leds vermells encesos 
  digitalWrite(ledr2, HIGH);
  digitalWrite(ledg1, LOW);        
  digitalWrite(ledg2, LOW); 
  digitalWrite(ledv1, LOW);        
  digitalWrite(ledv2, LOW); 
  delay (200);  
  digitalWrite(ledr1, HIGH);        //s'encen el verd 2 i s'apaga el vermell 2
  digitalWrite(ledv2, HIGH);
  digitalWrite(ledr2, LOW); 
  digitalWrite(ledg1, LOW);        
  digitalWrite(ledg2, LOW); 
  digitalWrite(ledv1, LOW);        
 
  delay (200);  
  digitalWrite(ledr1, HIGH);
  digitalWrite(ledv2, HIGH);
  digitalWrite(ledg1, LOW);        
  digitalWrite(ledg2, LOW); 
  digitalWrite(ledv1, LOW);        
  digitalWrite(ledr2, LOW);
  delay (200); 
  digitalWrite(ledr1, HIGH);
  digitalWrite(ledv2, HIGH);
  digitalWrite(ledg1, LOW);        
  digitalWrite(ledg2, LOW); 
  digitalWrite(ledv1, LOW);        
  digitalWrite(ledr2, LOW);
  delay (200); 
  digitalWrite(ledr1, HIGH);
  digitalWrite(ledv2, HIGH);
  digitalWrite(ledg1, LOW);        
  digitalWrite(ledg2, LOW); 
  digitalWrite(ledv1, LOW);        
  digitalWrite(ledr2, LOW);
  delay (200); 
  digitalWrite(ledr1, HIGH);         //s'apaga led verd2 i comença intermitencia led groc
  digitalWrite(ledg2, HIGH);
  digitalWrite(ledv2, LOW); 
  digitalWrite(ledg1, LOW);         
  digitalWrite(ledv1, LOW);        
  digitalWrite(ledr2, LOW);
  delay (200); 
  digitalWrite(ledr1, HIGH);
  digitalWrite(ledg2, LOW);
  digitalWrite(ledg1, LOW);        
  digitalWrite(ledv2, LOW); 
  digitalWrite(ledv1, LOW);        
  digitalWrite(ledr2, LOW);
  delay (200); 
  digitalWrite(ledr1, HIGH);
  digitalWrite(ledg2, HIGH);
  digitalWrite(ledg1, LOW);        
  digitalWrite(ledv2, LOW); 
  digitalWrite(ledv1, LOW);        
  digitalWrite(ledr2, LOW);
  delay (200); 
  digitalWrite(ledr1, HIGH);
  digitalWrite(ledg2, LOW);
  digitalWrite(ledg1, LOW);        
  digitalWrite(ledv2, LOW); 
  digitalWrite(ledv1, LOW);        
  digitalWrite(ledr2, LOW);
  delay (200); 
  digitalWrite(ledr1, HIGH);
  digitalWrite(ledg2, HIGH);
  digitalWrite(ledg1, LOW);        
  digitalWrite(ledv2, LOW); 
  digitalWrite(ledv1, LOW);        
  digitalWrite(ledr2, LOW);
  delay (200); 
  digitalWrite(ledr1, HIGH);         //leds vermells encesos
  digitalWrite(ledg2, LOW);
  digitalWrite(ledr2, HIGH);
  digitalWrite(ledg1, LOW);        
  digitalWrite(ledv2, LOW); 
  digitalWrite(ledv1, LOW);        
  delay (200); 
  digitalWrite(ledv1, HIGH);        //led verd 1 s'encen i led vermell 1 s'apaga
  digitalWrite(ledr1, LOW);        
  digitalWrite(ledr2, HIGH);
  digitalWrite(ledg1, LOW);        
  digitalWrite(ledg2, LOW); 
  digitalWrite(ledv1, LOW);        
  digitalWrite(ledv2, LOW);
  delay(200);
  digitalWrite(ledv1, HIGH);               
  digitalWrite(ledr2, HIGH);
  delay(200);
  digitalWrite(ledv1, HIGH);               
  digitalWrite(ledr2, HIGH);
  delay(200);
  digitalWrite(ledv1, HIGH);               
  digitalWrite(ledr2, HIGH);
  delay(200);
  digitalWrite(ledg1, HIGH);        //led verd 1 s'apaga comença intermitencia led groc 1
  digitalWrite(ledv1, LOW);               
  digitalWrite(ledr2, HIGH);
  digitalWrite(ledg1, LOW);        
  digitalWrite(ledg2, LOW); 
  digitalWrite(ledv1, LOW);        
  digitalWrite(ledv2, LOW);
  delay(200);
  digitalWrite(ledg1, LOW);               
  digitalWrite(ledr2, HIGH);
  delay(200);
  digitalWrite(ledv1, HIGH);               
  digitalWrite(ledr2, HIGH);
  delay(200);
  digitalWrite(ledg1, LOW);               
  digitalWrite(ledr2, HIGH);
  delay(200);
  digitalWrite(ledg1, HIGH);               
  digitalWrite(ledr2, HIGH);
  delay(200);
  digitalWrite(ledg1, LOW);         //torna a vermell tots dos semafors.
  digitalWrite(ledr1, HIGH);               
  digitalWrite(ledr2, HIGH);        
  digitalWrite(ledg2, LOW); 
  digitalWrite(ledv1, LOW);        
  digitalWrite(ledv2, LOW);
  delay(200);
 }
//********** Funcions *************************************************************
//********** Funcions *************************************************************

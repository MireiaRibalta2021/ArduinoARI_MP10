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
int comptador = 0;
const int buttonPin2 = 2;     // donar nom al pin 2 de l’Arduino
int buttonState2 = 0;

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
  pinMode(buttonPin2, INPUT); // definir el pin 2 com una entrada      
}

//********** Loop *****************************************************************
void loop()
{
  buttonState2 = digitalRead(buttonPin2);
  if (digitalRead(buttonPin2==1)){
    comptador++;
  }
 
  if(comptador==0){
  digitalWrite(leda, HIGH);    //0
  digitalWrite(ledb, HIGH);    
  digitalWrite(ledc, HIGH);
  digitalWrite(ledd, HIGH);
  digitalWrite(lede, HIGH);
  digitalWrite(ledf, HIGH);
  digitalWrite(ledg, LOW);  
  comptador++;  
  }                 
  if (comptador==1){
  digitalWrite(ledd, LOW);     //1
  digitalWrite(ledb, HIGH);     
  digitalWrite(leda, LOW);     
  digitalWrite(ledc, HIGH); 
  digitalWrite(ledf, LOW);
  digitalWrite(lede, LOW);  
  comptador++;  
  }
  if (comptador==2){                 
  digitalWrite(leda, HIGH);     //2
  digitalWrite(ledb, HIGH);     
  digitalWrite(ledg, HIGH);        
  digitalWrite(lede, HIGH);
  digitalWrite(ledd, HIGH);
  digitalWrite(ledc, LOW);
  comptador++;
  }
  if(comptador==3){
  digitalWrite(leda, HIGH);     //3
  digitalWrite(ledd, HIGH);     
  digitalWrite(ledc, HIGH);     
  digitalWrite(ledb, HIGH);     
  digitalWrite(ledg, HIGH);
  digitalWrite(lede, LOW);
  digitalWrite(ledf, LOW);
  comptador++;
  }               
  if(comptador==4){ 
  digitalWrite(leda, LOW);     //4
  digitalWrite(ledb, HIGH);     
  digitalWrite(ledc, HIGH);     
  digitalWrite(ledd, LOW);     
  digitalWrite(lede, LOW);
  digitalWrite(ledf, HIGH);
  digitalWrite(ledg, HIGH);
  comptador++;
  }
  if(comptador==5){
  digitalWrite(ledf, HIGH);     //5
  digitalWrite(lede, LOW);     
  digitalWrite(leda, HIGH);     
  digitalWrite(ledg, HIGH);     
  digitalWrite(ledd, HIGH);
  digitalWrite(ledb, LOW);
  digitalWrite(ledc, HIGH); 
  comptador++;
  }
  if(comptador==6){
  digitalWrite(ledf, HIGH);     //6
  digitalWrite(lede, HIGH);     
  digitalWrite(leda, LOW);     
  digitalWrite(ledg, HIGH);     
  digitalWrite(ledd, HIGH);
  digitalWrite(ledb, LOW); 
  digitalWrite(ledc, HIGH);
  comptador++;
  }
  if (comptador==7){
  digitalWrite(ledf, LOW);     //7
  digitalWrite(lede, LOW);     
  digitalWrite(leda, HIGH);     
  digitalWrite(ledg, LOW);     
  digitalWrite(ledd, LOW);
  digitalWrite(ledb, HIGH); 
  digitalWrite(ledc, HIGH);
  comptador++;
  }
  if(comptador==8){
  digitalWrite(ledf, HIGH);     //8
  digitalWrite(lede, HIGH);     
  digitalWrite(leda, HIGH);     
  digitalWrite(ledg, HIGH);     
  digitalWrite(ledd, HIGH);
  digitalWrite(ledb, HIGH); 
  digitalWrite(ledc, HIGH);
  comptador++;
  }
  if(comptador==9){
  digitalWrite(ledf, HIGH);     //9
  digitalWrite(lede, LOW);     
  digitalWrite(leda, HIGH);     
  digitalWrite(ledg, HIGH);     
  digitalWrite(ledd, LOW);
  digitalWrite(ledb, HIGH); 
  digitalWrite(ledc, HIGH);
  comptador=0;
  }
  if (digitalRead(buttonPin2) == 0){
  digitalWrite(ledf, LOW);     //X
  digitalWrite(lede, LOW);     
  digitalWrite(leda, LOW);     
  digitalWrite(ledg, LOW);     
  digitalWrite(ledd, LOW);
  digitalWrite(ledb, LOW); 
  digitalWrite(ledc, LOW);
  }
  delay (200);
}

//********** Funcions *************************************************************

#include <SoftwareSerial.h>

SoftwareSerial BT(10, 11); 
String readdirection;

void setup() {
 BT.begin(9600);
 Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

}
void loop() {
  while (BT.available()){  
  delay(10); 
  char c = BT.read(); 
  readdirection += c; 
  } 
  if (readdirection.length() > 0) {
    Serial.println(readdirection);

  if(readdirection == "forward")
  {
    digitalWrite(2, HIGH);
    digitalWrite (3, LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    delay(100);
  }

  else if(readdirection == "reverse")
  {
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5,HIGH);
        digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    delay(100);
  }

  else if (readdirection == "right")
  {
    digitalWrite (2,HIGH);
    digitalWrite (3,LOW);
    digitalWrite (4,LOW);
    digitalWrite (5,LOW);
        digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    delay (100);
   
  }

 else if ( readdirection == "left")
 {
   digitalWrite (2, LOW);
   digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
       digitalWrite(6,LOW);
    digitalWrite(7,LOW);
   delay (100);
 }

 else if (readdirection == "stop")
 {
   digitalWrite (3, LOW);
   digitalWrite (4, LOW);
   digitalWrite (8, LOW);
   digitalWrite (9, LOW);
       digitalWrite(6,LOW);
    digitalWrite(7,LOW);
   delay (100);
 }
  else if (readdirection == "stop")
 {
   digitalWrite (3, LOW);
   digitalWrite (4, LOW);
   digitalWrite (8, LOW);
   digitalWrite (9, LOW);
       digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
   delay (100);
 }
  else if (readdirection == "stop")
 {
   digitalWrite (3, LOW);
   digitalWrite (4, LOW);
   digitalWrite (8, LOW);
   digitalWrite (9, LOW);
       digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
   delay (100);
 }

  


readdirection="";}} 

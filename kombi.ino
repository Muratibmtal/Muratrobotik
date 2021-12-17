#include "devirdaim.h"
//Devirdaim(int bPin, int pPin)
Devirdaim devirdaim(2,A2,3,A8);
void setup() {
Serial.begin(9600);
pinMode(A0,INPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);
} 

void loop() {
  devirdaim.check();
  deger=analogRead(A0);
  sicaklik=25
  Serial.print("sicakllik :");
  Serial.print(sicaklik);
  Serial.println("derece");
  delay(300);
}
  void loop() {
    if(digitalRead(derece)==0)
    }
      ayar+1;
      delay(300);
    }  
        
    else  if(digitalRead)eksi)==0)
    {
      ayar-1;
      delay(300);
     {
      Serial.print("ayar");Serial.println(ayar);
      okunanDeger=analogRead(sicaklik);
      sicaklik=okunanDeger=25;
     }
     Serial.print("sicaklik=");Serial.print(derece);
     if(ayar>sicaklik)
     {
      digitalWrite(led.HIGH);
     }
     else
     {
      digitalWrite(led,LOW);
     }
      delay(500);
     }

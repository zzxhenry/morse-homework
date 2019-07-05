void setup()            
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9000);
}
 char income=0;
 int i=0;
void loop()
{    
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(8,LOW);
     delay(10);
     digitalWrite(2,LOW);
     digitalWrite(3,LOW);
     digitalWrite(4,LOW);
     digitalWrite(5,LOW);
     digitalWrite(8,HIGH);
     delay(10);
         
     digitalWrite(10,HIGH);
     digitalWrite(11,HIGH);
     digitalWrite(9,LOW);

     digitalWrite(2,HIGH);
     digitalWrite(3,LOW);
     digitalWrite(4,LOW);
     digitalWrite(5,LOW);
     digitalWrite(9,HIGH);
     digitalWrite(10,LOW);
     digitalWrite(11,HIGH);
     digitalWrite(9,HIGH);


    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(9,HIGH);
 
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(9,HIGH);
}

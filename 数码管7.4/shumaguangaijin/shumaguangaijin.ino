void setup()            
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9000);
}
 int income=0;
void loop()
{
 if(Serial.available()>0)
    {
      income=Serial.read();
      switch(income)                   
      {
      case '1':n1();break;
      case '2':n2();break;
      case '3':n3();break;
      case '4':n4();break;
      case '5':n5();break;
      case '6':n6();break;
      case '7':n7();break;
      case '8':n8();break;
      case '9':n9();break;
      case '0':n0();break;
      defult: break;
      }
 }
    
}
   void n1()
    {
    digitalWrite(6,HIGH);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
   
    }
     void n2()
    {
    digitalWrite(6,LOW);
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    } 
    void n3()
    {
    digitalWrite(6,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    }
    void n4()
    {
    digitalWrite(6,LOW); 
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
   
    }
    void n5()
    {
    digitalWrite(6,HIGH);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
   
    } 
    void n6()
    {
    digitalWrite(6,LOW);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    }
    void n7()
    {
    digitalWrite(6,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
 
    }
    void n8()
    {
    digitalWrite(6,LOW);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    }
    void n9()
    {
    digitalWrite(6,HIGH);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    }
    void n0()
    {
    digitalWrite(6,LOW);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    }
     

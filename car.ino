
void setup()            
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9000);
}
 int income=0;
void loop()
{
 if(Serial.available()>0)
    {
      income=Serial.read();
      switch(income)                   //左转左登亮，右转右灯亮，前进两灯都亮，后退不亮灯。
      {
      case 'f':qian();fl();break;
      case 'b':hou();break;
      case 'l':zuo();ll();break;
      case 'r':you();rl();break;
      case 's':ting();break;
      defult: break;
    }
 }
    
}
    void qian()
    {
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    }
      void hou()
    {
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
    }
      void zuo()
    {
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    }
      void you()
    {
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
    }
      void ting()
    {
    digitalWrite(6,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(5,LOW);
    }
    void ll()
{
  digitalWrite(13,HIGH);
  delay(6000);
  digitalWrite(13,LOW);
  }
   void rl()
{
  digitalWrite(12,HIGH);
  delay(6000);
  digitalWrite(12,LOW);
  }
      void fl()
{
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  delay(6000);
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  }

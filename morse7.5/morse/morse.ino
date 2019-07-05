char M=0;
int pin=13;
void setup() {
 Serial.begin(9600);
 pinMode(pin,OUTPUT);
}

void loop() {
  if (Serial.available()>0){
    M=Serial.read();
    switch(M)
    {
      case 'a':Serial.print("*- ");dot();dash();delay(1000);break;      //字母之间间隔1秒
      case 'b':Serial.print("-*** ");dash();dot();dot();dot();delay(1000);break;
      case 'c':Serial.print("-*-* ");dash();dot();dash();dot();delay(1000);break;
      case 'd':Serial.print("-** ");dash();delay(1000);break;
      case 'e':Serial.print("* ");dot();delay(1000);break;
      case 'f':Serial.print("**-* ");dot();dot();dash();dot();delay(1000);break;
      case 'g':Serial.print("--* ");dash();dash();dot();delay(1000);break;
      case 'h':Serial.print("**** ");dot();dot();dot();dot();delay(1000);break;
      case 'i':Serial.print("** ");dot();dot();delay(1000);break;
      case 'j':Serial.print("*--- ");dot();dash();dash();dash();delay(1000);break;
      case 'k':Serial.print("-*- ");dash();dot();dash();delay(1000);break;
      case 'l':Serial.print("*-** ");dot();dash();dot();dot();delay(1000);break;
      case 'm':Serial.print("-- ");dash();dash();delay(1000);break;
      case 'n':Serial.print("-* ");dash();dot();delay(1000);break;
      case 'o':Serial.print("--- ");dash();dash();dash();delay(1000);break;
      case 'p':Serial.print("*--* ");dot();dash();dash();delay(1000);break;
      case 'q':Serial.print("--*- ");dash();dash();dot();dash();delay(1000);break;
      case 'r':Serial.print("*-* ");dot();dash();dot();delay(1000);break;
      case 's':Serial.print("*** ");dot();dot();dot();delay(1000);break;
      case 't':Serial.print("- ");dash();delay(1000);break;
      case 'u':Serial.print("**- ");dot();dot();dash();delay(1000);break;
      case 'v':Serial.print("***- ");dot();dot();dot();dash();delay(1000);break;
      case 'w':Serial.print("*-- ");dot();dash();dash();delay(1000);break;
      case 'x':Serial.print("--** ");dash();dash();dot();dot();delay(1000);break;
      case 'y':Serial.print("-*-- ");dash();dot();dash();dash();delay(1000);break;
      case 'z':Serial.print("--** ");dash();dash();dot();dot();delay(1000);break;
      case ' ':Serial.print("  ");delay(3000);break;       //空格间隔3秒
      case '\n':Serial.println(" ");delay(6000);break;     //回车间隔6秒
      }
    }

}
void dot()
{
  digitalWrite(pin,HIGH);
  delay(250);
  digitalWrite(pin,LOW);
  delay(250);
  }
  void dash()
{
  digitalWrite(pin,HIGH);
  delay(1000);
  digitalWrite(pin,LOW);
  delay(250);
  }

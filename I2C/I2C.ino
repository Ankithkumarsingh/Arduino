#include<Wire.h>

int x = 0;
int led = 4;

void setup()
{
  pinMode(led, OUTPUT);
}


void recieveEvent()
{
  x= Wire.read();
  if(x==1)
  {
  digital.Write(led, HIGH);
  delay(1000);
  }else
  {
  digital.Write(led, LOW);
  delay(1000);
  }
}


void loop()
{
  recieveEvent();
}

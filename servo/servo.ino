#include <Servo.h>

int angle = 0;
Servo servo1;
void setup()
{
  servo1.attach(9);
  
  
}

void loop()
{ 
  int stat = analogRead(A0);
  angle = map(stat, 0, 1023, 0, 180);
  
  if (stat !=0)
  {
  servo1.write(angle);
    delay(1);
  }
  
}

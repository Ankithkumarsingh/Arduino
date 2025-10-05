// C++ code
//


char myArr[20];
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.readBytes(myArr,20);
  Serial.println(myArr);
  delay(1000);
}

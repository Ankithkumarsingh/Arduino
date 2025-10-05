void setup() {
  Serial.begin(15200);
  pinMode(13, OUTPUT);

}

void loop() {
  int buzzRead = analogRead(A0);
  Serial.println(buzzRead);
  int outPitch = map(buzzRead, 0, 1023, 250, 5000);

  if(buzzRead !=0){
    tone(13, outPitch);
  }else{
    noTone(13);
  }

}

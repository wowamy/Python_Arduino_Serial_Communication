void setup()
{
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available())
  {
    switch(Serial.read())
    {
      case '1':digitalWrite(13,HIGH);
               break;
      default: digitalWrite(13,LOW);
               break;
    }
  }
}

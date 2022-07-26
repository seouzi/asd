void setup()
{
    
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(10,INPUT);
}

void loop()
{ 
  int j=1000;
  if(digitalRead(10))
  {
    j=500;
  }
  else
  {
    j=j;
  }
  digitalWrite(5, 1);
  delay(j);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  delay(j);
  digitalWrite(5, 0);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  delay(j);
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  delay(j);
  digitalWrite(7, 0);
}

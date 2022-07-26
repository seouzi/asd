void setup()
{
    Serial.begin(9600);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);

}

void loop()
{ 
  int j=1000;
  int val = analogRead(A0);
  Serial.println(val);
  if(val>900)
  {
    j=100;
  }
  if(val<100)
  {
    j=1000;
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

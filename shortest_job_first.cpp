//Shortest Job First 

int x;
void setup()
{
  for(x=8;x<=13;x++)
  {
    pinMode(x, OUTPUT);
  }
  for(x=8;x<=13;x++)
  {
    digitalWrite(x, LOW);
  }
}

void loop()

{

  digitalWrite(9, HIGH);
  delay(1000); // Delay time for 1 second(s)
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  delay(2000); // Delay time for 2 second(s)
  digitalWrite(8, LOW);
  digitalWrite(led4, HIGH);
  delay(3000); // Delay time for 3 second(s)
  digitalWrite(10, LOW);
  digitalWrite(12, HIGH);
  delay(5000); // Delay time for 5 second(s)
  digitalWrite(12, LOW);
  digitalWrite(led3, HIGH);
  delay(8000); // Delay time for 8 second(s)
  digitalWrite(11, LOW);
  digitalWrite(13, HIGH);
  delay(10000); // Delay time for 10 second(s)
  digitalWrite(13, LOW);

}


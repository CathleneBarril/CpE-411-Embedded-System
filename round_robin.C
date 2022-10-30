//Round Robin

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
	//Loop to make the LED Lights up alternatively
	//and consecutive in a row
  for(x=8;x<=13;x++)		
  {
    digitalWrite(x, HIGH);
    delay(200);
    digitalWrite(x, LOW);
    delay(200);
  }
  
    //Loop to make the LED lights up backwards
  for(x=13;x>1;x--)			
  {
    digitalWrite(x, HIGH);
    delay(200);
    digitalWrite(x, LOW);
    delay(200);
  }
}

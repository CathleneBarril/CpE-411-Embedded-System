//First in First Out

int wait=500;

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  delay(10000); 			//LED 1 lights up for 10s
  digitalWrite(2, LOW);
  delay(wait);				
  digitalWrite(4, HIGH);
  delay(5000);				//LED 2 Lights up for 5s
  digitalWrite(4, LOW);
  delay(wait);
  digitalWrite(7, HIGH);
  delay(8000);				//LED 3 Lights up for 8s
  digitalWrite(7, LOW);
  delay(wait);
  digitalWrite(8, HIGH);
  delay(3000);				//LED 4 Lights up for 3s
  digitalWrite(8, LOW);
  delay(wait);
  digitalWrite(12, HIGH);
  delay(1000);				//LED 5 Lights up for 1s
  digitalWrite(12, LOW);
  delay(wait);
  digitalWrite(13, HIGH);
  delay(2000);				//LED 5 Lights up for 2s
  digitalWrite(13, LOW);
  delay(wait);
}

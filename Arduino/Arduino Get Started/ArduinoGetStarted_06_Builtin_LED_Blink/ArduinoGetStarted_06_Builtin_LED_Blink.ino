int LED_G=13;
int LED_R=25;
void setup() 
{
  pinMode(LED_G,OUTPUT);
  pinMode(LED_R,OUTPUT);
}

void loop() 
{
  digitalWrite(LED_R,HIGH);
  delay(500);
  digitalWrite(LED_R,LOW);
  delay(1000);
  digitalWrite(LED_G,HIGH);
  delay(500);
  digitalWrite(LED_G,LOW);
  delay(1000);
}

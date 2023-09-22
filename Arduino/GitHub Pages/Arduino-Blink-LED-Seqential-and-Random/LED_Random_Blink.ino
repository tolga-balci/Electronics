//const int led_1_pin = 11;
//const int led_2_pin = 12;
//const int led_3_pin = 13;
int led_rnd_pin;

void setup() {
//  pinMode(led_1_pin, OUTPUT);
//  pinMode(led_2_pin, OUTPUT);
//  pinMode(led_3_pin, OUTPUT);
}


void loop()
{
  led_rnd_pin = rand() % 13 + 11;
  for (int i = 0; i < 5 ; i++);
  {
  digitalWrite(led_rnd_pin, HIGH);
  delay(100);  
  digitalWrite(led_rnd_pin, LOW);
  }
}

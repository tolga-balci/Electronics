const int led_1_pin = 11;
const int led_2_pin = 12;
const int led_3_pin = 13;

void setup() {
  pinMode(led_1_pin, OUTPUT);
  pinMode(led_2_pin, OUTPUT);
  pinMode(led_3_pin, OUTPUT);
}

void loop() {
  for (int i = 0; i < 5; i++)
  {
  digitalWrite(led_1_pin, HIGH);
  delay(300);
  digitalWrite(led_1_pin, LOW);
  digitalWrite(led_2_pin, HIGH);
  delay(300);
  digitalWrite(led_2_pin, LOW);
  digitalWrite(led_3_pin, HIGH);
  delay(300); 
  digitalWrite(led_3_pin, LOW);
  }

}

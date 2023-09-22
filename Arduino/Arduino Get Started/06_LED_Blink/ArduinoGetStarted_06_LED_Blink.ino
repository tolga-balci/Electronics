// [DIGITAL] GND -> +30
// [PWM] -9 -> 25e
// RES 25c -> 20c
// LED DIODE 20a+ -> +23

void setup() 
{
  pinMode(25,OUTPUT);
  pinMode(LED_BUILTIN,OUTPUT);
}

void loop() 
{
  digitalWrite(25,HIGH);
  delay(500);
  digitalWrite(25,LOW);
  delay(1000);
  digitalWrite(LED_BUILTIN,HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN,LOW);
  delay(500);
}

const int read_pin = 2;

void setup() {

  Serial.begin(9600);
  pinMode(read_pin, INPUT);

}

void loop() {
  int pin_state;
  pin_state = digitalRead(read_pin);
  Serial.println(pin_state);

}

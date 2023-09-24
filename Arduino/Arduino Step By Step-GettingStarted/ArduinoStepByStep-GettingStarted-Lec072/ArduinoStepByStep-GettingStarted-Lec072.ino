int button_state = 0;

void setup() {
  pinMode(2, INPUT);
  Serial.begin(9600);
}

void loop() {
  button_state = digitalRead(2);
  
  if (button_state == HIGH){
    Serial.println("Button is pressed.");
  }
  else{
    Serial.println("Button is released.");
  }

}

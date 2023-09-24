// When the push button is pressed, the LED is lit.
// Serial console outputs the button state.
// The code is the same as Lec072, wiring is different.

int button_state = 0;

void setup() {
  pinMode(2, INPUT);
  Serial.begin(9600);
}

void loop() {
  button_state = digitalRead(2);
  

  if (button_state == HIGH){
    Serial.println("Button is pressed. LED is ON.");

  } else {
    Serial.println("Button is released. LED is OFF.");
     
  }

} 

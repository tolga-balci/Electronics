int button_pressed = 1;
// since we don't have any wirings on the Arduino now
// button_pressed simulates a button reading from the breadboard.

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  switch (button_pressed){
    case 1:
      Serial.println("Button 1 is pressed.");
    break;
    // we "break" from the case statement because
    // we don't want to lose resources on executing the other "cases"
    // which we know will not be executed. 
    case 2:
      Serial.println("Button 2 is pressed.");
    break;
    default:
      Serial.println("I don't understand which button is pressed."); 
    break;
    // default state is optional. 
    // if you want to use it, place it after the last case statement('s break).
    // if you don't want to use it, only the matched "case" statement is executed.
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}

// Blink LED to send SOS signal ...---...

void setup() {

  pinMode(8, OUTPUT);

}

void loop() {
  // delay between letters = len(dot)
  // delay between words = len(line  )
  S();
  delay(200);
  O();
  delay(200);
  S();
  delay(800);
}

void S() {
 int dot = 0;
 while (dot <  3){
 digitalWrite(8, HIGH);
 delay(200);
 digitalWrite(8, LOW);
 delay(200);
 dot++;
 }
}

void O() {
 int line=0;
 while (line <  3){
 digitalWrite(8, HIGH);
 delay(600);
 digitalWrite(8, LOW);
 delay(200);
 line++;
 }

}
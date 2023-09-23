void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  // the for loop will execute indefinitely even after the counter is reached
  // because it is in the loop function
  // normally it should be under setup()
int counter;

for (counter = 0; counter < 20; counter++){
  if (counter < 10){
    Serial.print(counter);
    Serial.print(", ");
    Serial.println("Counter is less than 20");
  }
  else{
    Serial.print(counter);
    Serial.print(", ");
    Serial.println("Counter is not less than 20");
  }
}
delay(500);

}

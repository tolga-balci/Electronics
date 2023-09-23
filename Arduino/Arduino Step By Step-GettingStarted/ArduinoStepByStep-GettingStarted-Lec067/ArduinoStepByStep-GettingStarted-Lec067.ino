int counter = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 Serial.println(counter);
 Serial.println(",");
if (counter < 10)
  {
  Serial.println("Counter is less than 10.");
  }
  else
  {
    Serial.println("Counter is not less than 10;");
  }
delay(500);
counter++;
}
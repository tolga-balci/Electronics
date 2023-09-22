void setup() 
{
Serial.begin(9600);
}

void loop() 
{
int y1=analogRead(A0);
int y2=analogRead(A1);
int y3=analogRead(A2);
int y4=analogRead(A3);

Serial.print(y1);
Serial.print(" ");
Serial.print(y2);
Serial.print(" ");
Serial.print(y3);
Serial.print(" ");
Serial.println(y4);

delay(100);

}

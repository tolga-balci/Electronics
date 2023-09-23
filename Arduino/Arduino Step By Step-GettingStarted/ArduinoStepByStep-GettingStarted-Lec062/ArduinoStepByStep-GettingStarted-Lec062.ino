void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Simple calculation using functions");

}

void loop() {
  // put your main code here, to run repeatedly:
int number_1 = 15;
int number_2 = 22;
Serial.println(do_a_calc(number_1, number_2));
}

int do_a_calc(int number_1, int number_2){
int result = number_1 + number_2;
return result;
}
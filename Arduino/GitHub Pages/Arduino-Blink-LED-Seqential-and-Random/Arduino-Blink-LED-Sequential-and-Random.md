# Arduino-Blink-LED-Seqential-and-Random

So here is an absolute beginner project to blink LEDs connected to an Arduino board.

If you'd like to follow this one, please make sure that you can at least light up an LED and you are comfortable with at least n00b-level C (like me.)

## Wiring

I connected 3 x LEDs and 3 x 320 &Omega; resistors to a breadboard as you will see in [this circuit](https://www.tinkercad.com/things/9Vy5CbOgxuD) on Tinkercad.

The connections are on the DIGITAL side of the Arduino and are:
- GND to the - line of the breadboard
- GPIO 13 to LED_1 (red) anode
- GPIO 12 to LED_2 (orange) anode
- GPIO 11 to LED_3 (white) anode
- One leg of 320 &Omega; resistor to LED's cathode (for each LED)

## Sequential Blink

Now that our wiring is complete, we will just open up our Arduino IDE and run the LED Sequential Blink code:

```
const int led_1_pin = 11;
const int led_2_pin = 12;
const int led_3_pin = 13;

void setup() {
  pinMode(led_1_pin, OUTPUT);
  pinMode(led_2_pin, OUTPUT);
  pinMode(led_3_pin, OUTPUT);
}

void loop() {
  for (int i = 0; i < 5; i++)
  {
  digitalWrite(led_1_pin, HIGH);
  delay(300);
  digitalWrite(led_1_pin, LOW);
  digitalWrite(led_2_pin, HIGH);
  delay(300);
  digitalWrite(led_2_pin, LOW);
  digitalWrite(led_3_pin, HIGH);
  delay(300); 
  digitalWrite(led_3_pin, LOW);
  }

}
```

## Random Blink

We will create another integer led pin and call it a led_rnd_pin. For the sake of simplicity we will use the GPIO ports 11, 12 and 13.
We will then assign a random number between 11 and 13 so that one of three LEDs will randomly blink. Of course, if you connected your LEDs to different GPIO ports - say, 2, 3, 4 - change the code accordingly; to say ``` led_rnd_pin = rand() % 2 + 4;```

```
int led_rnd_pin;

void setup() {
}


void loop()
{
  led_rnd_pin = rand() % 13 + 11;
  for (int i = 0; i < 5 ; i++);
  {
  digitalWrite(led_rnd_pin, HIGH);
  delay(100);  
  digitalWrite(led_rnd_pin, LOW);
  }
}
```

The above code will work. However, the LEDs will receive a lower voltage and will appear dim because we did not initialize them for output.
Assuming that we are using the GPIO ports 11, 12 and 13, our code will look as follows:

```
const int led_1_pin = 11;
const int led_2_pin = 12;
const int led_3_pin = 13;
int led_rnd_pin;

void setup() {
  pinMode(led_1_pin, OUTPUT);
  pinMode(led_2_pin, OUTPUT);
  pinMode(led_3_pin, OUTPUT);
}


void loop()
{
  led_rnd_pin = rand() % 13 + 11;
  for (int i = 0; i < 5 ; i++);
  {
  digitalWrite(led_rnd_pin, HIGH);
  delay(100);  
  digitalWrite(led_rnd_pin, LOW);
  }
}
```

# Sketches

Ready-to-run sketches are in the project folder. 

If you followed along so far, you should have realized an interesting thing here: When the LED connected to the GPIO pin 13 blinks, the LED on the Arduino board also blinks. This is because GPIO 13 also controls the internal built-in LED on the Arduino board.

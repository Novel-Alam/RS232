#include <TimerOne.h>

volatile long count = 0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Timer1.initialize(1000000);
  Timer1.attachInterrupt(func);
  Serial.begin(9600);
}

void func() {
  Timer1.attachInterrupt(func1);
  count++;
  Serial.println(count);
}

void func1() {
  count++;
  Serial.println(count+69);
  Timer1.attachInterrupt(func);

}


void loop() {
  // put your main code here, to run repeatedly:

}

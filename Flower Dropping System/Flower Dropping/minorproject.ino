#include<Servo.h>
Servo s1;
void setup() {
  // put your setup code here, to run once:
  s1.attach(3);
}

void loop() {
  // put your main code here, to run repeatedly:
  s1.write(0);
  delay(1000);
  s1.write(130);
  delay(1000);
}

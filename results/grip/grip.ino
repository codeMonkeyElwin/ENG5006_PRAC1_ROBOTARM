#include <Servo.h>
Servo grip;
void setup() {
 pinMode(12, OUTPUT);
 grip.attach(12);
}

void loop() {
  grip.write(140);
  delay(2000);
  grip.write(160);
  delay(2000);
}

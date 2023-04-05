/*
 * rosserial Servo Control Example
 *
 * This sketch demonstrates the control of hobby R/C servos
 * using ROS and the arduiono
 * 
 * For the full tutorial write up, visit
 * www.ros.org/wiki/rosserial_arduino_demos
 *
 * For more information on the Arduino Servo Library
 * Checkout :
 * http://www.arduino.cc/en/Reference/Servo
 */

#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include <WProgram.h>
#endif

#include <Servo.h> 
#include <ros.h>

ros::NodeHandle  nh;

Servo servo1;
Servo servo2;
Servo servo3;
Servo grip;

void setup(){
  pinMode(13, OUTPUT);

  nh.initNode();
  
  servo1.attach(9); //attach it to pin 9
  servo2.attach(10);
  servo3.attach(11);
  grip.attach(12);
}

void loop(){
  servo1.write(40);
  servo2.write(0);
  servo3.write(90);
  grip.write(140);
  delay(2000);

  servo1.write(80);
  servo2.write(100);
  servo3.write(70);
  grip.write(160);
  delay(2000);
  
  servo1.write(120);
  servo2.write(80);
  servo3.write(90);
  grip.write(180);
  delay(2000);

  servo1.write(80);
  servo2.write(40);
  servo3.write(110);
  grip.write(160);
  delay(2000);
  

}
/*
Channel: RAJJ YT
watch Full Video On YouTube :-
https://youtu.be/dNknidnKiEM
Codes + Library + circuit:-
https://github.com/usmanrajj/Servo-motor.git
*/
#include <Servo_ESP32.h>

int servo_Pin = 12;     //Attach servo with G12 

Servo_ESP32 servo;  

void setup() {
  Serial.begin(115200);       //initialize Serial Monitor
  servo.attach(servo_Pin);
}

void loop() {
  for(int angle = 0; angle <= 180;angle++) {
  servo.write(angle);         // Rotate Servo 0---180
  Serial.println(angle);      // Print angles on Serial Monitor
  delay(15);
  }
  for(int angle = 180; angle >= 0; angle--) {
  servo.write(angle);         // Rotate Servo 180---0
  Serial.println(angle);      // Print angles on Serial Monitor
  delay(15);
  }
}

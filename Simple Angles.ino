/*Channel: RAJJ YT
watch Full Video On YouTube :-
https://youtu.be/dNknidnKiEM
Circuit + library :-
https://github.com/usmanrajj/Servo-motor.git
*/
#include <Servo_ESP32.h>

int servoPin = 12;    //Attach Servo with G12

Servo_ESP32 servo;

void setup() {
    Serial.begin(115200);
    servo.attach(servoPin);
}
void loop() {
  int angle=0;
  servo.write(angle);
  Serial.println(angle);
  delay(1000);
  angle=90;
  servo.write(angle);
  Serial.println(angle);
  delay(1000);
  angle=180;
  servo.write(angle);
  Serial.println(angle);
  delay(1000);
  angle=90;
  servo.write(angle);
  Serial.println(angle);
  delay(1000);
  }

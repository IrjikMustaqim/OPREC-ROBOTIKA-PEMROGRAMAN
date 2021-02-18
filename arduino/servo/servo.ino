

#include <Servo.h>

Servo servo;  


int pos = 0;   

void setup() {
  servo.attach(6);  
}

void loop() {
  servo.write(180);
  delay(1000);
  servo.write(0);
  delay(1000);  
}

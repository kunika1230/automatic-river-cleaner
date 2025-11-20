#include <Servo.h>
int Servo1Pos;
int Servo2Pos;
int Servo3Pos;
int Servo4Pos;

Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;




void setup() {
  // Attach servos to assigned pins
  Servo1.attach(9);
  Servo2.attach(8);
   Servo3.attach(10);
   Servo4.attach(11);
}

 

void loop() {

    Servo3.write(120); // Rotate servo1 to 90 degrees
    Servo4.write(120); // Rotate servo1 to 90 degrees

  delay(2000); // Wait for a second to see the movement
  
  // Move servo 1 from 0 to 180 degrees
  for (Servo1Pos=0;Servo1Pos<=180; Servo1Pos ++) {
    Servo1.write(Servo1Pos);
    Servo2Pos = 180 -Servo1Pos;
    Servo2.write(Servo2Pos);
    delay(50); // Wait for the servo to reach the position
  }
delay(3000);
Servo3.write(0); // Return servo1 to 0 degrees
Servo4.write(0); // Return servo1 to 0 degrees

  delay(2000); // Wait before restarting the loop
  
  // Move servo 2 from 180 to 0 degrees
  for (Servo1Pos= 180;Servo1Pos>= 0; Servo1Pos--) {
    Servo1.write(Servo1Pos);
    Servo2.write(Servo2Pos);
    Servo2Pos= Servo2Pos + 1;
    delay(50);
  }
delay(3000);

 
 
}

#include <Servo.h>

Servo servo1;          // Define thumb servo
Servo servo2;          // Define index servo
Servo servo3;
Servo servo4;
Servo servo5;

void setup() { 
  servo1.attach(7);  // Set thumb servo to digital pin 2
  servo2.attach(8);  // Set index servo to digital pin 3
  servo3.attach(9);
  servo4.attach(10);
  servo5.attach(11);
  
} 

void loop() {            // Loop through motion tests
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  servo5.write(0);
 
  
 
}
// Motion to set the servo into "virtual" 0 position: alltovirtual
void alltovirtual() {         
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  servo5.write(90);
}
// Motion to set the servo into "rest" position: alltorest




// Motion to set the servo into "max" position: alltomax
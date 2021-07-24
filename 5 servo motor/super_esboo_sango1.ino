
// C++ code
//
#include <Servo.h>

int servoPin1 = 3;
int servoPin2 = 5;
int servoPin3 = 6;
int servoPin4 = 9;
int servoPin5 = 11;

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5; 

int angle = 1;   // servo position in degrees

void setup()
{
  servo1.attach(servoPin1);
  servo2.attach(servoPin2);
  servo3.attach(servoPin3);
  servo4.attach(servoPin4);
  servo5.attach(servoPin5);
}


void loop()
{
  // scan from 0 to 90 degrees
  for(angle = 1; angle < 89; angle++)  
  {                                  
    servo1.write(angle);               
    delay(15);   
    servo2.write(angle);               
    delay(15);
    servo3.write(angle);               
    delay(15); 
    servo4.write(angle);               
    delay(15);
    servo5.write(angle);               
    delay(10);   
  }
  // now scan back from 90 to 0 degrees
  for(angle = 89; angle > 1; angle--)    
  {                                
    servo1.write(angle);           
    delay(15);   
    servo2.write(angle);               
    delay(15);   
    servo3.write(angle);               
    delay(15);
    servo4.write(angle);               
    delay(15);
    servo5.write(angle);               
    delay(10);   
  }
} 

/*
  created by O.VINIL REDDY 
  EMAIL ID - vinil.reddy36@gmail.com
  This program describes how to use the Motion library
*/
#include <movement.h>
/*
ROBOT ORIENTATION FOR 2 WHEEL DRIVE (2WD)
         FRONT

    MOTOR1  MOTOR2  (2WD)
      
         BACK

PWM PINS FOR UNO OR NANO - 3,5,6,9,10,11
*/

Motion_2WD motion(2,3,4,5);
/*
 Structure

NOTE : *******"IF YOU WANT TO CONTROL MOTOR SPEED THEN ALL THE POSITIVES PINS OF THE MOTOR SHOULD BE CONNECTED TO "PWM PINS" OF ARDUINO*******

 motion(motor_one_positive_pin, motor_one_negative_pin,motor_two_positive_pin, motor_two_negative_pin);


*/

void setup(){
Serial.begin(9600);
}


void loop()
{

 /*
 * AVAILABLE FUNCTION
 motion.forward();
 motion.backward();
 motion.left();
 motion.right();

below functions are used for speed control 
NOTE : *******"IF YOU WANT TO CONTROL MOTOR SPEED THEN ALL THE POSITIVES PINS OF THE MOTOR SHOULD BE CONNECTED TO "PWM PINS" OF ARDUINO*******

 motion.forward_with_speed(int speed); SPEED: 0 TO 255
 motion.backward_with_speed(int speed);
 motion.left_with_speed(int speed);
 motion.right_with_speed(int speed);
 motion.Stop();
*/

}

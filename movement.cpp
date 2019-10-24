/*
  movements.h - Library for basic movements for four wheeled robot
  created by O.vinil reddy 24th OCT 2019

*/

#include "Arduino.h"
#include "movement.h"

Motion_4WD::Motion_4WD(int motor_one_positive,int motor_one_negative,int motor_two_positive,int motor_two_negative,int motor_three_positive,int motor_three_negative,int motor_four_positive,int motor_four_negative)
{
	pinMode(motor_one_positive, OUTPUT);
	pinMode(motor_one_negative, OUTPUT);
        pinMode(motor_two_positive, OUTPUT);
	pinMode(motor_two_negative, OUTPUT);
	pinMode(motor_three_positive, OUTPUT);
	pinMode(motor_three_negative, OUTPUT);
	pinMode(motor_four_positive, OUTPUT);
	pinMode(motor_four_negative, OUTPUT);
	_motor_one_positive = motor_one_positive;
        _motor_one_negative = motor_one_negative;
        _motor_two_positive = motor_two_positive;
	_motor_two_negative = motor_two_negative;
        _motor_three_negative = motor_three_negative;
	_motor_three_positive = motor_three_positive;
        _motor_four_negative = motor_four_negative;
	_motor_four_positive = motor_four_positive;
}

void Motion_4WD::forward()
{

	digitalWrite(_motor_one_positive, HIGH);
	digitalWrite(_motor_one_negative, LOW);
	digitalWrite(_motor_two_positive, HIGH);
	digitalWrite(_motor_two_negative, LOW);
	digitalWrite(_motor_three_positive, HIGH);
	digitalWrite(_motor_three_negative, LOW);
	digitalWrite(_motor_four_positive, HIGH);
	digitalWrite(_motor_four_negative, LOW);

}

void Motion_4WD::backward()
{
	digitalWrite(_motor_one_positive, LOW);
	digitalWrite(_motor_one_negative, HIGH);
	digitalWrite(_motor_two_positive, LOW);
	digitalWrite(_motor_two_negative, HIGH);
	digitalWrite(_motor_three_positive, LOW);
	digitalWrite(_motor_three_negative, HIGH);
	digitalWrite(_motor_four_positive, LOW);
	digitalWrite(_motor_four_negative, HIGH);
}

void Motion_4WD::left()
{
	digitalWrite(_motor_one_positive, LOW);
	digitalWrite(_motor_one_negative, HIGH);
	digitalWrite(_motor_two_positive, HIGH);
	digitalWrite(_motor_two_negative, LOW);
	digitalWrite(_motor_three_positive, LOW);
	digitalWrite(_motor_three_negative, HIGH);
	digitalWrite(_motor_four_positive, HIGH);
	digitalWrite(_motor_four_negative, LOW);
}

void Motion_4WD::right()
{
	digitalWrite(_motor_one_positive, HIGH);
	digitalWrite(_motor_one_negative, LOW);
	digitalWrite(_motor_two_positive, LOW);
	digitalWrite(_motor_two_negative, HIGH);
	digitalWrite(_motor_three_positive, HIGH);
	digitalWrite(_motor_three_negative, LOW);
	digitalWrite(_motor_four_positive, LOW);
	digitalWrite(_motor_four_negative, HIGH);
}

void Motion_4WD::forward_with_speed(int speed)
{
	analogWrite(_motor_one_positive, speed);
	digitalWrite(_motor_one_negative, LOW);
	analogWrite(_motor_two_positive, speed);
	digitalWrite(_motor_two_negative, LOW);
	analogWrite(_motor_three_positive, speed);
	digitalWrite(_motor_three_negative, LOW);
	analogWrite(_motor_four_positive, speed);
	digitalWrite(_motor_four_negative, LOW);
}

void Motion_4WD::backward_with_speed(int speed)
{
	analogWrite(_motor_one_positive, ((speed-255)*-1));
	digitalWrite(_motor_one_negative, HIGH);
	analogWrite(_motor_two_positive, ((speed-255)*-1));
	digitalWrite(_motor_two_negative, HIGH);
	analogWrite(_motor_three_positive, ((speed-255)*-1));
	digitalWrite(_motor_three_negative, HIGH);
	analogWrite(_motor_four_positive, ((speed-255)*-1));
	digitalWrite(_motor_four_negative, HIGH);
}

void Motion_4WD::left_with_speed(int speed)
{
	analogWrite(_motor_one_positive, ((speed-255)*-1));
	digitalWrite(_motor_one_negative, HIGH);
	analogWrite(_motor_two_positive, speed);
	digitalWrite(_motor_two_negative, LOW);
	analogWrite(_motor_three_positive, ((speed-255)*-1));
	digitalWrite(_motor_three_negative, HIGH);
	analogWrite(_motor_four_positive, speed);
	digitalWrite(_motor_four_negative, LOW);
}

void Motion_4WD::right_with_speed(int speed)
{
	analogWrite(_motor_one_positive, speed);
	digitalWrite(_motor_one_negative, LOW);
	analogWrite(_motor_two_positive, ((speed-255)*-1));
	digitalWrite(_motor_two_negative, HIGH);
	analogWrite(_motor_three_positive, speed);
	digitalWrite(_motor_three_negative, LOW);
	analogWrite(_motor_four_positive, ((speed-255)*-1));
	digitalWrite(_motor_four_negative, HIGH);
}

void Motion_4WD::Stop()
{
	digitalWrite(_motor_one_positive, LOW);
	digitalWrite(_motor_one_negative, LOW);
	digitalWrite(_motor_two_positive, LOW);
	digitalWrite(_motor_two_negative, LOW);
	digitalWrite(_motor_three_positive, LOW);
	digitalWrite(_motor_three_negative, LOW);
	digitalWrite(_motor_four_positive, LOW);
	digitalWrite(_motor_four_negative, LOW);
}
 

Motion_2WD::Motion_2WD(int motor_one_positive,int motor_one_negative,int motor_two_positive, int motor_two_negative)
{
	pinMode(motor_one_positive, OUTPUT);
	pinMode(motor_one_negative, OUTPUT);
        pinMode(motor_two_positive, OUTPUT);
	pinMode(motor_two_negative, OUTPUT);
	_motor_one_positive = motor_one_positive;
        _motor_one_negative = motor_one_negative;
        _motor_two_positive = motor_two_positive;
	_motor_two_negative = motor_two_negative;
}

void Motion_2WD::forward()
{

	digitalWrite(_motor_one_positive, HIGH);
	digitalWrite(_motor_one_negative, LOW);
	digitalWrite(_motor_two_positive, HIGH);
	digitalWrite(_motor_two_negative, LOW);

}

void Motion_2WD::backward()
{
	digitalWrite(_motor_one_positive, LOW);
	digitalWrite(_motor_one_negative, HIGH);
	digitalWrite(_motor_two_positive, LOW);
	digitalWrite(_motor_two_negative, HIGH);
}

void Motion_2WD::left()
{
	digitalWrite(_motor_one_positive, LOW);
	digitalWrite(_motor_one_negative, HIGH);
	digitalWrite(_motor_two_positive, HIGH);
	digitalWrite(_motor_two_negative, LOW);
}

void Motion_2WD::right()
{
	digitalWrite(_motor_one_positive, HIGH);
	digitalWrite(_motor_one_negative, LOW);
	digitalWrite(_motor_two_positive, LOW);
	digitalWrite(_motor_two_negative, HIGH);
}

void Motion_2WD::forward_with_speed(int speed)
{
	analogWrite(_motor_one_positive, speed);
	digitalWrite(_motor_one_negative, LOW);
	analogWrite(_motor_two_positive, speed);
	digitalWrite(_motor_two_negative, LOW);
}

void Motion_2WD::backward_with_speed(int speed)
{
	analogWrite(_motor_one_positive, ((speed-255)*-1));
	digitalWrite(_motor_one_negative, HIGH);
	analogWrite(_motor_two_positive, ((speed-255)*-1));
	digitalWrite(_motor_two_negative, HIGH);
}

void Motion_2WD::left_with_speed(int speed)
{
	analogWrite(_motor_one_positive, ((speed-255)*-1));
	digitalWrite(_motor_one_negative, HIGH);
	analogWrite(_motor_two_positive, speed);
	digitalWrite(_motor_two_negative, LOW);

}

void Motion_2WD::right_with_speed(int speed)
{
	analogWrite(_motor_one_positive, speed);
	digitalWrite(_motor_one_negative, LOW);
	analogWrite(_motor_two_positive, ((speed-255)*-1));
	digitalWrite(_motor_two_negative, HIGH);

}

void Motion_2WD::Stop()
{
	digitalWrite(_motor_one_positive, LOW);
	digitalWrite(_motor_one_negative, LOW);
	digitalWrite(_motor_two_positive, LOW);
	digitalWrite(_motor_two_negative, LOW);
}
        
               
        

/*
  movements.h - Library for basic movements for four wheeled robot
  created by O.vinil reddy 24th OCT 2019

*/
#ifndef movement_h
#define movement_h

#include "Arduino.h"

class Motion_4WD
{
  public:
    Motion_4WD(int motor_one_positive,int motor_one_negative,int motor_two_positive,int motor_two_negative,int motor_three_positive,int motor_three_negative,int motor_four_positive,int motor_four_negative);
    void forward();
    void backward();
    void left();
    void right();
    void forward_with_speed(int speed);
    void backward_with_speed(int speed);
    void left_with_speed(int speed);
    void right_with_speed(int speed);
    void Stop();
  private:
    int _motor_one_positive;
    int _motor_one_negative;
    int _motor_two_positive;
    int _motor_two_negative;
    int _motor_three_positive;
    int _motor_three_negative;
    int _motor_four_positive;
    int _motor_four_negative;
    
};
   

class Motion_2WD
{
  public:
    Motion_2WD(int motor_one_positive,int motor_one_negative,int motor_two_positive,int motor_two_negative);
    void forward();
    void backward();
    void left();
    void right();
    void forward_with_speed(int speed);
    void backward_with_speed(int speed);
    void left_with_speed(int speed);
    void right_with_speed(int speed);
    void Stop();
  private:
    int _motor_one_positive;
    int _motor_one_negative;
    int _motor_two_positive;
    int _motor_two_negative;    
};
#endif

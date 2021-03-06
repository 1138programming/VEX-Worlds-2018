#ifndef BASE_H
#define BASE_H

#include "main.h"

class Base {
  private:
    static Base* instance;
    Gyro gyro;
    Ultrasonic ultrasonic;

    // Left base motors
    Motor* leftFrontBaseMotor;
    Motor* leftMiddleBaseMotor;
    Motor* leftRearBaseMotor;

    // Right base motors
    Motor* rightFrontBaseMotor;
    Motor* rightMiddleBaseMotor;
    Motor* rightRearBaseMotor;

    PIDController* leftController;
    PIDController* rightController;

    float multiplier;

    int encoderReference;

    Base();
  public:
    void moveBase(int left, int right);
    bool moveBaseTo(int target, int logValue = 750, int threshold = 10);
    bool turnBaseTo(int target, int logValue = 180, int threshold = 10, int direction = 0);
    void setLeftSetpoint(int setpoint);
    void setRightSetpoint(int setpoint);
    void lockLeft();
    void lockRight();
    void loopRight();
    void loopLeft();
    int getLeftSetpoint();
    int getRightSetpoint();
    bool leftAtSetpoint();
    bool rightAtSetpoint();
    void resetGyro();
    int getGyro();
    void resetEncoders();
    int getLeftIME();
    int getRightIME();
    int getUltrasonic();
    void setMultiplier(float multiplier);
    void setReference();
    static Base* getInstance();
};

#endif

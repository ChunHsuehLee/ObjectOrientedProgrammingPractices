#ifndef AVERAGE_CAR_HPP
#define AVERAGE_CAR_HPP

class Average_car{
public:
    Average_car();
    void turnON();
    void turnOff();
    void gas(int accTime);
    void drive(int driveTime);
    void brake(int brakeTime);
    void headlights();
    void showState();
    float getSpeed();
    // set Max Speed to n times the original value
    void setMaxSpeed(float times);
    float getAcc();
    // set Acceleration to n times the original value
    void setAcc(float times);
    float getBrake();
    // set Brake Efficiency to n times the original value
    void setBrake(float times);
protected:
    float maxSpeed;
    float acc;
    float brakeEff;
    float odom;
    float home_dist;
    float curSpeed;
    bool engineState;
    bool lightState;

    // 0->park, 1->drive, -1->reverse
    int currentGear;
};

#endif // AVERAGE_CAR_HPP
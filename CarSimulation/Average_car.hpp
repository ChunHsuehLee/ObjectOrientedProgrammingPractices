#ifndef AVERAGE_CAR_HPP
#define AVERAGE_CAR_HPP

#include <tuple>
#include <string>

struct ansStruct {
    bool s_engineState;
    bool s_lightState;
    float s_curSpeed;
    float s_odom;
    float s_home_dist;
    int s_currentGear;

    bool operator== (const ansStruct& rhs) const {   
        if(this->s_engineState != rhs.s_engineState){
            return false;
        }
        if(this->s_lightState != rhs.s_lightState){
            return false;
        }
        if(this->s_curSpeed != rhs.s_curSpeed){
            return false;
        }
        if(this->s_odom != rhs.s_odom){
            return false;
        }
        if(this->s_home_dist != rhs.s_home_dist){
            return false;
        }
        if(this->s_currentGear != rhs.s_currentGear){
            return false;
        }
        return true;
    }
};

class Average_car{
public:
    Average_car();
    void turnON();
    void turnOff();
    void gas(int accTime);
    void drive(int driveTime);
    void brake(int brakeTime);
    void headlights();
    ansStruct showState();
    // void showState();
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
    ansStruct ans;
    // std::tuple<bool, bool, float, float, float, std::string> stateTuple;
    // 0->park, 1->drive, -1->reverse
    int currentGear;
};

#endif // AVERAGE_CAR_HPP
#include <iostream>
#include <cmath>
#include "Average_car.hpp"

using namespace std;

Average_car::Average_car(){
    maxSpeed = 50;
    acc = 5;
    // cout << "in parent "<< acc << endl;
    brakeEff = -10;
    odom = 0;
    home_dist = 0;
    curSpeed = 0;
    engineState = false;
    lightState = false;
    currentGear = 0;
}

void Average_car::turnON(){
    engineState = true;
}

void Average_car::turnOff(){
    if(curSpeed == 0){
        engineState = false;
    }
    else{
        cout << "Cannot turn off engine while the car is moving." << endl;
    }
}

void Average_car::gas(int accTime){
    if(engineState){
        curSpeed += accTime * acc;
        if(currentGear == 0) currentGear = 1;
    }
    // cout << accTime << " " << acc << endl;
    curSpeed = min(curSpeed, maxSpeed);
    return;
}

void Average_car::drive(int driveTime){
    if(currentGear == 0){
        cout << " The car is at park state, please accerate first." << endl;
    }
    else{
        home_dist += currentGear * driveTime * curSpeed;
        odom += driveTime * curSpeed;
    } 
}

void Average_car::brake(int brakeTime){
    curSpeed += brakeTime * brakeEff;
    if(curSpeed <= 0) currentGear = 0;
    curSpeed = max(static_cast<float>(0), curSpeed);
    return;
}

void Average_car::headlights(){
    lightState = !lightState;
}

void Average_car::showState(){
    cout << "Current car state: " << endl;
    string engineString = engineState ? "on." : "off.";
    cout << "Engine is " << engineString << endl;
    string headlightsString = lightState ? "on." : "off.";
    cout << "Headlights are " << headlightsString << endl;
    cout << "Current Speed is " << getSpeed() << endl;
    cout << "Odometer: " << odom << " m" << endl;
    cout << "Distance from home: " << abs(home_dist) << " m" << endl;
    string gearString;
    // cout << "Gear " << currentGear << endl;
    switch(currentGear) {
        case 1 :
            gearString = "Drive"; 
            break;
        case 0 :
            gearString = "Park";
            break;
        case -1:
            gearString = "Reverse";
            break;
        default:
            gearString = "Invalid";
    }
    cout << "Gear state: " << gearString << endl;
    cout << endl;   
}
float Average_car::getSpeed(){
    return curSpeed;
}
void Average_car::setMaxSpeed(float times){
    maxSpeed *= times;
    return;
}
float Average_car::getAcc(){
    return acc;
}
void Average_car::setAcc(float times){
    // cout << acc << " " << times << endl;
    acc *= times;
    return;
}
float Average_car::getBrake(){
    return brakeEff;
}
void Average_car::setBrake(float times){
    brakeEff *= times;
    return;
}
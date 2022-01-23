#include <iostream>
#include "Fancy_car.hpp"

using namespace std;

Fancy_car::Fancy_car()
: Average_car()
{
    setMaxSpeed(2);
    setAcc(1);
    setBrake(1);
}

void Fancy_car::changeGear(string gearState){
    if(curSpeed != 0){
        cout << "Cannot change gear state, please stop the car first." << endl;
    }
    else{
        if(gearState == "drive"){
            currentGear = 1;
        }
        else if(gearState == "reverse"){
            currentGear = -1;
            // cout << currentGear << endl;
        }
    }
}

void horn(){
    cout << "beep beep" << endl;
}
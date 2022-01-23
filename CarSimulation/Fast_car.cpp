#include <iostream>
#include "Fast_car.hpp"

using namespace std;

Fast_car::Fast_car() 
: Average_car()
{
    // cout << acc << endl;
    setMaxSpeed(3);
    setAcc(2);
    // cout << acc << endl;
    // cout << maxSpeed << endl;
    setBrake(1);
}
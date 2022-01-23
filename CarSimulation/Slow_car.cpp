#include <iostream>
#include "Slow_car.hpp"

using namespace std;

Slow_car::Slow_car()
: Average_car()
{
    setMaxSpeed(0.75);
    setAcc(0.75);
    setBrake(2);
}
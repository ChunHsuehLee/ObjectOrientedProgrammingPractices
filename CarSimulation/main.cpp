#include <iostream>
#include "Slow_car.hpp"
#include "Fast_car.hpp"
#include "Fancy_car.hpp"

using namespace std;

int main(void){
    Fast_car car_1 = Fast_car();
    car_1.turnON();
    car_1.gas(1);
    car_1.drive(10);
    car_1.brake(3);
    car_1.turnOff();
    car_1.showState();


    Fancy_car car_2 = Fancy_car();
    car_2.headlights();
    car_2.turnON();
    car_2.changeGear("reverse");
    // car_2.gas(1);
    // car_2.drive(10);
    car_2.showState();
    return 0;
}
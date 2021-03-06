#include <iostream>
#include <math.h>
#include "Slow_car.hpp"
#include "Fast_car.hpp"
#include "Fancy_car.hpp"

using namespace std;

int main(void){
    Fast_car fast_car = Fast_car();
    Slow_car slow_car = Slow_car();
    Fancy_car fancy_car = Fancy_car();

    // 1. All three cars start their engines
    fast_car.turnON();
    slow_car.turnON();
    fancy_car.turnON();

    // 2. `FastCar` and `FancyCar` turn on their lights
    fast_car.headlights();
    fancy_car.headlights();

    // 3. All three cars gas for 11 seconds
    slow_car.gas(11);
    fast_car.gas(11);
    fancy_car.gas(11);

    // 4. All three cars drive for 30 seconds
    slow_car.drive(30);
    fast_car.drive(30);
    fancy_car.drive(30);

    // 5. `FancyCar` brakes for 5 seconds, slowing down in order to enjoy the scenery around it, then continues driving for 3 seconds
    fancy_car.brake(5);
    fancy_car.drive(3);

    // 6. `SlowCar` brakes for 6 seconds, curious what `FancyCar` is looking at
    slow_car.brake(6);

    // 7. `FancyCar` realizes they left their lucky keychain behind and immediately brakes to a full stop, changes to reverse, gases for 20 seconds, then drives for an additional 30 seconds
    // brake to full stop
    fancy_car.brake(static_cast<int>(ceil(abs(fancy_car.getSpeed() / fancy_car.getBrake()))));
    //change gear to reverse
    fancy_car.changeGear("reverse");
    // gas for 20 sec
    fancy_car.gas(20);
    // drive for 30 sec
    fancy_car.drive(30);
    
    // 8. After realizing headlights aren't that useful while going in reverse, `FancyCar` turns off its lights
    fancy_car.headlights();
    
    // 9. `FastCar`, all the while, continues driving for another 30 seconds, gasses 20 seconds, and drives an addition 60 seconds
    fast_car.drive(30);
    fast_car.gas(20);
    fast_car.drive(60);
    
    // 10. `SlowCar` feels lonely (now that both cars have left it behind), comes to a full stop, then turns off its engine
    slow_car.brake(static_cast<int>(ceil(slow_car.getSpeed() / slow_car.getBrake())));
    slow_car.turnOff();

    // 11. All three cars check their dashboards
    cout << "State of Slow car: " << endl;
    ansStruct ans_slow = slow_car.showState();
    cout << "State of Fast car: " << endl;
    ansStruct ans_fast = fast_car.showState();
    cout << "State of Fancy car: " << endl;
    ansStruct ans_fancy = fancy_car.showState();
    
    // 12. `FancyCar` honks its horn twice, celebrating that it found its lost keychain
    fancy_car.horn();
    fancy_car.horn();

    return 0;
}
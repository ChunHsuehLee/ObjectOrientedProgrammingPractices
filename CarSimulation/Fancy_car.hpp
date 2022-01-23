#ifndef Fancy_CAR_HPP
#define Fancy_CAR_HPP
#include "Average_car.hpp"

class Fancy_car : public Average_car{
public:
    Fancy_car();
    void changeGear(std::string gearState);
    void horn();
private:
};

#endif // Fancy_CAR_HPP
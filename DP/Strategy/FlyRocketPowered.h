#ifndef FLY_ROCKET_POWERED_H
#define FLY_ROCKET_POWERED_H

#include "FlyBehavior.h"
#include <iostream> 

class FlyRocketPowered : public FlyBehavior {
public:
    void fly() const override {
        std::cout << "I'm flying with a rocket!" << std::endl;
    }
};  


#endif
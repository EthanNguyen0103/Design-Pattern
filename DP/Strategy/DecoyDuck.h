#ifndef DECOY_DUCK_H
#define DECOY_DUCK_H    

#include "Duck.h"
#include "MuteQuack.h"
#include "FlyNoWay.h"
#include <iostream>
#include <memory>

class DecoyDuck : public Duck {
public:
    DecoyDuck() {
        quackBehavior = std::make_unique<MuteQuack>(); // Use smart pointer for MuteQuackBehavior
        flyBehavior = std::make_unique<FlyNoWay>(); // Use smart pointer for FlyNoWayBehavior
    }
    void display() const override {
        std::cout << "I'm a decoy duck!" << std::endl;
    } // Override the display method from Duck
};

#endif
#ifndef RUBBER_DUCK_H
#define RUBBER_DUCK_H  

#include "Duck.h"
#include "Quack.h"
#include "FlyNoWay.h"
#include <iostream>
#include <memory>   

class RubberDuck : public Duck {
public:
    RubberDuck() {
        quackBehavior = std::make_unique<Quack>(); // Use smart pointer for QuackBehavior
        flyBehavior = std::make_unique<FlyNoWay>(); // Use smart pointer for FlyBehavior
    }
    void display() const override {
        std::cout << "I'm a rubber duck!" << std::endl;
    } // Override the display method from Duck
};

#endif // RUBBER_DUCK_H
#ifndef MODELDUCK_H
#define MODELDUCK_H


#include "Duck.h"
#include "FlyRocketPowered.h"
#include "MuteQuack.h"
#include <iostream>
#include <memory>

class ModelDuck : public Duck {
public:
    ModelDuck() {
        quackBehavior = std::make_unique<MuteQuack>(); // Use smart pointer for QuackBehavior
        flyBehavior = std::make_unique<FlyRocketPowered>(); // Use smart pointer for FlyBehavior
    }
    void display() const override {
        std::cout << "I'm a model duck!" << std::endl;
    } // Override the display method from Duck
};


#endif // MODELDUCK_H
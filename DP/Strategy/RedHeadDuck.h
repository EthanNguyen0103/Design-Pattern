#ifndef REF_HEAD_DUCK_H
#define REF_HEAD_DUCK_H 

#include "Duck.h"
#include "Quack.h"
#include "FlyWithWings.h"

class RedHeadDuck : public Duck {
public:
    RedHeadDuck() {
        quackBehavior = std::make_unique<Quack>(); // Use smart pointer for QuackBehavior
        flyBehavior = std::make_unique<FlyWithWings>(); // Use smart pointer for FlyBehavior
    }
    void display() const override {
        std::cout << "I'm a real Red Headed duck!" << std::endl;
    } // Override the display method from Duck
};

#endif
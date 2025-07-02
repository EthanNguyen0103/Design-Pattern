#ifndef MALLARD_DUCK_H
#define MALLARD_DUCK_H

#include "Duck.h"
#include "Quack.h"
#include "FlyWithWings.h"

class MallardDuck : public Duck {
    public:
        MallardDuck(){
            quackBehavior = std::make_unique<Quack>(); // Use smart pointer for QuackBehavior
            flyBehavior = std::make_unique<FlyWithWings>(); // Use smart pointer for FlyBehavior
        };
        void display() const override
        {
            std::cout << "I'm a real Mallard duck!" << std::endl;
        }; // Override the display method from Duck

};


#endif
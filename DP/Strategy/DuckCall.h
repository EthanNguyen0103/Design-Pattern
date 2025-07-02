#ifndef DUCK_CALL_H
#define DUCK_CALL_H

#include "QuackBehavior.h"
#include "Quack.h"
#include <memory> // For smart pointers

class DuckCall {
public:
    DuckCall(){
        quackBehavior = std::make_unique<Quack>(); // Use smart pointer for QuackBehavior
    }
    void performQuack() const {
        quackBehavior->quack(); // Call the quack behavior
    }   
    void display() const {
        std::cout << "I'm calling like a duck!" << std::endl;
    }

protected:
    std::unique_ptr<QuackBehavior> quackBehavior; // Smart pointer to a QuackBehavior object

};

#endif

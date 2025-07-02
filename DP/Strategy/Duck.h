#ifndef DUCK_H
#define DUCK_H

#include <iostream>
#include "QuackBehavior.h"
#include "FlyBehavior.h"
#include <memory>


class Duck {
public:
    virtual void display() const = 0; // Pure virtual function for displaying the duck
    void performQuack() const;
    void performFly() const;
    void swim() const;
    virtual ~Duck() = default;

protected:
    std::unique_ptr<QuackBehavior> quackBehavior; // Smart pointer to a QuackBehavior object
    std::unique_ptr<FlyBehavior> flyBehavior; // Smart pointer to a FlyBehavior

};


#endif // DUCK_H


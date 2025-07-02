#ifndef QUACK_BEHAVIOR_H
#define QUACK_BEHAVIOR_H

#include <iostream>

// Abstract base class for quack behavior
class QuackBehavior {
public:
    virtual ~QuackBehavior() = default;
    virtual void quack() const = 0; // Pure virtual function for quack behavior
};


#endif // QUACK_BEHAVIOR_H
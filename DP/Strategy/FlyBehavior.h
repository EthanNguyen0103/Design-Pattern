#ifndef FLY_BEHAVIOR_H
#define FLY_BEHAVIOR_H  

#include <iostream>      

class FlyBehavior {
public:
    virtual ~FlyBehavior() = default; // Virtual destructor for proper cleanup of derived classes
    virtual void fly() const = 0; // Pure virtual function for fly behavior
};

#endif      // FLY_BEHAVIOR_H   
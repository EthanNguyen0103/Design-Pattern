#ifndef MUTE_QUACK_H
#define MUTE_QUACK_H

#include "QuackBehavior.h"
#include <iostream>

class MuteQuack : public QuackBehavior {
public:
    void quack() const override {
        // No sound for mute quack
        std::cout << "..." << std::endl; // Silent quack
    }
};

#endif // MUTE_QUACK_H
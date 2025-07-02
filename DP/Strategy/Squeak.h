#ifndef SQUEAK_H
#define SQUEAK_H

#include "QuackBehavior.h"

class Squeak : public QuackBehavior {
    public:
        void quack() const override {
            std::cout << "Squeak!" << std::endl;
        }
};

#endif // SQUEAK_H
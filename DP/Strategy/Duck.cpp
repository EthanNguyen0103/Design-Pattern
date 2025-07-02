#include "Duck.h"

void Duck::performFly() const {
    flyBehavior->fly();
}

void Duck::performQuack() const {
    quackBehavior->quack();
}

void Duck::swim() const {
    std::cout << "All ducks float, even decoys!" << std::endl;
}
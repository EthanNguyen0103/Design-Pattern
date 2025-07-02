#ifndef FLY_WITH_WINGS_H
#define FLY_WITH_WINGS_H

class FlyWithWings : public FlyBehavior {
public:
    void fly() const override {
        std::cout << "I'm flying with wings!" << std::endl;
    }
};

#endif
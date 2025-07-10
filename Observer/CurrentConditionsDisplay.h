#ifndef CURRENTCONDITIONSDISPLAY_H
#define CURRENTCONDITIONSDISPLAY_H

#include <iostream>
#include "Observer.h"
#include "DisplayElement.h"

class CurrentConditionsDisplay : public Observer , public DisplayElement{
    public:
        void update(float temperature, float humidity, float pressure) override {
            temper = temperature;
            humid = humidity;
            press = pressure;
        }

        void display() override {
            std::cout << "temperture: " << temper << "+ humid: " << humid << "+ press: " << press << std::endl;
        }

    private:
        float temper;
        float humid;
        float press;

};



#endif
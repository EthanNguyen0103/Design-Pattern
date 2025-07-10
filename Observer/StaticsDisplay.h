#ifndef STATICSDISPLAY_H
#define STATICSDISPLAY_H

#include <iostream>
#include <vector>
#include <numeric>
#include "Observer.h"
#include "DisplayElement.h"

class StaticsDisplay : public Observer , public DisplayElement{
    public:
        void update(float temperature, float humidity, float pressure) override {
            temper.emplace_back(temperature);
            humid.emplace_back(humidity);
            press.emplace_back(pressure);
        }

        void display() override {
            std::cout << "temperture: " << std::accumulate(temper.begin(), temper.end(), 0) 
                      << "+ humid: " << std::accumulate(humid.begin(), humid.end(), 0) 
                      << "+ press: " << std::accumulate(press.begin(), press.end(), 0) << std::endl;
        }

    private:
        std::vector<float> temper;
        std::vector<float> humid;
        std::vector<float> press; 
};



#endif
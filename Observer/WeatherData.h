#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include "Subject.h"
#include <list>
#include <algorithm>

class WeatherData : public Subject {
    public:
        
        WeatherData(float temp, float humid, float press) : temperature(temp), humidity(humid), pressure(press) {}
        ~WeatherData() override = default;
        

        // Register an observer to the subject
        void registerObserver(std::shared_ptr<Observer> ob) override {
            auto it = std::find(obList.begin(), obList.end(), ob);
            if(it == obList.end()){
                obList.push_back(ob);
            }      
            notifyObserver();

        }

        void removeObserver(std::shared_ptr<Observer> ob) override {
            auto it = std::find(obList.begin(), obList.end(), ob);
            if(it != obList.end()){
                obList.remove(ob);
            }            
        }

        void notifyObserver() override {
            for(auto it : obList){
                if(it){
                    it->update(temperature, humidity, pressure);
                }
            }
        }

        void measurementsChanged(const float& temp, const float& humid, const float& press){
            temperature = temp;
            humidity = humid;
            pressure = press;
            notifyObserver();

        }

    private:
        float temperature;
        float humidity;
        float pressure;
        std::list<std::shared_ptr<Observer>> obList;
};  

#endif
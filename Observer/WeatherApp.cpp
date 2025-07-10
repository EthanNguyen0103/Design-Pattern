#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"
#include "StaticsDisplay.h"
#include <memory>



int main ()
{
    std::unique_ptr<WeatherData> weatherData = std::make_unique<WeatherData> (2.3, 2.2, 2.0);

    std::shared_ptr<CurrentConditionsDisplay> currentConditionsDisplay = std::make_unique<CurrentConditionsDisplay>();
    std::shared_ptr<CurrentConditionsDisplay> currentConditionsDisplay1 =  std::make_unique<CurrentConditionsDisplay>();
    std::shared_ptr<StaticsDisplay> staticsDisplay =  std::make_unique<StaticsDisplay>();
    weatherData->registerObserver(currentConditionsDisplay);
    weatherData->registerObserver(currentConditionsDisplay1);
    weatherData->registerObserver(staticsDisplay);

    currentConditionsDisplay->display();
    currentConditionsDisplay1->display();
    staticsDisplay->display();


    weatherData->removeObserver(currentConditionsDisplay1);

    weatherData->measurementsChanged(1.2, 2.3, 1.3);

    currentConditionsDisplay->display();
    currentConditionsDisplay1->display();
    staticsDisplay->display();

    return 0;
}
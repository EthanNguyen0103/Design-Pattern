#ifndef OBSERVER_H
#define OBSERVER_H

#include <memory>

class Observer {
    public:
        virtual ~Observer() = default;

        // Update the observer with new data
        virtual void update(float temperature, float humidity, float pressure) = 0;
};



#endif
#ifndef SUBJECT_H
#define SUBJECT_H

#include <memory>
#include "Observer.h"

class Subject {
    public:
        virtual ~Subject() = default;

        // Register an observer to the subject
        virtual void registerObserver(std::shared_ptr<Observer> observer) = 0;
        // Remove an observer from the subject
        virtual void removeObserver(std::shared_ptr<Observer> observer) = 0;
        // Notify all observers about a change in the subject
        virtual void notifyObserver() = 0;
};


#endif
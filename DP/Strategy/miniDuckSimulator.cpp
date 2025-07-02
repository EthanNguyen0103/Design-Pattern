#include "MallardDuck.h" 
#include "RedHeadDuck.h"
#include "RubberDuck.h"
#include "DecoyDuck.h"
#include "ModelDuck.h"
#include "DuckCall.h"


int main() {
    std::unique_ptr<Duck> duck = std::make_unique<MallardDuck>();
    duck->display(); // Display the MallardDuck
    duck->performQuack(); // Perform quack behavior
    duck = std::make_unique<RedHeadDuck>();
    duck->display(); // Display the RedHeadDuck
    duck->performQuack(); // Perform quack behavior


    duck = std::make_unique<ModelDuck>();
    duck->display(); // Display the ModelDuck
    duck->performQuack(); // Perform quack behavior
    duck->performFly(); // Perform fly behavior 
    
    std::unique_ptr<DuckCall> duckCall = std::make_unique<DuckCall>();
    duckCall->display(); // Display the DuckCall
    duckCall->performQuack(); // Call the quack behavior of DuckCall

    return 0;
};
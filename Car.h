#pragma once

#include "Vehicle.h"

struct Car : public Vehicle
{
    Car(const std::string& s);

    //Special member Functions.  See instruction 9) and note in main()
    virtual ~Car() override;
    Car(const Car&);
    Car& operator=(const Car&);
    
    void closeWindows();
    void tryToEvade() override;
};

#pragma once

#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& s);
    //Special member Functions.  See instruction 9) and note in main()
    ~SemiTruck() override;
    SemiTruck(const SemiTruck&);
    SemiTruck& operator = (const SemiTruck&);

    void disableOffRoadMode();
    void pullOver();
};

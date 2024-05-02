#pragma once 

#include "Vehicle.h"

struct Highway; // forward declaration because we use only pointers
struct HighwayPatrol : Vehicle 
{
    HighwayPatrol();
    void scanHighway(Highway* h);

    void pullOver( Vehicle* v, bool willArrest, Highway* h );
};

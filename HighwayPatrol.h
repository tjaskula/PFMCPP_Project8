#pragma once 

#include "Vehicle.h"

struct Highway; // forward declaration because we use only pointers
struct HighwayPatrol : Vehicle 
{
    HighwayPatrol();
    //Special member Functions.  See instruction 9) and note in main()
    virtual ~HighwayPatrol() override;
    HighwayPatrol(const HighwayPatrol&);
    HighwayPatrol& operator=(const HighwayPatrol&);

    void scanHighway(Highway* h);
    void pullOver( Vehicle* v, bool willArrest, Highway* h );
};

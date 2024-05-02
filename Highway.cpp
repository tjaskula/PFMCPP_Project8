#include "Highway.h"
#include "Car.h"
#include "Motorcycle.h"

#include <cassert>

void Highway::changeSpeed(int newSpeed)
{
    speedLimit = newSpeed;
    for( auto* vehicle : vehicles )
    {
        vehicle->setSpeed(speedLimit);
    }
}

void Highway::addVehicleInternal(Vehicle* v)
{
    /*
    depending on the derived type, call the member function that doesn't evade the cops. 
    do not call `setSpeed`.  Pick a different function.
    */
    if( auto* car = dynamic_cast<Car*>(v) )
    {
        car->closeWindows();
    }
    else if( auto* motorcycle = dynamic_cast<Motorcycle*>(v) ) 
    {
        motorcycle->lanesplitAndRace(200);
    }
}

void Highway::removeVehicleInternal(Vehicle* v)
{
    assert(false);

    /*
    depending on the derived type, call the member function that tries to evade the cops. 
    do not call `setSpeed`.  Pick a different function.
    trucks pull over, but cars and bikes try to evade!!
    */
}

void Highway::addVehicle(Vehicle* v)
{
    vehicles.push_back(v);
    addVehicleInternal(v);
}
void Highway::removeVehicle(Vehicle* v)
{
    vehicles.erase(std::remove(vehicles.begin(), 
                               vehicles.end(), 
                               v), 
                   vehicles.end());
    removeVehicleInternal(v);
}

#include "SemiTruck.h"

#include <iostream>

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}
SemiTruck::~SemiTruck() = default;
SemiTruck::SemiTruck(const SemiTruck&) = default;
SemiTruck& SemiTruck::operator = (const SemiTruck&) = default;

void SemiTruck::pullOver()
{
    setSpeed(0);
    std::cout << name << ": pulling over for the patrol control!" << std::endl;
}

void SemiTruck::disableOffRoadMode()
{
    setSpeed(speed);
    std::cout << name << ": disabling off road mode on the highway!" << std::endl;
}

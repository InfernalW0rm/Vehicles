#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle 
{
public:
    Car() : Vehicle() {}
    Car(double spd, const Position& pos, int numPass, int maxPass)
        : Vehicle(spd, pos, numPass, maxPass) {}

    void travel(const Position& destination) override 
    {
        double distance = Position::calcDistance(position, destination);
        double eta = getETA(destination);
        cout << "This car drives " << distance << " miles to (" << destination.getX() << ", " << destination.getY()
            << ") over land. The trip takes " << eta << " hours." << endl;
        position = destination;
    }
};

#endif

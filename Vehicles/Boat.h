#ifndef BOAT_H
#define BOAT_H

#include "Vehicle.h"

class Boat : public Vehicle 
{
public:
    Boat() : Vehicle() {}
    Boat(double spd, const Position& pos, int numPass, int maxPass)
        : Vehicle(spd, pos, numPass, maxPass) {}

    void travel(const Position& destination) override 
    {
        double distance = Position::calcDistance(position, destination);
        double eta = getETA(destination);
        cout << "This boat sails " << distance << " miles to (" << destination.getX() << ", " << destination.getY()
            << ") on seas, lakes, and rivers. The trip takes " << eta << " hours." << endl;
        position = destination;
    }
};

#endif

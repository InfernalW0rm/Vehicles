#ifndef VEHICLE_H
#define VEHICLE_H

#include "Position.h"
#include <iostream>

using namespace std;

class Vehicle 
{
protected:
    double speed;
    Position position;
    int numPassengers;
    int maxPassengers;

public:
    Vehicle() : speed(0), position(), numPassengers(0), maxPassengers(0) {}
    Vehicle(double spd, const Position& pos, int numPass, int maxPass)
        : speed(spd), position(pos), numPassengers(numPass), maxPassengers(maxPass) {}

    virtual ~Vehicle() = default;

    double getSpeed() const { return speed; }
    Position getPosition() const { return position; }
    int getNumPassengers() const { return numPassengers; }
    int getMaxPassengers() const { return maxPassengers; }

    void setSpeed(double spd) { speed = spd; }
    void setPosition(const Position& pos) { position = pos; }
    void setNumPassengers(int numPass) { numPassengers = numPass; }
    void setMaxPassengers(int maxPass) { maxPassengers = maxPass; }

    double getETA(const Position& destination) const {
        double distance = Position::calcDistance(position, destination);
        return distance / speed;
    }

    virtual void travel(const Position& destination) = 0;
};

#endif

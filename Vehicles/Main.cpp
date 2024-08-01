#include <iostream>
#include "Car.h"
#include "Boat.h"

using namespace std;

int main() 
{
    Vehicle* vehicles[5];

    vehicles[0] = new Car(60, Position(0, 0), 4, 5);
    vehicles[1] = new Boat(30, Position(10, 10), 10, 20);
    vehicles[2] = new Car(70, Position(5, 5), 3, 4);
    vehicles[3] = new Boat(25, Position(15, 5), 8, 15);
    vehicles[4] = new Car(55, Position(2, 8), 2, 3);

    Position destinations[5] = 
    {
        Position(100, 100),
        Position(200, 200),
        Position(150, 150),
        Position(250, 250),
        Position(120, 120)
    };

    for (int i = 0; i < 5; ++i) 
    {
        vehicles[i]->travel(destinations[i]);
        delete vehicles[i];
    }

    return 0;
}

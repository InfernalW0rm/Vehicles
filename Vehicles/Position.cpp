#include "Position.h"
#include <cmath>

using namespace std;

double Position::calcDistance(const Position& start, const Position& end) 
{
    return sqrt(pow(end.getX() - start.getX(), 2) + pow(end.getY() - start.getY(), 2));
}

#ifndef POSITION_H
#define POSITION_H

class Position 
{
private:
    double x;
    double y;

public:
    Position() : x(0), y(0) {}
    Position(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

    double getX() const { return x; }
    double getY() const { return y; }

    void setX(double xCoord) { x = xCoord; }
    void setY(double yCoord) { y = yCoord; }

    static double calcDistance(const Position& start, const Position& end);
};

#endif

#include "Square.h"

Square::Square(Flyweight* sharedAttributes, int sideLength)
    : sharedAttributes(sharedAttributes), sideLength(sideLength) {}

void Square::draw()
{
    cout << "Drawing a square with color " << sharedAttributes->getColor()
        << " and line thickness " << sharedAttributes->getLine()
        << " and side length " << sideLength << endl;
}

#include "Circle.h"

Circle::Circle(Flyweight* sharedAttributes, int radius)
	: sharedAttributes(sharedAttributes), radius(radius) {}

void Circle::draw()
{
	cout << "Drawing a circle with color " << sharedAttributes->getColor()
		<< " and line thickness " << sharedAttributes->getLine()
		<< " and radius " << radius << endl;
}

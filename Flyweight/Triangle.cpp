#include "Triangle.h"

Triangle::Triangle(Flyweight* sharedAttributes, int base, int height)
	: sharedAttributes(sharedAttributes), base(base), height(height) {}

void Triangle::draw()
{
	cout << "Drawing a triangle with color " << sharedAttributes->getColor()
		<< " and line thickness " << sharedAttributes->getLine()
		<< " and base " << base << " and height " << height << endl;
}

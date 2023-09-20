#include "Flyweight.h"

Flyweight::Flyweight(const string& color, int line)
	: color(color), line(line) {}

const string& Flyweight::getColor() const
{
	return color;
}

int Flyweight::getLine() const
{
	return line;
}

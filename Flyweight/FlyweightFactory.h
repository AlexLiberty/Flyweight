#pragma once
#include "Flyweight.h"
#include <string>
#include <map>

class FlyweightFactory
{
private:
	map<string, Flyweight*> flyweights;
public:
	Flyweight* getFlyweight(const string& color, int line);
};


#include "FlyweightFactory.h"

Flyweight* FlyweightFactory::getFlyweight(const string& color, int line)
{
    auto key = color + "_" + to_string(line);
    if (flyweights.find(key) == flyweights.end()) 
    {
        flyweights[key] = new Flyweight(color, line);
    }
    return flyweights[key];
}

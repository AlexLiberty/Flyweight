#pragma once
#include "Flyweight.h"
#include "Shape.h"
#include <iostream>

class Square : public Shape
{
private:
    Flyweight* sharedAttributes;
    int sideLength;
public:
    Square(Flyweight* sharedAttributes, int sideLength);
    void draw() override;
};


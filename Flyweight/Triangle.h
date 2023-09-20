#pragma once
#include "Flyweight.h"
#include "Shape.h"
#include <iostream>

class Triangle : public Shape
{
private:
    Flyweight* sharedAttributes;
    int base;
    int height;
public:
    Triangle(Flyweight* sharedAttributes, int base, int height);
    void draw() override;
};


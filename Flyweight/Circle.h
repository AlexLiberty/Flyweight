#pragma once
#include "Flyweight.h"
#include "Shape.h"
#include <iostream>

class Circle : public Shape
{
private:
    Flyweight* sharedAttributes;
    int radius;
public:
    Circle(Flyweight* sharedAttributes, int radius);
    void draw() override;
};


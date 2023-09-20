#include "FlyweightFactory.h"
#include "Shape.h"
#include "Square.h"
#include "Circle.h"
#include "Triangle.h"
#include <vector>

int main() 
{
    FlyweightFactory flyweightFactory;

    Flyweight* sharedAttributes = flyweightFactory.getFlyweight("Blue", 1);
    std::vector<Shape*> shapes;

    shapes.push_back(new Square(sharedAttributes, 20));
    shapes.push_back(new Circle(sharedAttributes, 15));
    shapes.push_back(new Triangle(sharedAttributes, 10, 12));

    for (Shape* shape : shapes)
    {
        shape->draw();
    }

    for (Shape* shape : shapes)
    {
        delete shape;
    }

    return 0;
}
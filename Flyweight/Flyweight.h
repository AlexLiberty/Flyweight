#pragma once
#include <string>

using namespace std;

class Flyweight
{
private:
    string color;
    int line;
public:
    Flyweight(const string& color, int line);
    const string& getColor() const;
    int getLine() const;
};


#include "Point.h"
#include <iostream>
#include <ctime>

Point::Point() 
{
    std::cout << "Construct Point\n";
    x = y = 0;
}

Point::Point(int x1, int y1)
{
    std::cout << "Construct Point by 2 param\n";
    x = x1;
    y = y1;
}

void Point::Init()
{
    x = rand() % 10;
    y = rand() % 10;
}

void Point::Init(int x1, int y1)
{
    x = x1;
    y = y1;
}

void Point::Output()
{
    std::cout << "X: " << x << "\tY: " << y << std::endl;
}
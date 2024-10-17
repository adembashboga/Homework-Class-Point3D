#include "Point3D.h"
#include <iostream>

Point3D::Point3D() : Point()
{
    std::cout << "Construct Point3D\n";
    z = 0;
}

Point3D::Point3D(int x1, int y1, int z1) : Point(x1, y1)
{
    std::cout << "Construct Point3D by 3 param\n";
    z = z1;
}

void Point3D::Init(int x1, int y1, int z1)
{
    Point::Init(x1, y1);
    z = z1;
}

void Point3D::Output()
{
    Point::Output();
    std::cout << "Z: " << z << std::endl;
}
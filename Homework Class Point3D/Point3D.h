#include "Point.h"

class Point3D : public Point
{
private:
    int z;

public:
    Point3D();
    Point3D(int x1, int y1, int z1);
    void Init(int x1, int y1, int z1);
    void Output();
};

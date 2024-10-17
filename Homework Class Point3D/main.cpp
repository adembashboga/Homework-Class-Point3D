#include "Point.h"
#include "Point3D.h"
#include <ctime>
#include <cstdlib>

int main()
{
    srand(static_cast<unsigned>(time(0)));

    Point obj1;
    obj1.Output();

    Point obj2(10, 20);
    obj2.Output();

    Point3D obj3;
    obj3.Output();

    Point3D obj4(10, 20, 30);
    obj4.Output();

    return 0;
}
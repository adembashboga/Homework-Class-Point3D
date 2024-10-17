#include <iostream>

class Point
{
protected:
    int x;
    int y;

public:
    Point();
    Point(int x1, int y1);
    void Init();
    void Init(int x1, int y1);
    void Output();
};
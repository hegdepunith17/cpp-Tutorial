#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

class Point
{
    int x, y;
    friend void distance(Point o1, Point o2);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
};

void distance(Point o1, Point o2)
{
    float dist;
    dist = sqrt(pow((o2.x - o1.x), 2) + pow((o2.y - o1.y), 2));
    cout << "Distance between " << dist;
}

int main()
{
    Point obj1(6, 5);
    Point obj2(3, 2);
    distance(obj1, obj2);

    return 0;
}
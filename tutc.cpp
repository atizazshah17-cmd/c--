#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int a, b;

public:
    Point(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend void Distance(Point x, Point y);

    void displayPoint()
    {
        cout << "The point is (" << a << "," << b << ")" << endl;
    }
};

// Distance find function
void Distance(Point x, Point y)
{
    int m = y.a - x.a;
    int n = y.b - x.b;
    float D = sqrt(m * m + n * n);
    cout << "The distance between the points is " << D << endl;
}

int main()
{
    Point p1(0, 0);
    Point p2(3, 4);
    Distance(p1, p2);
    return 0;
}

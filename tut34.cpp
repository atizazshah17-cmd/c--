#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }

    Number(Number &obj)
    {
        cout << "Copy constructor called!!! " << endl;
        a = obj.a;
    }

    void Numberdisplay()
    {
        cout << "The number of the object is " << a << endl;
    }
};
int main()
{
    Number x, y, z(45), z2(z);
    x.Numberdisplay();
    y.Numberdisplay();
    z.Numberdisplay();
    Number z1(x);
    z1.Numberdisplay();
    z2 = z; // copy constructor not called
    z2.Numberdisplay();
    Number z3 = z; // copy constructor invoked
    z3.Numberdisplay();

    return 0;
}
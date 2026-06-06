#include <iostream>
using namespace std;

class Test
{
    int a;
    int b;

public:
    // Test(int x, int y) : a(x), b(y)
    //Test(int x, int y) : a(x), b(x + y)
    //Test(int x, int y) : a(x), b(2 * y) 
    Test(int x, int y) : a(x), b(a + y) 
    {
        cout << "Constructor called" << endl;
        cout << "The value of a is : " << a << endl;
        cout << "The value of b is : " << b << endl;
    }
};
int main()
{
    Test t(4, 5);

    return 0;
}
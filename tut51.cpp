#include <iostream>
using namespace std;

class Complex
{
public:
    int real, imaginary;

    void getData()
    {
        cout << "The real part is : " << real << endl;
        cout << "The imaginary part is : " << imaginary << endl;
    }

    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{
    Complex c1;
    Complex *ptr = &c1;
    (*ptr).setData(4, 8);
    (*ptr).getData();

    return 0;
}
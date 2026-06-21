#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class Atizaz
{
public:
    T1 a;
    T2 b;
    T3 c;
    Atizaz(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "The value of a is : " << a << endl;
        cout << "The value of b is : " << b << endl;
        cout << "The value of c is : " << c << endl;
    }
};
int main()
{
    Atizaz<> a(4, 6.4, 'A');
    a.display();
    cout << endl;
    Atizaz<float, char, char> s(1.6, 'O', 'A');
    s.display();

    return 0;
}
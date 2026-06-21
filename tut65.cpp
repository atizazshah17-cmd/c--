#include <iostream>
using namespace std;
template <class T1, class T2, class T3>
class MyClass
{
public:
    T1 data1;
    T2 data2;
    T3 data3;
    MyClass(T1 a, T2 b, T3 c)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void display()
    {
        cout << "This is your integer : " << data1 << endl;
        cout << "This is your character : " << data2 << endl;
        cout << "This is your float : " << data3 << endl;
    }
};
int main()
{
    MyClass<int, char, float> obj(2, 'A', 3.14);
    obj.display();
 
    return 0;
}
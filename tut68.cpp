#include <iostream>
using namespace std;

template <class T>
class Atizaz
{
public:
    T data;
    Atizaz(T a)
    {
        data = a;
    }
    void dispay();
};
template <class T>
void Atizaz<T>::dispay()
{
    cout << data << endl;
}

void func(int a)
{
    cout << "I am first func() " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am templatisad func() " << a << endl;
}

template <class T>
void func1(T a)
{
    cout << "I am templatisad func() " << a << endl;
}

int main()
{
    // Atizaz<float> a(5.7);
    // Atizaz<char> a('c');
    // Atizaz<int> a(87);
    // cout << a.data << endl;
    //  a.dispay();

    // func(4);
    func1(4);

        return 0;
}
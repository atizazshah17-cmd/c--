#include <iostream>
using namespace std;
// Syntax for multiple inehritance
// class DerivedC : visibility mode base1 and visibility mode base2
//{
//  class body of the class "DerivedC"
//};

class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class Derived : public base1, public base2, public base3
{
public:
        void show(){
            cout << "The value of base1int is " << base1int << endl;
            cout << "The value of base2int is " << base2int << endl;
            cout << "The value of base3int is " << base3int << endl;
            cout << "The sum of base1int and base2int is " << base1int + base2int + base3int << endl;
}

};

/*
The inehrited derived class will look like this:
Data members:
    base1int --> protected
    base2int --> protected
    base3int --> protected

Member functions:
    set_base1int --> public
    set_base2int --> public
    set_base3int --> public
    show --> public
*/
int main()
{
    Derived Atizaz;
    Atizaz.set_base1int(25);
    Atizaz.set_base2int(5);
    Atizaz.set_base3int(15);
    Atizaz.show();

    return 0;
}
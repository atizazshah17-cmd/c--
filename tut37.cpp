#include <iostream>
using namespace std;

// Basic Class
class Employee
{

public:
    int id;
    float salary;
    // public:
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Derived Class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
    };
*/
class Programmer : public Employee
{
public:
    Programmer(int inpId)
    {
        id = inpId;
    }

    int languageCode = 9;
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee shoaib(1), ravish(2);
    cout << shoaib.salary << endl;
    cout << ravish.salary << endl;
    Programmer skillF(1);
    cout << skillF.languageCode << endl;
    cout << skillF.salary << endl;
    skillF.getData();

    return 0;
}
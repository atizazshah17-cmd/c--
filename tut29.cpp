#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // creating a constructor
    // constructor is a special member function with the same name as the class.
    // it is used to initialize the object of the class.
    // it is automatically invoked when the object is created.
    complex(void); // consteuctor declaration
    void printNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};

complex::complex(void)  //------> // this is a default constructor as it takes no parameters
{
    a = 10;
    b = 0;
    cout<<"Hello World!"<<endl;
}
int main()
{
    complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}

    // Characteristics of constructors:
    
    // 1. It should be declared in the public section of the class.
    // 2. They are automatically invoked whenever the object is created.
    // 3. They cannot return values and do not have return types.
    // 4. It can have default arguments.
    // 5. We cannot refer to their address.

#include<iostream>
using namespace std;


class complex
{
    int a, b;

public:
   
    complex(int , int ); // consteuctor declaration
    void printNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};
complex::complex(int x, int y) // This is a parameterized constructor as it take 2 parameters 
{
    a = x;
    b = y;
   // cout<<"Hello World!"<<endl;
}

int main(){
    // Implicit call
    complex a(4, 6);
    a.printNumber();

    // Explicit call
    complex b = complex(5, 7);
    b.printNumber();

    return 0;
}
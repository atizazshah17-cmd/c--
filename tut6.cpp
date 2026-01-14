
// There are two types of header files
// 1. System header files: It come with the compiler
#include <iostream>
// 2. User defined header files: It is written by the pogrammer
// #include "this.h" ->  This will produce an error if this.h is not present in the current directory

using namespace std;

int main(){
    int a = 4, b = 5;
    cout<<"Operators in C++:"<<endl;
    cout<<"Following are the types of operators in C++:"<<endl;
    // Arithmetic Operators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - B is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b ia "<<a%b<<endl;
    cout<<"The value of a ++ is  "<<a++<<endl;
    cout<<"The value of ++a is  "<<++a<<endl;
    cout<<"The value of a -- is "<<a--<<endl;
    cout<<"The value of --a is "<<--a<<endl;

    // Assignment Operators  --> Used to assign values to variables
   // int a = 3, b = 9;
    // char d = 'd';
    // Comparison Operators
    cout<<"Following are the comparison operators in C++"<<endl;
    cout<< "The value of a ==  b is "<<(a==b)<<endl;
    cout<< "The value of a != b is "<<(a!=b)<<endl;
    cout<< "The value of a >= b is "<<(a>b)<<endl;
    cout<< "The value of a <= b is "<<(a<b)<<endl;
    cout<< "The value of a > b is "<<(a>b)<<endl;
    cout<< "The value of a < b is "<<(a<b)<<endl;

    // Logical Operators
    cout<<"Following are the logical operators in c++"<<endl;
    cout<<"The value of this logical operators ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical operators ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical not operators (!(a==b)) is:"<<(!(a==b))<<endl;
    return 0;
}
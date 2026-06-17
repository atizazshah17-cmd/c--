#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ofstream hout("sample60.txt");
    cout << "Enter your name : ";
    string name;
    cin >> name;

    hout << "My name is : " << name;
    hout.close();
        

    ifstream hin("sample60.cpp");
    string content;
    hin >> content;
    cout << "Content  " << content;
    hin.close();

    return 0;
}
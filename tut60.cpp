#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string st = "This is me";
    string st2;
    // writing in file
    // ofstream out("sample60.txt");
    // out << st;

    // reading from file
    ifstream in("sample60b.cpp");
   // in >> st2;
   getline(in, st2);
    cout << st2;

    return 0;
}
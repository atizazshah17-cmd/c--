  //  c++  ---> initially called ---> c with classes by stroustroup
    // class  ---> extension of structures ( in C )
    // structure had limitatio
    //        - members are public
    //       - No methods
    // classes  ---> structures + more
    // classes ---> can have methods and properties
    // classes ---> can make few members as private and few as public
    // structures in C++ are typedefed
    // you can declare objects along with the class declarion like this
    /*    class employee{
          // Class definition
    } ali , ravish , shoaib; */
     // atizaz,salary = 8 make no sense if salary is private

     // Nesting of member functions

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class binery
{
        // private:
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binery :: read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binery :: chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binery :: ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
            s.at(i) = '1';
        else
            s.at(i) = '0';
    }
}

void binery :: display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{

    binery b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}

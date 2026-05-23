#include <iostream>
using namespace std;

class base1
{
protected:
    int a;
    char op;

public:
    void set_a(int x)
    {
        a = x;
    }

    void get_a()
    {
        cout << "Enter the value of a: ";
        cin >> a;
    }

    void show_a()
    {
        cout << "The value of a is " << a << endl;
    }
};

class base2
{
protected:
    int b;

public:
    void set_b(int y)
    {
        b = y;
    }

    void get_b()
    {
        cout << "Enter the value of b: ";
        cin >> b;
    }

    void show_b()
    {
        cout << "The value of b is " << b << endl;
    }
};

class derived : public base1, public base2
{
public:
    void show()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;

        cout << "Enter operator (+,-,*,/,%): ";
        cin >> op;

        switch (op)
        {
        case '+':
            cout << "The sum of a and b is " << a + b << endl;
            break;

        case '-':
            cout << "The subtraction of a and b is " << a - b << endl;
            break;

        case '*':
            cout << "The multiplication of a and b is " << a * b << endl;
            break;

        case '/':
            cout << "The division of a and b is " << a / b << endl;
            break;

        case '%':
            cout << "The modulus of a and b is " << a % b << endl;
            break;

        default:
            cout << "Invalid Entry" << endl;
        }
    }
};

int main()
{
    derived cul;

    cul.get_a();
    cul.get_b();

    cul.show();

    return 0;
}
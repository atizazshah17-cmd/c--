#include <iostream>
#include <cmath>
using namespace std;

class simpleCalculator
{
    int a, b;

public:
    void getData()
    {
        cout << "Enter the value of a:" << endl;
        cin >> a;
        cout << "Enter the value of b:" << endl;
        cin >> b;
    }
    void performOperation()
    {
        cout << "The value of a + b is " << a + b << endl;
        cout << "The value of a - b is " << a - b << endl;
        cout << "The value of a * b is " << a * b << endl;
        cout << "The value of a / b is " << a / b << endl;
    }
};
class sicientificCalculator
{
    int a, b;

public:
    void getData()
    {
        cout << "Enter the value of a:" << endl;
        cin >> a;
        cout << "Enter the value of b:" << endl;
        cin >> b;
    }
    void performOperation()
    {
        cout << "The value of cos(a) is " << cos(a) << endl;
        cout << "The value of sin(a) is " << sin(a) << endl;
        cout << "The value of exp(a) is " << exp(a) << endl;
        cout << "The value of tan(a) is " << tan(a) << endl;
    }
};
class HybridCalculator : public simpleCalculator, public sicientificCalculator
{
public:
    void getDatasimple()
    {
        simpleCalculator::getData();
    }

    void performOperationsimple()
    {
        simpleCalculator::performOperation();
    }

    void getDatasicientific()
    {
        sicientificCalculator::getData();
    }

    void performOperationsicientific()
    {
        sicientificCalculator::performOperation();
    }
};
int main()
{
    // simpleCalculator sc;
    // sc.getData();
    // sc.performOperation();

    // sicientificCalculator sic;
    // sic.getData();
    // sic.performOperation();

    HybridCalculator hc;

    hc.sicientificCalculator::getData();
    hc.sicientificCalculator::performOperation();

    hc.simpleCalculator::getData();
    hc.simpleCalculator::performOperation();

    return 0;
}
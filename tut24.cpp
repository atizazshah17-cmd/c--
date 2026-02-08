#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
    static void getcount(void){
        cout<<"The value of count is "<<count<<endl;
    }
};

int Employee ::count = 1000;
int main()
{
    Employee atizaz, shoaib, ali;

    atizaz.setData();
    atizaz.getData();
    Employee::getcount();

    shoaib.setData();
    shoaib.getData();
    Employee::getcount();

    ali.setData();
    ali.getData();
    Employee::getcount();
    return 0;
}
 
#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId;  // 4 bytes
    char favChar;  // 1 byte
    float salary;  // 4 bytes
}ep;
union money
{
    /* data */
    int rice; // 4 bytes
    char car;  // 1 byte
    float pounds;  // 4 bytes
};



int main(){
    enum Meal{breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<(m1)<<endl;
    //cout<<(breakfast)<<endl;
    //cout<<(lunch)<<endl;
    //cout<<(dinner)<<endl;
    //union money m1;
    //m1.rice = 34;
    //m1.car = 'c';
    //cout<<m1.car<<endl;

    //ep atizaz;
    //ep shoaib;
    //ep ravish;
    //atizaz.eId = 1;
    //atizaz.favChar = 'c';
    //atizaz.salary = 45000;
       //cout<<"The value is "<<atizaz.salary<<endl;
       //cout<<"The value is "<<atizaz.eId<<endl;
       //cout<<"The value is "<<atizaz.favChar<<endl;
    
     
    return 0;
}
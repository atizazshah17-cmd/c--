#include<iostream>

using namespace std;
int glo = 6;
void sum(){
    int a;
    cout<<glo;
}

int main(){
    int glo = 9;
    glo = 78;
   // int a =4;
   // int b = 5 ;
    float pi = 3.14;
    char c = 'd';
    bool is_true = true;
    sum();
    cout<<glo<< is_true; 
  //  cout<<"This is tytorial 4.\nHere the value of a is "<<a<<".\nThe value  of b is "<< b;
   // cout<<"\nThe value of pi: "<<pi;
   // cout<<"\nThe value of c: "<<c;
    return 0;
}
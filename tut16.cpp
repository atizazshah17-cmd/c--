#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a+ b;
    return c;
}
void swap(int a , int b){
  int temp = a;  // temp a , b
  a = b;         //   4   5   5
  b = temp;      //   4   5   4
}
// Call reference using pointer
 void swappointer(int* a , int* b){
    int temp = *a;   // temp a , b
    *a = *b;          //   4  5  5
    *b = temp;       //   4  5  4
 }
 // Call reference using C++ reference variables
 void swapReference(int &a , int &b){
    int temp = a;      // temp a , b
    a = b;          //   4   5  5
    b = temp;       //    4   5  5
 }
int main(){
    int a = 4 , b = 5;
    //cout<<"The sum of 4 and 5 is"<<sum(a,b)<<endl;
    cout<<"The value of a is "<<a <<"And the value b is "<<b<<endl;
    //swap(a , b); -----> This will be not swap a and b
    //swappointer(&a , &b);   ---------> This will swap a and b by using pointer reference
    swapReference(a , b);
    cout<<"The value of a is "<<a <<"And the value of b is "<<b<<endl;
    return 0;
}
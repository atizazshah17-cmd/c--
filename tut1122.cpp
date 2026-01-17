#include<iostream>

using namespace std;

int main(){
    int num;
    cout<<"Enter your number:";
    cin>>num;
    cout<<"Your Table is:"<<endl;
    for(int i = 1; i <= 10; i++){
        cout<<num<<" *"<<i<<" ="<<num*i<<endl;
    }

    return 0;
}
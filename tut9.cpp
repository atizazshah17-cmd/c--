#include <istream>
#include <iostream>

using namespace std;

int main(){
   //cout<<"This is tutorial 9";
   int age;
   cout<<"Enter your age:"<<endl;
   cin>>age;
   // Selection control structure : If else-if else statement
   // selection control structure : switch statments
   switch (age)
   {
      case 18:
         cout<<"You are 18"<<endl;
         break;
         case 22:
         cout<<"You are 22"<<endl;
         break;
         case 2:
         cout<<"You are 2"<<endl;
         break;
         default:
         cout<<"Noting special about your age"<<endl;
         break;
   }
         cout<<"Done with switch case"<<endl;

   return 0;
}

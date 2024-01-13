#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the value of a and b";
    cin>>a>>b;


    

    cout<<"the menu/n";
    cout<<"choice1: Add"<<endl;
    cout<<"choice2: sub"<<endl;
    cout<<"choice3: div"<<endl;
    cout<<"choice4: mul"<<endl;
    int option;
    cout<<"enter the option";
    cin>>option;

    

   switch(option)
   {
    case 1: c= a+b;
    cout<<"the addition of a and b is" << c<<endl;
    break;
    case 2 : c= a-b;
    cout<<"the substraction of a and b is" <<c <<endl;
    break;
    case 3: c= a*b;
    cout<<"the multiplication of a and b is" << c<<endl;
    break;
    case 4: c= a/b;
    cout<<"the division of a and b is" << c<<endl;
    break;
    

   }
  // cout<<"the result is"<<c<<endl;
    return 0;
}
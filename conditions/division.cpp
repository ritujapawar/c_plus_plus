//division of two numbers
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the value of a and b";
    cin>>a>>b;
    
    if(b==0)
    {
        cout<<"division is not posssible";
    }
    
    else
    {
        c=a/b;
        cout<<c<<endl;

    }
    return 0;
}
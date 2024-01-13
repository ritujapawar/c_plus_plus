//checking the maximum number from given three numbers
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the value of a,b and c"<<endl;
    cin>>a>>b>>c; 

    if(a>b && a>c)
    {
        cout<<"a is the greater number"<<a;

    }
    else{
        if(b>c)
        {
            cout<<"b is havving greater value"<<b<<endl;

        }
        else{
            cout<<"c is greater thn among a and b"<<c<<endl;

        }
    }
    return 0;
}
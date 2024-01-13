//knnowing the nature of root 
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,r1,r2,d;
    cout<<"enter the value of a";
    cin>>a;
    cout<<"enter the value of b";
    cin>>b;
    cout<<"enter the value of c";
    cin>>c;
    r1= -b+sqrt(b*b-4*a*c);
    r2= -b-sqrt(b*b-4*a*c);
    cout<<r1<<r2;
    d= b*b-4*a*c;

    if(d=0)
    {
        cout<<"the root is real and equal"<<endl;
        cout<<(-b/2*a);
    }
    else {
        if(d>0){
        cout<<"the root is real and equal"<<endl;
        cout<<r1;
        cout<<r2;
    }
        else{
            cout<<"the root is imaginary"<<endl;
            cout<<r1;
            cout<<r2;
        }
    }
   
    return 0;    
}
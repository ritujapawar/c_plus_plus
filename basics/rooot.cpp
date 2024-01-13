#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    float root;
    cout<<"enter the values of a,b,c"<<endl;
    cin>>a>>b>>c;
    root= (-b+sqrt (b*b)-(4*a*c))/(2*a);
    cout<<"the square root of no. is"<<root<<endl;
    return 0;

}
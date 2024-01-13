//calculating the total speed

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float u,v,a,speed;
    cout<<"enter the value of u and v"<<endl;
    cin>>u>>v;
    
    cout<<"the speed of t6he given car is"<<speed<<endl;
    speed= (u*u-v*v)/(2*a);
    return 0;
} 
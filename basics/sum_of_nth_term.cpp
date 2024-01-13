//sum of unknow nth tearm
#include<iostream>
using namespace std;
int main()
{
    int n;
    int Sum;
    cout<<"enter the nth number"<<endl;
    cin>>n;
    Sum= n*(n+1)/2;
    cout<<"the sum of 1 upto the nth term is "<<Sum<<endl;
    return 0;
}
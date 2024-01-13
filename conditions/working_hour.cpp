//checking of working hour

#include<iostream>
using namespace std;
int main(){
    int hour;
    cout<<"enter the hour";
    cin>>hour;

    if(hour>=9 && hour<=18)
    {
        cout<<"the hour is in working period";

    }
    else{
        cout<<"the hour is not in working period";

    }
    return 0;
}
//checking if hter person is valid for offer or not
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;

    if(age<=12 || age>=50)
    {
        cout<<"the persons age is valid for the offer"<<endl;

    }
    else
    {
        cout<<"the person age is not valid"<<endl;
    }
    return 0;
}
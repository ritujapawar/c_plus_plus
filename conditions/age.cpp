//checkinng the person is young or old
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter the age of person"<<endl;
    cin>>age;


    if(age>=12 && age<=50)

    {
        cout<<"the person is young"<<endl;

    }
    else{
        cout<<"the person is old"<<endl;
    }
    return 0;
}
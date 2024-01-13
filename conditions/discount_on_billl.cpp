//discounted bill

#include<iostream>
using namespace std;
int main()
{
    int ammount;
    cout<<"enter your total ammount";
    cin>>ammount;

    if(ammount>=5000){
        cout<<"20% discount"<<endl;
    }
    else if(2000<=ammount<=5000){
        cout<<"10% discount"<<endl;

    }
        else{
            cout<<"5% discopunt"<<endl;
        }
    return 0;
}
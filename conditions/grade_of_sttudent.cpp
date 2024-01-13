//displayin the grade of student
#include<iostream>
using namespace std;
typedef int marks;
int main()
{
    
    marks m1,m2,m3,total;
    float Avg;
    cout<<"enter your marks"<<endl;
    cin>>m1>>m2>>m3;
    total = m1+m2+m3;
    Avg = total/3;

    if(Avg>=60){
        cout<<"A grade";
    }
    else if(Avg>=35 && Avg<=60){
        cout<<"B grade";
    }
        else{
            cout<<"C grade";
        }
    return 0;

}
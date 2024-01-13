//average of marks using using of typedef
#include<iostream>
using  namespace std;
typedef int marks;
int main()
{
    int average;
    marks m1,m2,m3,m4,m5;
    m1=20;
    m2=200;
    m3=44;
    m4=30;
    m5=40;
    average= m1+m2+m3+m4+m5/5;
    cout<<"the average score of student is "<<average<<endl;
    return 0;
    

}

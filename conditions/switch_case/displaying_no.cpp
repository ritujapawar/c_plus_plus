//displaying the numbers using the help of switch case
#include<iostream>
using namespace std;
int main(){
    int x=3;
    switch (x)
    {
        case 1 :
        cout<<"one";
        break;
        case 2 :
        cout<<"two";
        break;
        case 3:
        cout<<"three";
        break;

        default: cout<<"invalid number";
        
    }
    return 0;
}
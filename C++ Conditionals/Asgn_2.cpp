/*Write a program to print absolute value of a number entered by the user.*/

#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;

    cout<<"Entered number is: "<<num<<endl;

    if(num<0){
        num = num * (-1);
        cout<<"The absolute value of the entered number is: "<<num<<endl;
    }
    else{
        cout<<"The absolute value of the entered number is: "<<num<<endl;
    }

    return 0;
}
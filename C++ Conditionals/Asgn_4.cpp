/*Write a program to print positive number entered by the user, if user enters a negative
number, it is skipped.*/

#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    
    if(num<0){
        cout<<"It's a Negative number and skipped."<<endl;
    }
    else{
        cout<<"It's a Positive number."<<endl;
    }
    return 0;
}
/*Write a program which takes the values of length and breadth from user and check if it is a square or not.*/

#include<iostream>
using namespace std;

int main()
{
    int length, breadth;
    cin>>length>>breadth;
    cout<<"Entered length is: "<<length<<endl;
    cout<<"Entered breadth is: "<<breadth<<endl;

    if(length == breadth){
        cout<<"It is a square."<<endl;
    }
    else{
        cout<<"It's not a square."<<endl;
    }

    return 0;
}
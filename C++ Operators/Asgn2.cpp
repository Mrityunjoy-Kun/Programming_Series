#include<iostream>
using namespace std;

int main()
{
    int a,b;

    cin>>a>>b;

    cout<<"The entered value of a is: "<<a<<endl;
    cout<<"Entered value of b is: "<<b<<endl;

    cout<<((a<50) && (a<b)) ? 1:0;
}
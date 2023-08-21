#include<iostream>
using namespace std;

int main()
{
    int a, b;
    
    cin>>a>>b;
    cout<<"The value of a : "<<a<<endl;
    
    
    cout<<"The value of b : "<<b<<endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"After swapping the value of a is: "<<a<<" \nand the value of b is: "<<b;

    return 0;
}
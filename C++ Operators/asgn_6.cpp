#include<iostream>
using namespace std;

int main(){
    float a, b, Add, Sub, Mul, Div, Mod;

    cin>>a>>b;
    cout<<"The value of a is: "<<a<<" and b is: "<<b<<endl;

    Add = a + b;
    Sub = a-b;
    Mul = a * b;
    Div = a / b;
    cout<<"Addition: "<<Add<<"\nSubtraction: "<<Sub<<"\nMultiplication: "<<Mul<<"\nDivision: "<<Div;

    return 0;
}
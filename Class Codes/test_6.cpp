/*Given two numbers a and b. Find a raise to the power b.*/
#include<iostream>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    int result = 1;
    for(int i=0; i<b; ++i){
        result *= a;
    }
    cout<<"a raise to the power of b is: "<<result<<endl;
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    if(num<100 || num>999){
        cout<<"Please enter a valid #-digit number."<<endl;
    }
    else{
        cout<<"Entered number is: "<<num<<endl;

        int digit1 = num/100;
        int digit2 = (num/10)%10;
        int digit3 = num%10;

        int sum_of_digits = digit1 + digit2 + digit3;
        cout<<"The sum of the digits of a 3-digit number is: "<<sum_of_digits<<endl;

        return 0;
    }
}
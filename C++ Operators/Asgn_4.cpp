#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;

    if(num<10000 || num>99999){
        cout<<"Please enter a valid 5 digit number."<<endl;
    }

    else{
        cout<<"Entered number is: "<<num<<endl;

    int first_digit = num / 10000;
    int secondLast_digit = (num /10) % 10;

    int sum_of_digits = first_digit + secondLast_digit;

    cout<<"The sum of First and Second Last digit of "<<num<<" is: "<<sum_of_digits;
    }

    return 0;
}
/*Find the sum of digits in a given number*/

#include<iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    cin>>num;
    cout<<"Entered Number is: "<<num<<endl;

    while(num>0){
        int last_digit = num % 10;
        sum += last_digit;

        num /= 10;
    }

    cout<<"The sum of the numbers is: "<<sum<<endl;

    return 0;
}
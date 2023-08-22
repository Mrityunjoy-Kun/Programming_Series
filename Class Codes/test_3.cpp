/*Reverse the digits of a number.*/

#include<iostream>
using namespace std;

int main(){
    int num, new_num=0;
    cin>>num;
    cout<<"Enter the number: "<<num<<endl;

    while(num>0){
        int last_digit = num%10;
        new_num = (new_num * 10) + last_digit;
        num /= 10;
    }
    cout<<"Reverse of the number: "<<new_num<<endl;

    return 0;
}
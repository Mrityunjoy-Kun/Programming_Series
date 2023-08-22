/*Count the number of digits for a given number n.*/
#include<iostream>
using namespace std;

int main()
{
    int num, digits = 0;
    cin>>num;
    cout<<"Entered Number is: "<<endl;

    while (num>0)
    {
        digits++;
        num /= 10;
    }
    cout<<"Total digits; "<<digits<<endl;

    return 0;
}
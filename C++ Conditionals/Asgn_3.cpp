/*Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and
calculate Profit or Loss.*/

#include<iostream>
using namespace std;

int main()
{
    int Cost_Price, Selling_Price;
    cin>>Cost_Price>>Selling_Price;

    cout<<"The Cost_Price is: "<<Cost_Price<<endl;
    cout<<"The Selling_price is: "<<Selling_Price<<endl;

    if(Selling_Price > Cost_Price){
        int Profit = Selling_Price - Cost_Price;
        cout<<"The profit is: "<<Profit<<endl;
    }
    else{
        int Loss = -(Selling_Price - Cost_Price);
        cout<<"The Loss is: "<<Loss<<endl;
    }

    return 0;
}
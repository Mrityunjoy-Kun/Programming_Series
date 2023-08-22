/*Create a calculator using switch statement to perform addition, subtraction, multiplication
and division.*/
#include<iostream>
using namespace std;

int main()
{
    float num_1, num_2;
    char choice;
    double result = 0;
    cout<<"Enter a symbol: "<<"\n +: Addition"<<"\n -: Subtraction"<<"\n *:Multiplication"<<"\n /: Division"<<endl;
    cin>>choice;
    
    if(choice == '+' || choice == '-' || choice == '*' || choice == '/'){
        cin>>num_1>>num_2;
        cout<<"Entered first number: "<<num_1<<endl;
        cout<<"Entered second number: "<<num_2<<endl;
    }
    switch (choice)
    {
    case '+':
        result = num_1 + num_2;
        break;
    case '-':
        result = num_1 - num_2;
        break;
    case '*':
        result = num_1 * num_2;
        break;
    case '/':
        result = num_1 / num_2;
        break;
    default: 
        cout<<"Wrong Choice."<<endl;
        
    }
    
    if(choice == '+' || choice == '-' || choice == '*' || choice == '/'){
        cout<<"The result is: "<<result<<endl;
    }

    return 0;
}
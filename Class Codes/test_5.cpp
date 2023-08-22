/*Print the first factorial number.*/
#include<iostream>
using namespace std;
int main(){
    int num, factorial = 1;

    cin>>num;
    for(int i=1; i<=num; i++){
        factorial *= i;
        cout<<factorial<<endl;
    }
    cout<<"The factorial of "<<num<<" is : "<<factorial<<endl;
    return 0;
}
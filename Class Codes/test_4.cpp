/*Find the sum of the following series:
S = 1-2+3-4+5-6....*/

#include<iostream>
using namespace std;
int main(){
    int num, sum = 0;
    cin>>num;

    for(int i=1; i<=num; i++){
        if(i%2 == 0){
            sum -= i;
        }
        else{
            sum += i;
        }
    }
    cout<<"The sum of the series is: "<<sum<<endl;
    return 0;
}
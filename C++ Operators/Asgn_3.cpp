#include<iostream>
using namespace std;

int main(){
    int Totatl_Students = 45, Boys = 25, Girls, Tootal_A_Grade_Students, Total_A_Grade_Boys = 17, Total_A_Grade_Girls;

    Girls = Totatl_Students - Boys;
    cout<<"Total girls present in the class: "<<Girls<<endl;

    Tootal_A_Grade_Students  = (45 * 80) / 100;
    cout<<"Total A grade student is: "<<Tootal_A_Grade_Students<<endl;

    Total_A_Grade_Girls = Tootal_A_Grade_Students - 17;

    cout<<"Total girls received A grade: "<<Total_A_Grade_Girls<<endl;

    return 0;
}
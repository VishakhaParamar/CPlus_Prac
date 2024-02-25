#include <iostream>
using namespace std;
int power(int num1,int num2){
    int n = 1;
    for (int i = 1; i <= num2; i++)
        n= n*num1;
    return n;}
int main() {
    char cal;
    float num1,num2;
    cout <<"enter 1st numbers:"<< endl;
    cin >> num1;
    cout <<"enter an operator (+, -, *, /,^):";
    cin >> cal;
    cout <<"enter 2nd numbers:"<< endl;
    cin >> num2;
    switch(cal){
        case'+':
            cout<<num1<<"+"<<num2<<"="<<num1+num2;
            break;
        case'-':
            cout<<num1<<"-"<<num2<<"="<<num1-num2;
            break;
        case'*':
            cout<<num1<<"*"<<num2<<"="<<num1*num2;
            break;
        case'/':
            cout<<num1<<"/"<<num2<<"="<<num1/num2;
            break;
        case'^':
            cout<<num1<<"^"<<num2<<"="<<power(num1,num2);
            break;
        default:
            cout<<"Error! The operator is not correct";
            break;
    }

    return 0;
}

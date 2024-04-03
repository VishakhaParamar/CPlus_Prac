#include <iostream>
using namespace std;
int power(int num1,int num2){   // num2 power h num1 ki.
    int n = 1;    // n ek temp. var. h jisme num1 multiply hoke store hoga
    for (int i = 1; i <= num2; i++)
        n= n*num1;
    return n;}
int main() {
    char opr;
    float num1,num2;
    cout <<"enter 1st numbers:"<< endl;
    cin >> num1;
    cout <<"enter an operator (+, -, *, /,^):";   // opr me jo operation perform karna h uska operator store hoga.
    cin >> opr;
    cout <<"enter 2nd numbers:"<< endl;
    cin >> num2;
    switch(opr){
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

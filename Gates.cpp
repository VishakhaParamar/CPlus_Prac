#include <iostream>
using namespace std;
    bool AND(bool a, bool b){
        return a&&b;
    }
    bool OR(bool a, bool b){
        return a||b;
    }
    bool XOR(bool a, bool b){
        return (a||b) && !(a&&b);
    }
int main() {
    bool a,b;
    cout<<"Enter a (0 or 1)"<<endl;
    cin>>a;
    cout<<"Enter b (0 or 1)"<<endl;
    cin>>b;
    cout<<"Result for and gate: ";
    cout<<AND(a,b)<<endl;
    cout<<"Result for or gate: ";
    cout<<OR(a,b)<<endl;
    cout<<"Result for xor gate: ";
    cout<<XOR(a,b)<<endl;
    
    return 0;
}

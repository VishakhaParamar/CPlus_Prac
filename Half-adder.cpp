#include <iostream>
using namespace std;
bool sum(bool a, bool b){
    return (a^b);
}
bool carry(bool a, bool b){
    return (a && b);
}
int main() {
    bool a,b;
    cout<<"enter a:"<<endl;
    cin>>a;
    cout<<"enter b:"<<endl;
    cin>>b;
    cout<<"Half adder : "<<endl;
    cout<<"SUM : "<<sum(a,b)<<endl;
    cout<<"CARRY : "<<carry(a,b)<<endl;
    return 0;
}

#include <iostream>
using namespace std;
void SR(bool a, bool b){
    if (a==0 && b==0){
        cout<<"previous state"<<endl;
    }
    else if (a==0 && b==1){
        cout<<"0"<<endl;
    }
    else if (a==1 && b==0){
        cout<<"1"<<endl;
    }
    else{
        cout<<"invalid"<<endl;
    }
}
int main() {
    bool a,b;
    cout<<"enter a:"<<endl;
    cin>>a;
    cout<<"enter b:"<<endl;
    cin>>b;
    cout<<"SR flip-flop : "<<endl;
    SR(a,b);
    return 0;
}

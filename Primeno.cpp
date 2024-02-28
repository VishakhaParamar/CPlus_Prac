#include <iostream>
using namespace std;
int main() {
    int n;
    for(n=1; n<=50; n++){
    if(n==2 || n==3 || n==5 || n==7){
    cout<<n<<" is a prime number"<<endl;
    }
    else if(n==1){
        cout<<n<<" is a not a prime number"<<endl;
    }
    else if(n%2==0 || n%3==0 || n%5==0){
        cout<<n<<" is a not a prime number"<<endl;
    }
    else
    cout<<n<<" is a prime number"<<endl;
    }
    return 0;
}

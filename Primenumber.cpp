#include<iostream>
using namespace std;

int main(){
    int n;
    float j;
    int i=2;

    cout<<"Enter n: ";
    cin>>n;

    while(i<n){
        j=n%i;
        if(j==0){
            cout<<i<<endl;
        }
        i++;
    }

    if(j==0)
    cout<<"Its not prime";
    else
    cout<<"Its prime";

    return 0;
}

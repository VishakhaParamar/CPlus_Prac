#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter dividend"<<endl;
    cin>>a;
    cout<<"Enter divisor"<<endl;
    cin>>b;
    if(b==0){
    cout<<"Can't divide by 0";
    }
    else
    cout<<a<<" / "<<b<<" = "<<a/b<<endl;
    cout<<"Remider = "<<a%b;
    
    return 0;
}

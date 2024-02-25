#include <iostream>
using namespace std;
int main() {
    srand(time(NULL));
    int guess=rand()%100;
    int guessed,n=0;
    cout<<"enter the number b/w 1 to 100"<<endl;
    do{
        cout<<"enter any no."<<endl;
        cin>>guessed;
        if(guessed<guess){
            cout<<"too low"<<endl;
        }
        else if(guessed>guess){
            cout<<"too high"<<endl;
        }
        else {
            cout<<"congrats"<<endl;
        }
        n++;
    }
    while(guessed != guess);
    cout<<"no. of try:"<<n<<endl;
    return 0;
    
}

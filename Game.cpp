#include <iostream>
using namespace std;
int main() {
    srand(time(NULL));
//This line seeds the random number generator using the current time. This ensures different random numbers are generated on each program run.
    int guess=rand()%100;
// This generates a random integer between 0 (inclusive) and 99 (exclusive) and stores it in the variable guess. This is the number the user needs to guess.
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
//jab guess kiya ho vo hme first time me same na mile tab
    cout<<"no. of try:"<<n<<endl;
    return 0;
    
}

//1st type
#include <iostream>
#include <cmath>
using namespace std;
int power (int x, int y){
    if (y == 0)
    return 1;
    else 
    return x*power(x, y-1);
}
int main() {
    int a,b;
    cout << "Enter the base: " << endl;
    cin >> a;
    cout << "Enter the exp.: " << endl;
    cin >> b;
    int c = power(a,b);
    cout << c << endl;
    return 0;
}

//2nd type

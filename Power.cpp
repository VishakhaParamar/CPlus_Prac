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
#include <iostream>
#include <cmath>
using namespace std;
int main () {
int b, p;
cout << "Enter The Base: " << endl;
cin >> b;
cout << "Enter The Power: " << endl;
cin >> p;
cout << "Answer:" << pow(b,p) << endl;
return 0;
}

//3rd type
#include <iostream>
using namespace std;
int main () {
int b, p, temp= 1, r;
cout << "Enter The Base" << endl;
cin >> b;
cout << "Enter The Power" << endl;
cin >> p;
for (int i = 1; i <= p; i++) {
r = b * temp;
temp = r;
}
cout << "Answer: " <<r<< endl;
return 0;
}

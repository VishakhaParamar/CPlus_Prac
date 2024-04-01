#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    int a,b,c;
    double x,y;
    cout << "Enter a: " << endl;
    cin >> a;
    cout << "Enter b: " << endl;
    cin >> b;
    cout << "Enter c: " << endl;
    cin >> c;
    x = (-b + sqrt(b*b - 4*a*c)) / (2*a);
    cout << "x=" << x << endl;
    y = (-b - sqrt(b*b - 4*a*c)) / (2*a);
    cout << "y=" << y << endl;
    return 0;
}

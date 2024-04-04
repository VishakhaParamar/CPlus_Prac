#include <iostream>
using namespace std;
int main() {
    int amt,temp;
    cout << "Enter Amount: " ;
    cin >> amt;
    int fi = amt / 5;
    temp = amt % 5;
    cout << "5's coin: " << fi <<endl;
    int te = temp / 2;
    temp = temp % 2;
    cout << "2's coin: " << te << endl;
    int one = temp;
    cout << "1's coin: " << one << endl;
    int add = fi+te+one ;
    cout << "No. of coin:" << add << endl;
    return 0;
}

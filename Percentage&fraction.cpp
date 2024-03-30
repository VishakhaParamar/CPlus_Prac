#include <iostream>
using namespace std;
int main() {
    float n;//no. of sub.
    float mark = 0, omark = 0;
    cout << "Enter number of subject:" << endl;
    cin >> n;
    float total = n*100;
    for(int i=1; i<=n; i++){
        cout << "Enter marks for subject " << i << endl;
        cin >> mark;
        omark+=mark;
    }
    float a = omark / total;
    cout << omark << "/" << total << " = " << a << endl;
    float per = a * 100;
    // omarks= obtained marks, total= sub. ke total marks ka total
    cout << per <<  "%";
    return 0;
}

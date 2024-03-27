#include <iostream>
using namespace std;
void towerOfHanoi(int n, char source, char auxiliary, char destination){
    // n=no. of disk, source=intial point, aux.=mid, dest.=terminal
    if (n == 1){
        cout << "Move disk 1 from rod" << source << " to rod " << destination << endl;
        return;
    }
    towerOfHanoi(n - 1, source, destination, auxiliary);
    cout << "Move disk" << n << " from rod " << source << " to rod " << destination << endl;
    towerOfHanoi(n - 1, auxiliary, source, destination);
    // for repetation
}
int main() {
    int n;
    cout << "Enter the number of disk: ";
    cin >> n;
    cout << "Steps to solve Tower of Hanoi problem with " << n << " disk: " << endl;
    towerOfHanoi(n, 'A','B','C');   
    return 0;
}

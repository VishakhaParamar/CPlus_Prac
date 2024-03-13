#include <iostream>
using namespace std;
int main() {
    int x=10,y=11;
        int *temp,*i,*u;
        i = & x;
        u = & y;
        //swapping
        temp = i;
        i = u;
        u = temp;
        //print
        cout << "x : " << *i << endl;
        cout << "y : " << *u << endl;
    return 0;
}

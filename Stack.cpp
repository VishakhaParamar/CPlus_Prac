#include <iostream>
#include <stack>
using namespace std;

void stackdemon() {
    stack<int> mystack;
    // push elements into the stack
    mystack.push(10);
    mystack.push(20);
    mystack.push(30);
    // print elements in the stack
    cout << "Stack elements: ";
    while (!mystack.empty()) {
        cout << mystack.top() << " ";
        mystack.pop();
    }
}
int main() {
    stackdemon();
    return 0;
}

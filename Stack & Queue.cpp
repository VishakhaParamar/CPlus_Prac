#include <iostream>
#include <stack>
#include <queue>
using namespace std;
void stackDemo() {
    stack<int> myStack;
    // Push ele. into the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    // Print ele. in the stack
    cout << "Stack elements: ";
    while (!myStack.empty()) {
        // It will work when it's not null
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;
}
void queueDemo() {
    queue<int> myQueue;
    // Enqueue(Push) ele. into the queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);
    // Print ele. in the queue
    cout << "Queue elements: ";
    while (!myQueue.empty()) {
        // It will work when it's not null
        cout << myQueue.front() << " ";
        myQueue.pop();
    }
    cout << endl;
}
int main() {
    // Output comes in LIFO order
    cout << "Stack Example: " << endl;
    stackDemo();
    // Output comes in FIFO order
    cout << "Queue Example: " << endl;
    queueDemo();
    return 0;
}

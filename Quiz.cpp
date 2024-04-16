#include <iostream>
#include <string>
using namespace std;
int main() {
    int ans = 0;
    string answer, name;
    cout << "Enter your name" << endl;
    cin >> name;
    cout << "Quiz" << endl;
    cout << "-> You have to answer every question" << endl;
    cout << "-> 3 answer should be true of 5" << endl;
    cout << "Start the test"  << endl;
    // question
    //1
    cout << "5 + 2 = ? " << endl;
    cin >> answer;
    if(answer == "7" || answer == "seven")
    ans++;
    //2
    cout << "What is the capital of gujrat?" << endl;
    cin >> answer;
    if(answer == "Gandhinagar" || answer == "gandhinagar")
    ans++;
    //3
    cout << "What is the full-form of JG?" << endl;
    cin >> answer;
    if(answer == "John-Geevargese" || answer == "john-geevargese")
    ans++;
    //4
    cout << "Who is the father of harry potter?" <<endl;
    cin >> answer;
    if(answer == "James" || answer == "james")
    ans++;
    //5
    cout << "Which force is found by newton?" <<endl;
    cin >> answer;
    if(answer == "Gravitation"|| answer == "gravitation")
    ans++;
    if (ans > 3 || ans == 3){
        cout << "You clear this test." << endl;
    }
    else {
        cout << "You failed." << endl;
    }
    cout << name << " you scored " << ans << endl;
    return 0;
}

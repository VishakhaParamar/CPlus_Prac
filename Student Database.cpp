#include <iostream>
using namespace std;
struct student{
    char name[50];
    int roll;
    float marks;
}s[3];//array which stores student. data 
int main() {
    cout << "Enter information of student: " << endl;
    for(int i=1; i<=3; i++){
        s[i].roll = i;
        cout << "For roll number_" << s[i].roll << "," << endl;
        
        cout << "Enter name:\n" ;
        cin >> s[i].name;
        cout << "Enter marks:\n";
        cin >> s[i].marks;
        
        cout << endl;
    }
    cout << "Displaying Information: " << endl;
    for(int i=1; i<=3; i++){
        cout << "\nRoll_number: " << i << endl;
        cout << "Name:" << s[i].name << endl;
        cout << "Marks:" << s[i].marks << endl;
    }
    return 0;
}

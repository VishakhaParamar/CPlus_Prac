#include <iostream>
using namespace std;
int main() {
    int nsub;
    double totalcredits = 0.0;
    double totalgrades = 0.0;
    cout << "Enter the total number of subjects: \n";
    cin >> nsub;
    for (int i = 1; i <= nsub; ++i) {
        double credit, grade;
        cout << "Enter credit for "<<i<<"subject "<<i<<": \n";
        cin >> credit;
        cout << "Enter grade for "<<i<<"subject "<<i<<": \n";
        cin >> grade;
        totalcredits += credit;
        totalgrades += credit * grade;}
    if(totalcredits>0){
    double cgpa = totalgrades / totalcredits;
    cout << "Your CGPA is: \n" << cgpa;}
    else{
    cout<<"Credit cant be 0";}
    return 0;
}

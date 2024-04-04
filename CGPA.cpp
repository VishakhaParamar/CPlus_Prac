#include <iostream> 
using namespace std;
int main() {
    int n_sub;
    float totalcredits = 0.0;
    float totalgrades = 0.0;
    cout << "Enter the total number of subjects: \n";
    cin >> n_sub;
    for (int i = 1; i <= n_sub; i++) { 
        float credit, grade;  // Jitne subj. h un sabke credit and grade lege.
        cout << "Enter credit for subject "<<i<<": \n";
        cin >> credit;
        cout << "Enter grade for subject "<<i<<": \n";
        cin >> grade;
        totalcredits += credit; // totalcredits me saare subj. ke credits add hoge.
        totalgrades += credit * grade;  // totalgrades me credit * grade hoga phir wo totalgrades me add ho jaayega.
        }
    if(totalcredits>0){ // totalcredits 0 nahi ho sakte.
    float cgpa = totalgrades / totalcredits;
    cout << "Your CGPA is: \n" << cgpa;}
    else{
    cout<<"Credit cant be 0";}
    return 0;
}

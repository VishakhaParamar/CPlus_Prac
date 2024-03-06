#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
struct Student {
    string name;    
    int math,phy,che,total,rank;
};
bool compareTwoStudent(Student a,Student b){
    if(a.total != b.total)
        return a.total > b.total;
    if(a.math != b.math)
        return a.math > b.math;
    if(a.phy != b.phy)
        return a.phy > b.phy;
    return (a.che > b.che);
}
void computeRanks(Student a[], int n){
    for(int i = 0; i < n; i++)
        a[i].total = a[i].math + a[i].phy + a[i].che;

    sort(a, a+n, compareTwoStudent);
    for(int i = 0; i < n; i++)
        a[i].rank = i + 1;
}    
//Drive code
int main() {
    int n = 10;
    //array of structure objects
    Student a[n];
    //Details of Student 0
    a[0].name = "Vishakha";
    a[0].math = 80;
    a[0].phy = 95;
    a[0].che = 85;
    //Details of Student 1
    a[1].name = "Tanvi   ";
    a[1].math = 81;
    a[1].phy = 92;
    a[1].che = 83;
    //Details of Student 2
    a[2].name = "Meet    ";
    a[2].math = 83;
    a[2].phy = 92;
    a[2].che = 83;
    //Details of Student 3
    a[3].name = "Arpan   ";
    a[3].math = 81;
    a[3].phy = 93;
    a[3].che = 83;
    //Details of Student 4
    a[4].name = "Ritu    ";
    a[4].math = 81;
    a[4].phy = 92;
    a[4].che = 83;
    //Details of Student 5
    a[5].name = "Rohit   ";
    a[5].math = 81;
    a[5].phy = 92;
    a[5].che = 83;
    //Details of Student 6
    a[6].name = "Tanisha ";
    a[6].math = 81;
    a[6].phy = 92;
    a[6].che = 83;
    //Details of Student 7
    a[7].name = "Jeet    ";
    a[7].math = 81;
    a[7].phy = 92;
    a[7].che = 83;
    //Details of Student 8
    a[8].name = "Vaidehi ";
    a[8].math = 81;
    a[8].phy = 92;
    a[8].che = 83;
    //Details of Student 9
    a[9].name = "Krish  ";
    a[9].math = 81;
    a[9].phy = 92;
    a[9].che = 83;
    computeRanks(a, n);
    cout << "Rank" << " " << "Name" << "       ";
    cout << "Maths" << "  " << "Physics" << "  " << "Chemistry";
    cout << "  " << "Total\n";
    for(int i = 0; i < n; i++){
        cout << a[i].rank << "    ";
        cout << a[i].name << "    ";
        cout << a[i].math << "     " << a[i].phy << "        " << a[i].che << "       ";
        cout << a[i].total << " ";
        cout << "\n";
    }
    return 0;
}

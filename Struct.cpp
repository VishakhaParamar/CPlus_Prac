#include <iostream>
using namespace std;
    struct detail{
        char name[80], branch[80];
        int age, semester;
};
int main() {
    detail jg;
    cout<<"Enter name: ";
    cin>>jg.name;
    cout<<"Enter age: ";
    cin>>jg.age;
    cout<<"Enter branch: ";
    cin>>jg.branch;
    cout<<"Enter semester: ";
    cin>>jg.semester;
    cout<<"\n Student name is "<<jg.name<<"\n His age is: "<<jg.age<<"\n His branch: "<<jg.branch<<"\n He is in "<< jg.semester<<" semester";
    return 0;
}

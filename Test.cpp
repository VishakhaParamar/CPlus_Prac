#include <iostream>
#include <string>
using namespace std;
class stud{
    public:
    string name;
    int rollno;
    int mark;
};
int main() {
    stud s;
    s.name;
    s.rollno;
    s.mark;
    cout<<"name: "<<endl;
    cin>>s.name;
    cout<<"roll no: "<<endl;
    cin>>s.rollno;
    cout<<"mark: "<<endl;
    cin>>s.mark;
    cout<<"name: "<<s.name<<endl;
    cout<<"roll no: "<<s.rollno<<endl;
    cout<<"mark: "<<s.mark<<endl;
    return 0;
}

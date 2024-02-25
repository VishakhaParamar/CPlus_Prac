#include <iostream>
using namespace std;
class b{
    public:
    virtual void show(){
        cout<<"parent\n";
    }
};
class d:public b{
    public:
    void show(){
        cout<<"child\n";
    }
}; 
int main() {
    b * bptr;
    d obj;
    bptr=&obj;
    bptr->show();
    return 0;
}

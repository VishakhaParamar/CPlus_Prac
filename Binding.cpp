#include <iostream>
using namespace std;
class b{
    public:
    virtual void show(){  // It is the base class with a virtual function show()
        cout<<"parent\n";
    }
};
class d:public b{
    public:
    void show(){  // It is derived from class b and overrides the show() function from the base class.
        cout<<"child\n";
    }
}; 
int main() {
    b * bptr; // It declares a pointer bptr that can point to objects of class b or its derived classes.
    d obj;  // Object with name obj of class d is created.
    bptr=&obj;  // bptr stores the address of the obj object.
    bptr->show(); // Calls the show() func. from class d because it overrides the virtual function of class b.
    return 0;
}

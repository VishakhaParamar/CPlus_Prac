#include <iostream>
#include <string>
using namespace std;
struct book {
    string name[50] = {"Harry-Potter", "To-kill-a-mocking-bird", "Atomic-habit","The-blue-umbrella"};
    string author[50] = {"J.K.Rowling", "Harper-Lee", "James-Clear","Ruskin-Bond"};
    string company[50] = {"Scholastic-Press", "Harper-Collins", "Random-House-Business", "Rupa-Publications-India"};
    string year[50] = {"1987","1986","1954","1983"};
};
int main() {
    string nm;
    int i=0;
    book m;
    cout << "book store -->" << endl;
    cout << "Enter the book name: " << endl;
    cin >> nm;
    while(i<4){
    if(nm==m.name[i])
        break;
    else
        i++;
    }
        cout << m.author[i] << endl;
        cout << m.company[i] << endl;
        cout << m.year[i] << endl;

    return 0;
}

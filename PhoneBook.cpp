#include <iostream>
#include <string>
// for string manipulation (like storing names).
#include <map>
// for using a map data structure to store phonebook entries (key-value pairs).
using namespace std;
int main() {
    map<string,string> phonebook;
/*  This line declares a map named phonebook. A map is a data structure that stores key-value pairs.
    In this case, the key will be the name (string) and the value will be the phone number (string) associated with that name. */
    cout<<"Welcome to phonebook"<<endl;
    
    while(true){
        cout<<"1. Add contact"<<endl;
        cout<<"2. Search contact"<<endl;
        cout<<"3. Display contacts"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter Your Choice"<<endl;
        
        int choice;
        cin>>choice;
        switch(choice){
            case 1:
            {
                string name, number;
                cout<<"Enter Name"<<endl;
                cin>>name;
                cout<<"Enter Number"<<endl;
                cin>>number;
                phonebook[name]=number;
// line adds a new entry to the phonebook map. The name becomes the key, and the phone number becomes the value associated with that key.
                cout<<"Contact added successfully"<<endl;
                break;
            }
            case 2:
            {
                string name;
                cout<<"Enter Name"<<endl;
                cin>>name;
                if(phonebook.find(name) != phonebook.end())
// jab ham find kar rhe hai aur jo store hai vo same na ho tab
                { cout<<"contact found\n"<<name<<"\n"<<phonebook[name]<<endl; }
                else
                { cout<<"does not exist"<<endl; }
                break;
            }
            case 3:
            {
                cout<<"contact"<<endl;
                for(const auto& entry:phonebook)
// entry predefine, entry.first is key and entry.second is value par point kare
                { cout<<"Name: "<<entry.first<<"\nNumber: "<<entry.second<<endl; }
            }
            case 4:
            {
                cout<<"Existing Phonebook..."<<endl;
                return 0;
            }
        }
    }
    return 0;
}

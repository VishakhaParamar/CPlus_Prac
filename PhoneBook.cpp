#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
    map<string,string> phonebook;
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
                cout<<"Contact added successfully"<<endl;
                break;
            }
            case 2:
            {
                string name;
                cout<<"Enter Name"<<endl;
                cin>>name;
                if(phonebook.find(name) != phonebook.end())
                { cout<<"contact found\n"<<name<<"\n"<<phonebook[name]<<endl; }
                else
                { cout<<"does not exist"<<endl; }
                break;
            }
            case 3:
            {
                cout<<"contact"<<endl;
                for(const auto& entry:phonebook)
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

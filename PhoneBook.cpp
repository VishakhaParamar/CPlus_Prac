#include <iostream>
#include <string>
// For string manipulation (like storing names).
#include <map>
// For using a map data structure to store phonebook entries (key-value pairs).
using namespace std;
int main() {
    map<string,string> phonebook;
/*  This line declares a map named phonebook. A map is a data structure that stores key-value pairs.
    In this case, the key will be the name (1st string) and the value will be the phone number (2nd string) associated with that name. */
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
                phonebook[name]=number;    // Basically links the entered name with entered phone number.
                 // Line adds a new entry to the phonebook map. The name becomes the key, and the phone number becomes the value associated with that key.
                cout<<"Contact added successfully"<<endl;
                break;
            }
            case 2:
            {
                string name;
                cout<<"Enter Name"<<endl;
                cin>>name;
                if(phonebook.find(name) != phonebook.end()) // Jab ham find kar rhe hai aur jo store hai vo same na ho tab.
                  /* .find(name) check karega ki entered name phonebook map me h ya nahi agar nahi hoga to wo check karte karte .end()/null pe pohoch jayega,
                  and fir phonebook.end() != phonebook.end() hoga and ye condition false h to else me jayega and kahega contact not found. */
                  /* Jab .find(name) ko entered value mil jaaye to
                  example: mit != phonebook.end() hoga and ye codition true h to contact found print hoga. */
                { cout<<"contact found\n"<<name<<"\n"<<phonebook[name]<<endl; }
                else
                { cout<<"does not exist"<<endl; }
                break;
            }
            case 3:
            {
                cout<<"contact"<<endl;
                for(const auto& entry:phonebook)
                // Entry predefine, entry.first is key and entry.second is value par point kare.
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

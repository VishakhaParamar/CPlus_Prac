// e-com. platform mang.
#include <iostream>
#include <map>
using namespace std;
map<string, map<string, double>> items;
void  products(){
    items["Book"]["1984"] = 150;
    items["Book"]["Ikigai"] = 250;
    items["Soap"]["Cinthol"] = 40;
    items["Soap"]["Lux"] = 50;
}
void purchase(const  string& category, const string& type){
    if(items.find(category) != items.end() && items[category].find(type) != items[category].end()){
      cout << "You have purchased " << type << " in " << category << " for Rs." << items[category][type] << endl;
    }   
    else{
      cout << "Invalid selection! Item not available." << endl;
    }
}
int main() {
    products();
    cout << "Welcome to our shop!\n" << endl;
        bool cs = true;
    while (cs) {
        cout << "Available Produts:\n";
        for(const auto& category : items){
            cout << category.first << ":\n";
            for(const auto& type : category.second) {
                cout << "-" << type.first << " Price: " << type.second << endl;
            }
        }
        string category, type;
        cout << "Enter the category you want to purchase: "<< endl;
        cin >> category;
        cout << "Enter the model you want to purchase: " << endl;
        cin >> type;
        purchase(category, type);
            char choice;
            cout << "Do you want to continue shopping? (y/n): ";
            cin >> choice;
            cs = (choice == 'y' || choice == 'Y');
    }
    cout << "Thank you for shopping with us! Goodbye!" << endl;
    return 0;
}

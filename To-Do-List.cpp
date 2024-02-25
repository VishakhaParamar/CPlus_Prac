#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//structure to represent task
struct task{
    string description;
    bool completed;
    task(string desc) : description(desc), completed(false) {}
};
//Function to add a task to to-do list
void addtask(vector<task>& todolist, const string& description){
    todolist.push_back(task(description));
    cout<<"Task added: "<<description<<endl;
}
//Function to mark a task as completed
void completetask(vector<task>& todolist, int index){
    if(index>=0 && index<todolist.size()){
        todolist[index].completed=true;
        cout<<"Task Completed: "<<todolist[index].description<<endl;
    } else{
        cout<<"Invalid task index."<<endl;
    }
}
//function to display the to-do list
void displaytodolist(const vector<task>& todolist){
    cout<<"To-Do List:"<<endl;
    for(int i=0;i<todolist.size();++i){
        cout<<"["<<(todolist[i].completed ? "X" : " ") << "] "<<i+1<<". "<<todolist[i].description<<endl;
    }
}
int main() {
    vector<task> todolist;
    int choice;
    do{
        cout<<"\nMenu:\n";
        cout<<"1. Add Task\n";
        cout<<"2. Complete Task\n";
        cout<<"3. Display To-Do List\n";
        cout<<"4. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        
        switch(choice){
            case 1: {
                string description;
                cout<<"Enter task description: ";
                cin.ignore(); //Clear new line character from input buffer
                getline(cin, description);
                addtask(todolist, description);
                break;
            }
            case 2: {
                int index;
                cout<<"Enter task index to mark as completed: ";
                cin>>index;
                completetask(todolist,index-1); //Adjust index to 0-based
                break;
            }
            case 3:
                displaytodolist(todolist);
                break;
            case 4:
                cout<<"Exiting..."<<endl;
                break;
            default:
                cout<<"Invalid choice. Please try again."<<endl;
        }
    } while(choice!=4);
    
    return 0;
}

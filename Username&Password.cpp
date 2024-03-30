#include <iostream>
#include <string>
#include <map>
using namespace std;
class login{
    private:
    map<string,string>users;
    public:
    bool registeruser(string username,string password){
        if(users.find(username)==users.end()){
            users[username]=password;
            return true;
        }
            return false;
    }
    bool authentication(string username,string password){
        if(users.find(username)!=users.end()&&users[username]==password){
            return true;
        }
           return false;
    }
};
int main(){
    login id;
    id.registeruser("cat","cat888");
    string username,password;
    cout<<"enter username"<<endl;
    cin>>username;
    cout<<"enter password"<<endl;
    cin>>password;
     if(id.authentication(username,password)){
         cout<<"login succesfully"<<endl;
    }
    else{
     cout<<"login failed";
    }
    return 0;
}

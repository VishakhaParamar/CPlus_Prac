#include <iostream>
#include <string>
#include <map>
using namespace std;
class login{
    private:
    map<string,string>users; // users map ka var. h jisme 1st string username ke liye h jo link h 2nd string password se.
    public:
    bool registeruser(string username,string password){ // registeruser is a func. which register a new user.
        if(users.find(username)==users.end()){  //  It checks if the username already exists in the users map.
            users[username]=password; // If doesn't exists, it adds the username-password pair to the map and return true.
            return true;
        }
            return false; // If username already exists, it returns false.
    }
    bool authentication(string username,string password){ // method that checks username exists and password matches with that username.
        if(users.find(username)!=users.end()&&users[username]==password){
          // 1st condition ye check karega ki username users map me h ya nahi.
          // 2nd condition ye check karega ki username ke sath jo password h wo match karta h ki nahi.
            return true;  // dono condition true hogi to true return hoga.
        }
           return false;
    }
};
int main(){
    login id;
    id.registeruser("cat","cat888");  // user register kiya h jisme cat username h and cat888 password h.
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

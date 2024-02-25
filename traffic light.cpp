#include <iostream>
#include <thread>//one after another light
#include <chrono>// particular time for signal for red or green
using namespace std;
enum trafficlight { red, green };//enum = datatype maker
class trafficsignal {
    private:
    trafficlight currentlight;
    public:
    trafficsignal() : currentlight(red) {}
    
    void switchlight() {
        if (currentlight == red)
        currentlight = green;
        else 
        currentlight = red;
    }
    trafficlight getcurrentlight() const /*je state hase ej rehshe */ {
        return currentlight;
    }
};
class intersection {
    private:
    trafficsignal signal;
    public:
    void simulate(){
        while (true){
            cout<<"traffic light is ";
            if(signal.getcurrentlight() == red)
                cout<<"red"<<endl;
            else
                cout<<"green"<<endl;
                signal.switchlight();
                this_thread::sleep_for(chrono::seconds(5));
        }
    }
};
int main() {
    intersection is;
    is.simulate();
    return 0;
}

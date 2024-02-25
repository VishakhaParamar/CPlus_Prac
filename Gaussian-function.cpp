#include <iostream>
#include <cmath>
using namespace std;
    double gaussian(double x, double mean, double stddev){
        return exp(-pow(x - mean, 2)/(2 * pow(stddev,2))) / (stddev * sqrt(2 * M_PI));
    }
int main(){
    double x,mean,stddev;
    //input parameter
    cout<<"Enter the mean:"<<endl;
    cin>>mean;
    cout<<"Enter the value of stddev:"<<endl;
    cin>>stddev;
    cout<<"Enter the value of x"<<endl;
    cin>>x;
    double result = gaussian(x,mean,stddev);
    cout<<"result "<< x <<"is:"<< result << endl;
    return 0;
}

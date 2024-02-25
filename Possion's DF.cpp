#include<iostream>
#include<cmath>
using namespace std;
//FUNCTION TO CALCULATE THE FACTORIAL OF A NUMBER
unsigned long long factorial(int n){
    if(n==0||n==1)
    return 1;
   else
   return n*factorial(n-1);
}  
//Function to calculate the Poisson probability mass function(PMF)
double poissonPMF(int k,double lambda){
    return exp(-lambda)*pow(lambda,k)/factorial(k);
}
int main(){
    int k;
    double lambda;
    //INPUT PARAMETERS
    cout<<"Enter the value of k: ";
    cin>>k;
    cout<<"Enter the value of lambda: ";
    cin>>lambda;
    //calculate and display the poisson pmf
    double pmf=poissonPMF(k,lambda);
    cout<<"P(X= "<<k<<" ) ="<<pmf;
    return 0;
    
}

#include <iostream>
using namespace std;

long int factorial(long int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    long int num;
    cout<<"Enter Number"<<endl;
    cin>>num;
    cout << "Factorial of "
        << num << " is: " << factorial(num) << endl;
    return 0;
}

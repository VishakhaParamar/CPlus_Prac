#include <iostream>
using namespace std;
void bubblesort(int arr[], int n){
    for(int i=0; i<n-1; ++i){
        for(int j=0; j<n-i-1; ++j){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main() {
    int arr[]={11,22,01,23,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    for(int i=0; i<n; ++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}


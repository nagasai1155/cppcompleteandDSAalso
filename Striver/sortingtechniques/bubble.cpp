#include <iostream>
using namespace std;



void bubble_sort(int arr[], int n){
    for(int i=n-1 ;i>=1 ;i--){
           
           for(int j=0;j<=i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
           }
    }
    cout<<"the sorted elements are : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i] <<" "<<endl;
    }
}

int main(){
    cout<<"enter array size"<<endl;
    int n;//size of an array;
    cin>>n;
    cout<<"enter array elements :"<<endl;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(arr,n);
}
#include <iostream>
#include <vector>
using namespace std;


void merge_divide(int arr[], int low ,int high){

    if(low == high){
        return;
    }

    int mid = (low+high)/2;

    merge_divide(arr,low,mid);
    merge_divide(arr,mid+1,high);
    //merging(arr,low,mid,high);
}
int main(){
    int n;
    cin>>n;//size of array
     cout<<"enter array elements"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //dividing an array 
    merge_divide(arr,0,n-1);
}
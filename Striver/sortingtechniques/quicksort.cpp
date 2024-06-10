#include <iostream>
using namespace std;

int partition(int arr[],int low,int high){
    int pivot = arr[low];

    int i = low;
    int j = high;

    while(i < j){
        while(arr[i] <= pivot && i <= high-1){
            i++;
        }
        while(arr[j] > pivot && j >= low + 1){
            j--;
        }

        if(i < j){
            swap(arr[i],arr[j]);
        }

    }
    swap(arr[low],arr[j]);
    return j;
}
void quickSort(int arr[], int low,int high){
    if(low < high){
        int pindex = partition(arr,low,high);
        quickSort(arr,low,pindex-1);
        quickSort(arr,pindex+1,high);
    }

    
    
}
int main(){
    cout<<"enter size of array"<<endl;
    int n;
    cin>>n;
    cout<<"enter array elements"<<endl;
    int arr[n];
            
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quickSort(arr,0 , n-1);
    cout<<"the sorted elements are :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" " <<endl;
    }

}
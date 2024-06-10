#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void left_rotate(int n, vector<int>& arr){
   //left rotate by one place ;
   int temp = arr[0];
   for(int i=1;i<n;i++){
    arr[i-1] = arr[i];
   }
   //now shift temp to last to the array
   for(int i=n-1 ;i<n;i++){
    arr[i] = temp;
   }
   cout<<"finally the left shifted array is :"<<endl;
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" "<<endl;
   }
}
int main(){
     cout<<"enter the size of arraY"<<endl;
    int n;
    cin>>n;
    cout<<"enter vector elements "<<endl;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    left_rotate(n,arr);
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  int largest = arr[0];
  for(int i=0;i<n;i++){
    if(arr[i] > largest){
        largest = arr[i];
    }
    
  }
  cout<<"the larges is :"<<largest<<endl;

  cout<<"second largest finding process"<<endl;

  int slargest = -1;
  for(int i=0;i<n;i++){
    if(arr[i]> slargest && arr[i] !=largest){
        slargest = arr[i];
    }
  }
  cout<<"the second largest is : "<<slargest<<endl;
}
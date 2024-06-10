#include<iostream>
using namespace std;
int rearr(int arr[5]);
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int x = rearr(arr);
}
int rearr(int arr[5]){
    int rr[5];
  for(int i=0;i<5;i++){
    if(arr[i] % 2 ==0 ){
          rr[i]= arr[i];  
        
    }
  }
  return rearr;
}
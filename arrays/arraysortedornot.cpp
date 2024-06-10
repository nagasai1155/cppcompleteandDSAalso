#include <iostream>
using namespace std;
// #define PI 3.15;

bool isSorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i] >= arr[i-1]){

        }else return false;
    }
    return true;
}
int main(){
  //finding the array sorted or not 
  //int arr[4] = {23,34,55,56};
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  bool dd =  isSorted(arr,n);
  if(dd==true)cout<<"sorted"<<endl;
  else cout<<"not sorted"<<endl;

}
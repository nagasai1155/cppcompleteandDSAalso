#include <iostream>
using namespace std;
int main(){
    int arr[5] = {2,7,34,12,4};
    int target = 41;
    for(int i=0 ;i<5;i++){
        for(int j=i+1;j<5;j++){
             if(target == arr[i] + arr[j]){
                cout<<i<<" "<<j;
             }
        }
    }
}
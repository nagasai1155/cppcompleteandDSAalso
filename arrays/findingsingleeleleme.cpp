#include <iostream>
using namespace std;
 
 int main(){
    
    int arr[5] = {1,1,2,3,4};
    int cnt = 0;
    int i;
for( i=0;i<5;i++){
    cnt ^= arr[i];
}
cout<<cnt;
    
 }
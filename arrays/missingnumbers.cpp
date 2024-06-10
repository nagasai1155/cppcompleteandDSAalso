#include <iostream>
using namespace std;
int main(){
    //missig number ffrom thje give n value 
    cout<<"enter the size of array";
    int n;
    cin>>n;
    cout<<"enter the elements "<<endl;
    int b[n];
    for(int  i=0;i<n;i++){
        cin>>b[i];
    }
   
    for(int i=1;i<=n;i++){
        int flag=0;
        for(int j=0;j<n;j++){
             if(b[j] == i){
                flag = 1;
                break;
             }
        }
        if(flag ==0){
            cout<<i<<endl;
        }
    }
}
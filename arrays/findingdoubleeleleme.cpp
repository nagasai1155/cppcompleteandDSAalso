#include <iostream>
using namespace std;
int main(){
    int num[5] = {3,13,1,1,7};
    int cnt =0;
    int i;
    for( i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(num[i]== num[j]){
                cout<<"number is :"<< num[i]<<" " <<num[j]<<endl;
            }
        }
            
        }
    
        
    }

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> n = {3,6,9,12,5,15,20,18,25,100,36};
      int count3 =0;
      int count5 = 0;
    for(int b : n){
        if(b%3==0 ){
                count3++;
        }
        else if(b%5==0)
        count5++; 
           
    }
    cout<<count3<<endl;
    cout<<count5<<endl;
}
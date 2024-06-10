#include <iostream>
using namespace std;

int main(){
     int t;
     cin>>t;

     while(t-->0){
        int x,y,z,secondmax;
        cin>>x;
        cin>>y;
        cin>>z;

        if((x>y && x<z)|| (x<y && x>z)){
              secondmax = x;
        }else if((y>x && y<z)|| (y<x && y>z)){
            secondmax = y;
        }else{
            secondmax= z;
        }
        cout<<secondmax<<endl;

     }
}
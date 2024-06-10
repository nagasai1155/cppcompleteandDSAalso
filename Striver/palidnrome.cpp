#include <iostream>
using namespace std;
int main(){
int cnt = 0;
    int n;
    cin>>n;
    int dup = n;

    while(n> 0){
        
        int last = n%10;
        cnt = (cnt * 10) + last;
        n = n/10;   

    }
    if(dup == cnt){
        cout<<"yes "<<cnt<<endl;
    }
    else {
        cout<<"soryy it's not a pallindrome"<<endl;
    }
    
}
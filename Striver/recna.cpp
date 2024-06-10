#include <iostream>
using namespace std;

void fun(int n){
    if(n < 1){
        return ;
    }
    cout<<"hello"<<endl;
    fun(n-1);
}
int main(){
    int n=3;
    fun(n);
    return 0;
}
#include <iostream>
using namespace std;

void fun(int k){
    if(k> 0){
        cout<<"nagasaibalam"<<endl;
    }
    fun(k-1);
}
int main(){

int n;
cin>>n;
fun(3);
return 0;
}
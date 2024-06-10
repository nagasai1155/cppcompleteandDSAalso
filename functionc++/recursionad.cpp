#include <iostream>
using namespace std;

int fun(int k){
    if(k > 0){
        return k + fun(k-1);
    }else {
        return 0;
    }
}
int main(){
    int n;
    cin>>n;
    int x =fun(n);
    cout<<x<<endl;

    return 0;
}
#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter elements"<<endl;

    int a[3];

    for(int i=0;i< 3;i++){

        cin>> n;

        a[i] = n;
       // cout<< a[i]<<endl;

    }
    for(int i=0;i<3;i++){
        cout<<a[i];
    }
}
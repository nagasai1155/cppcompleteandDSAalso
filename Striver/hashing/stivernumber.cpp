#include <iostream>
using namespace std;

int main(){
   cout<<"enter the size of array: " ;
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter array elements :";
        cin>>arr[i];
    }

    //pre- compute the number of times the number present

    int hash[13] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]] = hash[arr[i]] +  1;
    }
     cout<<"enter the number of queries";
    int q;
    cin>>q;
    while( q -- ){
        cout<<"enter the no. of numbers :";
        int number;
        cin>>number;
        //here fetch number from the hash array 

        cout<<hash[number]<<endl;


    }
}
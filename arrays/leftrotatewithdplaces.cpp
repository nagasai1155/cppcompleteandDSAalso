#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void leftrotatewithdplaces(vector<int> &arr,int n,int d){
    //step 1 donen 
    d = d%n;
    vector<int> temp;
    for(int i=0;i<d;i++){
        temp.push_back(arr[i]);
    }
    //step2 
    for(int i= d;i<n;i++){
        arr[i-d] = arr[i];
    }
    //step 3 shifting temp elements to the last to exist array
    for(int i= n-d;i<n;i++){
          arr[i] = temp[i-(n-d)];
    }
    cout<<"final elements afer the left rotate with d places are :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
    
}
int main(){
    //left rotate by d places 
    int n,d;
    cin>>n>>d;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    leftrotatewithdplaces(arr,n,d);

}
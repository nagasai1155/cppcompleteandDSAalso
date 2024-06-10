#include<iostream>
using namespace std;

int main(){
 
//dynamic arrays;

int size ;
cin>>size;
int * array = new int[size];
for(int i=0;i<size;i++){
    cout<<"arr["<<i<< "]"<<endl;
    cin>>array[i];
}
for(int i=0;i<size;i++){
    cout<<array[i]<<" "<<endl;
}
     return 0;
}
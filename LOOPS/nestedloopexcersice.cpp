#include<iostream>
using namespace std;
 int main(){


    int data[] = {10,1,3,-4,7,5};//finding the sum of product of all the pairs in array

    int total = 0;

    for(int i=0;i< 6;i++){
        for(int j= i+1;j<6;j++){
            total += data[i] * data[j];
        }
    }
    cout<<total<<endl;
 }
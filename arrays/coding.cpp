#include <iostream>
using namespace std;
int main(){

    int a[5];
    int b[5];
    int c[5];
    int i=0;
  
  cout<<"enter first array elements :"<<endl;
    for(i=0;i<5;i++){
   
        cin>>a[i];
       
     
     
      }
      cout<<"enter second array elements:  "<<endl;
      for( i=0;i<5;i++)
      {
        
        cin>>b[i];
      }
      
      cout<<"the sum of two arrays in another array "<<endl;
      for( i=0;i<5;i++)
      {
      
        c[i] = a[i]+b[i];
        
        //cout<< "sum at index :" << i << c[i]<<endl;
       // cout<< i <<endl;
         cout<<"sum at index "<< i <<":"<<c[i]<<endl;
      }
  
return 0;
}
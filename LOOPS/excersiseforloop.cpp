#include <iostream>
using namespace std;

int main(){  //sum odd intergers from 1 to 15 using for loop

    int sum=0;

for(int i=1;i<=15 ;i++){
    if(i%2 !=0){
        sum =sum+i;
    
    }
      
 
   
}
  cout<<sum<<endl;

}
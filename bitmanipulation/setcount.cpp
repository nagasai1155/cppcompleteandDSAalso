#include <bits/stdc++.h>
using namespace std;

int countSetBits(int N)
{
    //Write your code here
  int cnt =0;
  while(N > 1){
      if(N%2==1){
          cnt++;
          N=N/2;
      }
      return cnt;
  }
 
}
int main(){
  
    //int cnt = __builtin_popcount(num);
    //cout<<cnt<<endl;
    cout<<"dsfja;dsf";
    int x = countSetBits(6);
    cout<<x<<endl;
    return 0;
}
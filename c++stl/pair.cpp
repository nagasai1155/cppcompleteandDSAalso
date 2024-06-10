#include <bits/stdc++.h>
using namespace std;

int main(){
   //pair in stl;

//    pair<int,int> v = {2,3};
//    cout<<v.first<<" "<<v.second<<endl;


//nested pair
 pair<int ,pair<int,int>> p1= {1,{2,3}};
   cout<<p1.first<<endl;
   
   //pair in array form 

   pair <int,int> arr[] = {{3,4},{1,2},{2,4}};
   cout<<arr[0].second<<endl;
   cout<<arr[1].first<<endl;
   return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int>  isPermutation(vector<int> &permutation){
            next_permutation(permutation.begin(),permutation.end());
            return permutation;    
}
int main(){

    vector<int> a = {1,3,2};
    
   vector<int> xx = isPermutation(a);
   for(int i=0;i<xx.size();i++){
    cout<<xx[i]<<" "<<endl;
   }

    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class two{
    public :
    int twosums(vector<int> &nums,int target){
            vector<int> temp;
        for(int i=0;i<nums.size();i++){
            for(int j=1;j<nums.size();j++){
                if(target == nums[i] + nums[j]){
                    temp.push_back(i);
                    temp.push_back(j);
                    
                }
            }
        }
        return temp;
    }
}
int main(){
            
            int n;
            cin>>n;
            vector <int>  a;
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            class two s;
            s.twosums(a,n);
            
}
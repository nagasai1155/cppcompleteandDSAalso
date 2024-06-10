#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    vector<int> p = {10,20,30,40};
    vector <int> p1 ={1,2,3};
    p.swap(p1);
   
    for(int i : p){
        cout<<i<< " " << endl;
    }
    cout<<p.empty()<<endl;
    vector<int> cp(p1);
    for(auto s : cp){
        cout<<s<<" "<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v ;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
   // cout<< v[3] <<endl;
    v.emplace_back(100);
    v.emplace_back(23);
//     vector <int>::iterator it = v.end();
//    it--;
//     cout<<*it<<" "<<endl;
//    for(vector<int>::iterator it =v.begin();it != v.end();it++){
//     cout<<*it<<endl;
//    }
// for(auto i : v){
//     cout<<i<<endl;
// }
v.erase(v.begin()+1 , v.begin()+3);
// for(auto i : v){
//     cout<<i<<endl;
// }
v.insert(v.begin(),1999);

// for(auto i : v){
//     cout<<i<<endl;
// }
vector <int> v1 = {3,4};
//vector <int> v2 ;
v.swap(v1);
for(auto i: v){
    cout<<i<<endl;
}
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> num (10);
    fill(num.begin(),num.end(),12);
    for(int i=0;i<num.size();i++){
        cout<<num[i]<<endl;
    }
}
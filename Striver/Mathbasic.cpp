#include <iostream>
using namespace std;
int  solve(int n){
    int count=0;

    cin>>n;
    while(n> 0){
        int lastdigit = n%10;
         count = count+1;
         n = n/10;

}
return count;
}
int main(){
    int cnt = solve(2341);
    cout<<cnt;
    //int n;
    //int count=0;

    // cin>>n;
    // while(n> 0){
    //     int lastdigit = n%10;
    //      count = count+1;
    //      n = n/10;
    //      //cout<<lastdigit;
    // }
    // cout<<endl;
    // cout<<count<<endl;
// int revese=0;
// int lastdigit1;
//     while(n>0){
//   lastdigit1 = n%10;
//   n=n/10;
//   revese = (revese * 10 ) + lastdigit1;


//     }
//     cout<<revese;
    
}
#include <iostream>
using namespace std;
int main(){
    int x = 0;
    int y = 6;
//logical operators 
    // cout<<"logicall and :"<< (x&&y)<< endl;//0->false and 1->true;
    // cout<< "logical or "<< (x||y)<<endl;
    // cout << "logical not "<< (!x)<<endl;

    //bitwise operator 

    cout<< "bitwise and "<< (x&y)<<endl;
    cout<< "bitwise or "<< (x|y)<<endl;
    cout<< "bitwise xor "<< (x^y)<<endl;
    cout<< "bitwise not "<< (~x)<<endl;

    return 0;
}
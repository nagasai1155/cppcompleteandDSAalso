#include <iostream>
#include <vector>
using namespace std;


int main(){
    //vector <string> n = {"nagasai"};
    int sum=0;

    for(char b : "naga sai")
    {
        if(b != ' ')
        cout<<b;
        //sum = sum + b;
        //cout<<sum<<endl;
    }
    //cout<<sum<<endl;



    return 0;
}
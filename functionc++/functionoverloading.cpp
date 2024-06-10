#include <iostream>
using namespace std;
                          //function overloading in c++
void fun(int x){
    cout<<x<<" " <<endl;
}
string  fun(string s){
        cout<<s<<endl;
}
char fun(char ch){
    cout<<ch<<endl;
}
int fun(int i,int s){
    cout<<i<<endl;
    cout<<s<<endl;
   
}
double fun(float x2,float s1){
    cout<<x2<<" "<<s1<<endl;
}

int main(){
    fun(4.3,5);
    fun("sai");
    fun(4,5);
    fun('c');
    fun(4);

}
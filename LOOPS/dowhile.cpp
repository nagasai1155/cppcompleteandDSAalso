#include <iostream>
using namespace std;

int main(){
    // int n=0;
    // do{
    //     cout<<"hi nagasai"<<endl;
    //     n++;
    // }while(n>0);
 char choice ;
    do{
        cout<<"enter length and breath ::"<<endl;
        int l,b,area;
        cin>>l>>b;

        area = l*b;

        cout<<"the area is :"<<area<<endl;

        cout<<"do you want to enter again l and b ?(y/n) :";
        cin>>choice;
    }while(choice == 'Y'|| choice== 'y');
}
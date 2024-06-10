#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;
#define MAX 34234;
void display();//prototype or decalration in global scope we can access this one any where

int a = 'a';

int b = '0';
int d = '9';

int c = 'A';
int  main(){
    // int a = 3;
    // cout << a <<endl;

    // string str = "hello world";
    // cout << str<<endl;
     cout << a  << endl;
     cout<< b << endl;   //these three are ascii constant value of num,alphabets 
     cout << c << endl;

     cout << d << endl;//
   

    // display();

    // cout << MAX ;
    

return 0;

}

void display(){
    cout<< "hello world this c++"<<endl;
}



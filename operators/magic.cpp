#include <iostream>
using namespace std;

int main(){

      //predcedence and associativity in cpp
    //    int a ;
    //    a = 2,3,4;
    //    cout<< a <<endl;

    //    int b ;
    //    b = (2,3,4);
    //    cout<< b<< endl;

    // int a = 10,b=5,c=8,d=4,y;
    // y = a/b^c*a%(c+d)<<d-2;
    // cout<< y<<endl;

    // int x = 3,y;
    // y = x++ + ++x;
    // cout<<"x :"<<x << "y is :"<< y<< endl;
// int x = 5;
// cout<<x++ + ++x +1 + --x + x-- << endl;

// int x = 3,y;
// y = x++ + ++x;
// cout << "x = "<< x << "y = "<< y<<endl;


int x = 10,y=20,z;
z = x-- - x++ + --y - ++y + --x - y-- + ++x - y++;
cout<<"x="<<x<<"y= "<<y <<"z = "<< z<<endl;




return 0;
}
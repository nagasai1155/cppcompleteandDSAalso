#include <iostream>
using namespace std;
int main(){

    int a = 234; 
    cout<< "int a :" << a << endl;

    unsigned int unsigned_int = 23412;
    cout << " unsigned int :" << unsigned_int << endl;

    signed int signed_int = -23232;
    cout << "signed int " << signed_int << endl;


//short 


    short int  short_int = 2334;
    cout << " short int :" << short_int << endl;

    unsigned short int naga = 65535;
    cout << "unsigned short int :" << naga << endl;

    signed short int sai = -32768;
    cout << "signed short int :" << sai <<endl;


//long 


    long int  banana = 394;
    cout << "long int : " << banana << endl;
    

    signed long int grapes = -2323;
    cout << "signed long int : " << grapes << endl;

    unsigned long int pine = 23423;
    cout << " unsigned long int :"  << pine << endl;


//long long 
   
   long long int man = 23443;
    cout << "long long int :" << man << endl;

   signed long long int are =- 23720370;
   cout << "signed long long int :" << are << endl;

   unsigned long long int era = 2343242;
   cout << "unsigned long long int :" << era  << endl;


//max size of int 

cout << "int :"<< sizeof(int )<< endl;
cout << "signed int :" << sizeof(signed int )<< endl;

cout << "unsigned int :" << sizeof(unsigned int )<< endl;

cout <<"short :" << sizeof(short )<< endl;
cout << "short int :"<< sizeof(short int )<<endl;
cout << "unsigned short int :" << sizeof(unsigned short int )<< endl;
cout << "long int "<< sizeof(long int)<< endl;

cout << " long long int :" << sizeof(long long int )<<endl;






return 0;
}
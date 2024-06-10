#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    //float data type 

    float f = 2.12345608909;
    cout << setprecision(9);
    cout<< "float :" << f << endl;
//double 
    double d = 32.4361963703242341;
    cout<< setprecision(15);
    cout << "double" << d << endl;
//long double 
    long double lb = 3.3270341809812320810087;
    cout << setprecision(18);
    cout << "long double " << lb << endl;


}
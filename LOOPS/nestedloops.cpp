#include <iostream>
using namespace std;
int main(){
    int rows,cols;
    int i,j;
    cin>>rows>>cols;
    do{
        i  = 1;
        

        do{
             j =1;
            cout<<"*";
            j++;
        }while(j < cols);
        cout<<endl;

        i++;
    }while(i<rows);
}
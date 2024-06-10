#include <iostream>
using namespace std;
int main(){

char choice ;
    do{
        int a,b,sum=0;
        cout<<"*****************************"<<endl;
        cout<<"1.addition"<<endl;
        cout<<"2.substraction"<<endl;
        cout<<"3.multliplication"<<endl;
        cout<<"4.division"<<endl;
        cout<<"( q/ Q).exit "<<endl;
        cout<<"enter your choice"<<endl;
        cin>>choice;

        if(choice == '1'){
            cout<<"this addition section"<<endl;
            cout<<"enter the two numbers:"<<endl;
            cin>> a>>b;
            sum = a+b;
            cout<<"the addition is :"<<sum<<endl;
        }else if(choice == '2'){
            cout<<"this sub section"<<endl;
            cout<<"enter the two numbers:"<<endl;
            cin>> a>>b;
            sum = a-b;
            cout<<"this sub is :"<<sum<<endl;
        }else if(choice == '3'){
            cout<<"this mul section"<<endl;
            cout<<"enter the two numbers:"<<endl;
            cin>> a>>b;
            sum = a*b;
            cout<<"the mul is :"<<sum<<endl;
        }else if(choice == '4'){
            cout<<"this division section"<<endl;
            cout<<"enter the two numbers:"<<endl;
            cin>> a>>b;
            sum = a/b;
            cout<<"the division is :"<<sum<<endl;
        }else if(choice== 'q ' || choice=='Q'){
            cout<<"good bye "<<endl;
        }else{
            cout<<"enter valid number or  choice "<<endl;
        }
    }while(choice!= 'q'&&  choice!='Q');
}
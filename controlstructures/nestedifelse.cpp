#include <iostream>
using namespace std;
int main(){
          
          int money;
        //   cout<<"enter money:";
        //   cin>>money;
        //   if(money >= 1000 && money<= 5000){
        //     cout<<"your money is:"<<money<<endl;
        //     cin>>age;
        //     if(age>=21){
        //         cout<<"you are old enough"<<endl;
        //         cout<<"your age is:"<<age<<endl;
        //     }else{
        //         cout<<"your are not enough"<<endl;
        //         cout<<"your age is :"<<age<<endl;
        //     }
        //   }
        //   else{
        //            if(money>=5000){
        //             cout<<"your money is :"<<money<<endl;
        //             cout<<"you can go to starbucks"<<endl;
        //            }
        //            else{
        //             cout<<"not enoyg"<<endl;
        //            }
        //   }
cin>>money;
          if(money>=400){
            cout<<"money:"<<money<<endl;

            if(money>800){
                cout<<"your money is :"<<money<<endl;
            }
            else{
                cout<<"not elibible for the placement drive"<<endl;
            }
          }else{
            
            cout<<"you are not eligible for the drive"<<endl;
          }
}
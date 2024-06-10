#include <iostream>
#include <vector>
using namespace std;
int main(){
   // int data[] = {1,10,-1,5,6,-1,7,-99,8,10};
    vector <int> values = {-12,3,4,5,6,-1,-12,100,34231,233,-1,-99};//dynamic array in c++

    for(auto i : values){
             if(i==100)
             {
                break;
             }
      else if(i <0  ) {
        continue;
      }

        cout <<i << "\n ";
    }
    cout << endl;

//   for(auto n : data){ //range based loop on array of 1 d 
//     if(n ==-99) break;
//    else if(n==-1) continue;
//     cout<<n<<endl;
//   }
  return 0;
}
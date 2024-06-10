#include <iostream>
using namespace std;
#include <vector>
int main(){

    vector <int> numbers = {4,-1,0,-3,1,2,3,4,5,99,5,6,7};

    for( int i=0;i<numbers.size();i++){
       if(i==99){
        break;
       }else if(i <= 0){
        continue;
       }
      cout<<numbers[i]<<endl;

    }
     

}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    st.push(4);
    st.push(6);
    st.push(8);
       cout<<"top "<<st.top()<<endl;
       cout<<"size " <<st.size()<<endl;
       cout<<"emptyorNot "<<st.empty()<<endl;
       st.pop();
       
}
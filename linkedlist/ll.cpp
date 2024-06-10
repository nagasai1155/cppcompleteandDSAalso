#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data1 ,Node* next1){
         data = data1;
         next = next1;

    }
};
Node* convertarrtoll(vector<int> arr){
  Node* head = new Node(arr[0],nullptr);
  Node* mover = head;
  for(int i=1;i<arr.size();i++){
    Node* temp = new Node(arr[i],nullptr);
    
    mover->next = temp;
    mover = temp;
  }
  return head;

}
int main(){
  vector<int> arr = {1,2,3,4};
  Node* head = convertarrtoll(arr);
  
    cout<<head->data<<endl;

}
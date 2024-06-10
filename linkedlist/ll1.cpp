#include<iostream>
#include <bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;

    public:
         Node(int data1,Node* next1){
            data = data1;
            next = next1;
         }
};
Node* convertarrtoll(vector<int> &a){
    Node* head = new Node(a[0],nullptr);
    Node* mover = head;
    for(int i=1;i<a.size();i++){
          Node* temp = new Node(a[i],nullptr);
          mover->next = temp;
          mover = temp;

    }
    return head;
}
int lenghtofll(Node* head){
       
       int cnt =0;

       Node* temp = head;
       while(temp != nullptr){
        temp = temp->next;
        cnt++;
       }
       return cnt;
}
bool searchelement(Node* head,int k){
    Node* temp = head;
    while(temp != nullptr){
             
             if(temp->data == k){
                return true;
             }
             temp = temp->next;
             
    }
    return false;
}
int main(){
    vector<int> arr = {2,3,4,5,65};
   Node* head =  convertarrtoll(arr);
   //cout<<head->data<<" ";
   Node* temp = head;
   while(temp != nullptr){
    cout<<temp->data<<" "<<endl;
    temp = temp->next;
   }

   //length of the linkedlist
   int ll = lenghtofll( head);
   cout<<"lengthofll is: " << ll<<" ";

   //searching an element in linkedlist
   bool ele = searchelement(head,4);
   if(ele) cout<<"element found"<<endl;
   else cout<<"element not found"<<endl;
   return 0;
}
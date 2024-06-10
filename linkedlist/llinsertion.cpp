#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
};

Node* converttoll(vector<int> &a){
        Node* head = new Node(a[0],nullptr);
        Node* mover = head;
        for(int i=1;i<a.size();i++){
            Node* temp = new Node(a[i],nullptr);
            mover->next = temp;
            mover = temp;
        }
        return head;
}
Node* insertathead(Node* head,int value){
    //if(head== nullptr) return head;
    Node* temp = new Node(value,head);
    return temp;
}
Node* insertattail(Node* head,int v){
    if(head == NULL) return new Node(v,nullptr);
    Node* temp = head;
    while(temp-> next != NULL){
        temp = temp->next;

    }
    Node* newNode = new Node(v,nullptr);
    temp->next = newNode;
    newNode->next = nullptr;
    return head;
}
int main(){

 vector<int> arr = {2,3,4,5};
 Node* head = converttoll(arr);
 Node* temp = head;
 while(temp != nullptr){
    cout<<temp->data <<" "<<endl ;
    temp = temp->next;
 }
 head = insertattail(head,199);
 Node* temp1 = head;
 while(temp1 != nullptr){
    cout<<temp1->data <<" ";
    temp1 = temp1->next;
 }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:

    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){
        data =data1;
        next = next1;
    }
};
Node* convertarrtoll(vector<int> a){
    Node* head = new Node(a[0],nullptr);
    Node* mover = head;
    for(int i=1;i<a.size();i++){
        Node* temp = new Node(a[i],nullptr);
           mover->next = temp;
           mover = temp;
    }
    return head;
}
Node* printll(Node* head){
    Node* temp = head;
    while(temp !=  nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
Node* insertionatk(Node* head ,int ele,int k){
       if(head == NULL){
        if(k==1){
            return new Node(ele,nullptr);
        }else return head;
       }
       if(k==1){
        Node* newNode1 = new Node(ele,head);
        return newNode1;
       }
       int cnt =0;
       Node* temp = head;
       while(temp != NULL){
        cnt++;
        if(cnt == (k-1)){
            Node* x = new Node(ele,nullptr);
            x->next = temp->next;
            temp->next = x;
            break;
        }
        temp = temp->next;
       }
       return head;
}
int main(){
vector<int> arr = {2,3,4,5,6};
Node* head = convertarrtoll(arr);

head = insertionatk(head,3090,4);
printll(head);


    return 0;
}
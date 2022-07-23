#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Create A class node

class node{
    public:
    int data;
    node* next;

    // Node Class Constructor
    node(int val){
        data=val;
        next=NULL;

    }
};

// Insert Element At Tail

void insertAtTail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
        }
        temp->next=n;
}

// Display All Element

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

// Insert At Head

void insertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

// Seraching  At Linked List

bool Search(node* head,int key){
    node* temp=head;
    while(temp->next!=NULL){
        if(temp->data==key){
          return true;
        }
        temp=temp->next;  
  }
  return false;
}
// Deletion at First
void deleteatfirst(node * &head){
    node *todelete = head;
    head = head->next;
    delete todelete;
}
//Deletion between the node and end of the node
void deletion(node *head,int val){
    if (head == NULL)
    {
        /* code */
        return;
    }
    if (head->next == NULL)
    {
        /* code */
        deleteatfirst(head);
    }
    
    
    node *temp = head;

    while (temp->next->data != val )
    {
        /* code */
        temp = temp->next;

    }
    node *todelete= temp->next;
    temp->next = temp->next->next;

    delete todelete;
    
}

int main(){
    
    node* head =NULL;
    insertAtTail(head,12);
    insertAtTail(head,178);
    insertAtTail(head,1788);
    display(head);
    insertAtHead(head,345);
    display(head);
    cout<<Search(head,178);
    deletion(head,178);
    display(head);
    deleteatfirst(head);
    display(head);

    return 0;
}
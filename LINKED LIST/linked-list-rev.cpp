#include<iostream>

using namespace std;
class node{
    public:
    int data;
    node *next;

    node(int val){
        data = val;
        next = NULL;
    }

};
void insertion(node *&head,int val){
    node *n = new node(val);
    if (head == NULL)
    {
        /* code */
        head = n;
        return;
    }

    node * temp = head;
    while (temp->next!= NULL)
    {
        /* code */
        temp = temp->next;
    }
    temp->next = n;
    
    
}
//iterative way
node * reverse(node*&head){
    node *prev = NULL;
    node *curr = head;
    node *next ;

    while (curr != NULL){
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;

    }
    return prev;
    
}
//recursive way
node *recursivereverse(node*&head){
    if (head == NULL || head->next == NULL)
    {
        /* code */
        return head;
    }
    
    node *newhead = recursivereverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}
//reversing k nodes
node *reversek(node *&head,int k){
    node *prevptr = NULL;
    node *currentptr = head;
    node * next;
    int count = 0;

    while (currentptr != NULL && count<k)
    {
        /* code */
        next = currentptr->next;
        currentptr->next = prevptr;

        prevptr = currentptr;
        currentptr = next;
        count++;
    }
    if(next != NULL){
    head->next = reversek(next,k);
    }
    return prevptr;
    
}
void display(node * &head){
    node *temp = head;
    while (temp != NULL)
    {
        /* code */
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    
}



int main()
{
    node * head = NULL;
    insertion(head,1);
    insertion(head,2);
    insertion(head,3);
    insertion(head,4);
    insertion(head,5);
    insertion(head,6);
    display(head);
    int key = 2;
    node *newhead=reversek(head,key);
    display(newhead);
    return 0;
}
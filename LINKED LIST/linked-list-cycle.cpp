#include<iostream>

using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;

    }
};
void insertion(node*&head,int val){
    node *n = new node(val);
    if (head == NULL)
    {
        /* code */
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        /* code */
        temp = temp->next;
    }
    temp->next = n;
    
    
}
void display(node *head){
    node *temp = head;
    if (temp != NULL)
    {
        /* code */
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    
}
void makeplace(node * &head,int pos){
    node * temp = head;
    node*startnode;
    int count = 1;
    while (temp->next != NULL)
    {
        /* code */
        if (count == pos)
        {
            /* code */
            startnode = temp;
        }
        temp = temp->next;
        count;
        
    }
    temp->next = startnode;
    
}
bool detectcycle(node *&head){
    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        /* code */
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            /* code */
            return true;
        }
        
    }
    return false;
}
void removal(node * &head){
    node *slow = head;
    node *fast = head;

    do
    {
        /* code */
        slow = slow->next;
        fast = fast->next;
    } while (fast != slow);
    fast = slow;
    while (fast->next != slow->next)
    {
        /* code */
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = NULL;
    
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
    insertion(head,7);
    insertion(head,8);
    insertion(head,9);
    display(head);
    makeplace(head,5);
    cout<<detectcycle(head)<<endl;
    removal(head);
    cout<<detectcycle(head)<<endl;
    display(head);

    return 0;
}
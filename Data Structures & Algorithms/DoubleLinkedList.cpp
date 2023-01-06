#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
};
class doubleList{
    public:
    node* head=NULL;
    void insertAfter(node* prev_node,int num){
        if(prev_node == NULL){
            cout<<"the given previous node cannot be NULL"<<endl;
            return ;
        }
        node* temp = new node();
        temp->data = num;
        temp->next = prev_node->next;
        prev_node->next=temp;
        temp->prev = prev_node;
        if(temp->next !=NULL){
            temp->next->prev = temp;
        }
    }
    void append(int num){
        node* temp = new node();
        node* last = head;
        temp->data=num;
        temp->next = NULL;
        if(head == NULL){
            temp->prev = NULL;
            head = temp;
            return ;
        }
        while(last->next != NULL){
            last = last->next;
        }
        last->next = temp;
        temp->prev=last;
        return ;
    }
    void insertBefore(node* after, int num){
        node* temp = new node();
        temp->data = num;
        temp->next = after;
        temp->prev = NULL;
        if(after != NULL)j{
            after->prev = temp;
        }
        after = temp;
    }
}
void printList(node* temp){
    node* ptr;
    cout<<"\nTraverssal in forward direction\n";
    while(temp != NULL){
        cout<<temp->data<<" ";
        ptr=temp;
        temp=temp->next;
    }
    cout<<"\nTraversal in backward direction\n";
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->prev;
    }
}
int main()
{
    cout<<"Hello World";

    return 0;
}

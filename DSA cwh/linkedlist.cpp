                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                #include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node(){
            data=0;
            next=NULL;
        }
        node(int data){
            this->data=data;
            this->next = NULL;
        }
};
class Linkedlist{
    node* head;
    public:
        Linkedlist(){
            head=NULL;
        }
        void insertNode(int data){
            node* ptr = new node(data);
            if(head == NULL){
                head = ptr;
                return;
            }
            node* temp = head;
            while(temp->next !=NULL){
                temp = temp->next;
            }
            temp->next = ptr;
        }
        void deleteNode(int index){
            int data=index;
            node *temp1 = head, *temp2=NULL;
            int length=0;
            if(head==NULL){
                cout<<"list empty"<<endl;
                return;
            }
            while(temp1!=NULL){
                temp1=temp1->next;
                length++;
            }    
            if(length<data){
                cout<<"index out of range"<<endl;
                return;
            }
            temp1=head;
            if(data ==1){
                head = head->next;
                delete temp1;
                return;
            }
            while(data > 1){
                temp2=temp1;
                temp1=temp1->next;
                data--;
            }
            temp2->next=temp1->next;
            delete temp1;
        }
        void printList(){
            node* temp = head;
            if(head==NULL){
                cout<<"list empty"<<endl;
                return;
            }
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }
};

int main(){
    Linkedlist list;
    list.insertNode(1);
    list.insertNode(2);
    list.insertNode(3);
    list.insertNode(4);
    list.insertNode(5);
    list.insertNode(6);
    list.printList();
    list.deleteNode(4);
    list.printList();
    list.deleteNode(3);
    list.insertNode(95);
    list.printList();
    return 0;
}     
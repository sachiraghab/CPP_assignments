/*
ADT means Abstract Data Type. It is used to create data type as per our wish. We can use this for dynamic memory allocation.
It also act as array.
*/
#include<iostream>
using namespace std;

class myArray{
    int tsize;
    int usize;
    int* ptr;
    public:
        myArray(int total, int used){
            tsize=total;
            usize=used;
            ptr= new int[tsize];
        }
        void setVal(){
            for(int i=0;i<usize;i++){
                cout<<"Enter "<<i+1<<" element: ";
                cin>>ptr[i];
            }
            cout<<endl;
        }
        void show(){
            for(int i=0;i<usize;i++)
                cout<<ptr[i]<<" ";
            cout<<endl;
        }
        bool isStackfull(){
            if(usize>=tsize){
                return true;
            }
            return false;
        }
};
int main(){
    myArray mark(10,4);
    mark.setVal();
    mark.show();
    cout<<(mark.isStackfull()?"The stack is full\n":"The stack is not full\n");
    return 0;
}
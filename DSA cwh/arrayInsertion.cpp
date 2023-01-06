#include<iostream>
using namespace std;
void display(int [],int);
int insertion(int *a, int index, int& u, int t, int element);
int main(){
    int arr[20]={8,2,3,23,9};
    int size=5,index=3,element=85;
    display(arr,size);
    insertion(arr,index,size,20,element);
    display(arr,size);
    index =1,element=37;
    insertion(arr,index,size,20,element);
    display(arr,size);
    return 0;
}
void display(int* a, int n){
    //code for traversal
    cout<<"The array is:"<<endl;
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    cout<<endl;
}
int insertion(int *a, int index, int& uSize, int tSize, int element){
    //code for insertion
    if(uSize>=tSize || index >=tSize){
        cout<<"insertion failed"<<endl;
        return -1;
    }
    else if(index > (uSize-1)){
        a[index]=element;
        uSize=index+1;
        cout<<"insertion successful"<<endl;
        return 0;
    }
    else{
        for(int i=uSize-1;i>=index;i--){
            a[i+1]=a[i];
        }
        a[index]=element;
        uSize++;
    }
    return 0;
}
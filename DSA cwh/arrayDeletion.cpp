//Deletion in array;

#include<iostream>
using namespace std;
void display(int[],int);
int deletion(int[],int&,int);
int main(){
    int arr[10]={1,2,3,4,5,6};
    int size=6;
    int index=3;
    display(arr,size);
    deletion(arr,size,index);
    display(arr,size);
    index=1;
    deletion(arr,size,index);
    display(arr,size);
    return 0;
}
int deletion(int a[], int &uSize, int index){
    for(int i=index;i<uSize;i++){
        a[i]=a[i+1];
    }
    uSize--;
    return 0;
}
void display(int a[], int n){
    cout<<"The array is:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
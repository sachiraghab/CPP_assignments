#include<iostream>
using namespace std;
//bubble sort
void swap(int &a,int &b);
void printArr(int arr[],int len);
int main(){
    // int arr[]={8,2,4,9,4,1,5,0,4,9};
    int arr[]={4,6,3,9,1};
    int s=sizeof(arr)/sizeof(int);
    cout<<"unsorted array\n";
    printArr(arr,s);
    for(int i=0;i<s-1;i++){ 
        for(int j=0;j<s-i-1;j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
    cout<<"\nsorted array\n";
    printArr(arr,s);
}
void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
void printArr(int arr[], int len){
    for(int i=0;i<len;i++)
        cout<<arr[i]<<" ";
}
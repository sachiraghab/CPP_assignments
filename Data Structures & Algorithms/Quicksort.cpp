#include<iostream>
using namespace std;
void quickSort(int[], int,int);
int partition(int[], int, int);
void swap(int&,int&);
void printArr(int[],int);
int main(){
    int arr[]={22,88,33,99,66,11,77};
    int size=sizeof(arr)/sizeof(int);
    printArr(arr,size);
    quickSort(arr,0,size-1);
    printArr(arr,size);
    return 0;
}
void quickSort(int arr[], int start,int end){
    if(start<end){
        int p=partition(arr,start,end);
        quickSort(arr,start,p-1);
        quickSort(arr,p+1,end);
    }
}
int partition(int arr[], int start, int end){
    int p=start;
    int pivot=arr[end];
    for(int i=start;i<end;i++){         //22,88,33,99,66,11,77
        if(arr[i]<pivot){
            swap(arr[i],arr[p]);
            p++;
        }
    }
    swap(arr[end],arr[p]);
    return p;
}
void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
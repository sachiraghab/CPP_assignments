#include<iostream>
using namespace std;
//bubble sort
void selection_sort(int arr[],int s);
void bubble_sort(int arr[],int s);
void insertion_sort(int arr[],int s);
void swap(int &a,int &b);
void printArr(int arr[],int len);
int main(){
    // int arr[]={8,2,4,9,4,1,5,0,4,9};
    int arr[]={4,6,3,9,1};
    int s=sizeof(arr)/sizeof(int);
    cout<<"unsorted array\n";
    printArr(arr,s);
    insertion_sort(arr,s);
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
void bubble_sort(int arr[],int s){
    cout<<"Using bubble sort\n";
    for(int i=0;i<s-1;i++){ 
        for(int j=0;j<s-i-1;j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}
void selection_sort(int arr[],int n){
    cout<<"\nUsing selecton sort";
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j])
                min=j;
        }
        swap(arr[min],arr[i]);
    }
}
void insertion_sort(int arr[],int s){
    cout<<"\nUsing insertion sort";
    int min,j;
    for(int i=1;i<s;i++){
        min =arr[i];
        j=i-1;
        while(j>=0 && arr[j]>min){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=min;
    }
}
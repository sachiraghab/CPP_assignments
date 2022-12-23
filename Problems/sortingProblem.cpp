#include<iostream>
using namespace std;
void sort(int[], int);
void printArr(int[], int);
void swap(int&, int&);
int main(){
    int arr[]={1,0,0,2,1,1,2,0,1,0,2,1,2,0,2};
    int size=sizeof(arr)/sizeof(int);
    cout<<"Before sorting"<<endl;
    printArr(arr,size);
    sort(arr,size);
    cout<<"After sorting"<<endl;
    printArr(arr,size);
    return 0;
}
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void sort(int arr[], int n){
    int l=0,itr =0,h=n-1;
    while(itr<=h){
        if(arr[itr]==0){
            swap(arr[itr],arr[l]);
            l++;
            itr++;
        }
        else if(arr[itr]==2){
            swap(arr[itr],arr[h]);
            h--;
        }
        else
            itr++;
    }
}
void printArr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
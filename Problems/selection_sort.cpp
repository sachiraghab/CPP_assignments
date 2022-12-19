#include<iostream>
using namespace std;
// Selection sort
int main(){
    int arr[]={5,4,7,6,2,1,3};
    int n=sizeof(arr)/sizeof(int);
    int min;
    cout<<"unsorted array is"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    for(int i=0;i<n-1;i++){
        min = i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j])
                min=j;
        }
        int temp = arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    cout<<"\nsorted array is"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
#include<iostream>
using namespace std;
void duplicateAndMissing(int[], int);
int main(){
    int arr[]={1,4,9,9,5,7,9,4};
    int size=sizeof(arr)/sizeof(int);
    duplicateAndMissing(arr,size);
    return 0;
}

void duplicateAndMissing(int arr[], int n){
    int check[100]={};
    for(int i=0;i<n;i++){
        check[arr[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(check[i]>1)
            cout<<"Duplicate : "<<i<<endl;
        if(check[i]==0)
            cout<<"Missing : "<<i<<endl;
    }
}
/*
Linear search & Binary search
In case of binary search, the array must be sorted
i. in linear search, time complexity = O(n)
ii. in binary search, time complexity = O(log(n))
*/
#include<iostream>
using namespace std;
void printArr (int *, int);
int binarySearch (int[],int, int);
int linearSearch (int[],int, int);
int main ()
{
  int arr[]={3,5,7,9,11,13,15,17,19,21,23,25,27,29,31};
  int size=sizeof(arr)/sizeof(int);
  printArr (arr, size);
  int num=3,searchIndex;
//   searchIndex=linearSearch(arr,size,num);
  searchIndex=binarySearch(arr,size,num);
  printf("The number %d is present at index %d",num,searchIndex+1);
  return 0;
}

void printArr (int a[], int n)
{
  for (int i = 0; i < n; i++)
    printf ("%d ", a[i]);
  cout << endl;
}

int linearSearch(int a[],int n, int element){
    int index;
    for(int i=0;i<n;i++){
        if(a[i]==element)
            index=i;
    }
    return index;
}
int binarySearch(int a[],int n,int element){
    int low=0,mid,high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(element==a[mid]){
            return mid;
        }
        else if(element<a[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}

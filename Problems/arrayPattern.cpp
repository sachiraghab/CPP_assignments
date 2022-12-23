/*
//pascal's triangle
//       1
//      1 1
//     1 2 1
//   1 3 3 1
//  1 4 6 4 1
// 1 5 10 10 5 1
#include<iostream>
using namespace std;
void pascal(int);
void pascal1(int);
int main(){
    pascal(7);
    pascal1(7);
    return 0;
}
void pascal(int n){
	//logic1
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i)
                arr[i][j] =1;
            else
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int s=0;s<n-i;s++)
            cout<<"  ";
        for(int j=0;j<=i;j++)
            cout<<arr[i][j]<<"  ";
        cout<<endl;
    }
cout<<endl;
}

void pascal1(int n){
    //logic2
    for(int i=1;i<=n;i++){
        int c=1;
        for(int s=0;s<n-i;s++)
            cout<<"  ";
        for(int j=1;j<=i;j++){
            cout<<c<<"  ";
            c=c*(i-j)/j;
        }
        cout<<endl;
    }
cout<<endl;
}

*/
//sorting
#include<iostream>
using namespace std;
void swap(int&, int&);
void sort(int[], int);
void printArr(int[],int);

int main(){
    int arraY[]={0,2,1,0,1,2,2,1,0,2,0,1};
    int size=sizeof(arraY)/sizeof(int);
    cout<<"Before sorting"<<endl;
    printArr(arraY,size);
    sort(arraY,size);
    cout<<"After sorting"<<endl;
    printArr(arraY,size);
    return 0;
}

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void sort(int arr[],int size){
    int l=0, h=size-1, itr=1;
    while(itr<=h){
        if(arr[itr]==0){
            swap(arr[l],arr[itr]);
            l++;
            itr++;
        }
        else if(arr[itr]==1){
            l++;
            itr++;
        }
        else if(arr[itr] ==2){
            swap(arr[h],arr[itr]);
            h--;
        }
    }
}
void printArr(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
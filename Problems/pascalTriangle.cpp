//print the following pattern
//   1
//  1 1
// 1 2 1

#include<iostream>
using namespace std;
void printPattern(int n){
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i)
                arr[i][j]=1;
            else
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int s=0;s<(n)-i-1;s++)
            cout<<" ";
        for(int j=0;j<=i;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void pascal(int n){
    for(int i=1;i<=n;i++){
        int c=1;
        for(int j=1;j<=i;j++){
            cout<<c<<" ";
            c=c*(i-j)/j;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    pascal(n);
//   printPattern(n);
    return 0;
}
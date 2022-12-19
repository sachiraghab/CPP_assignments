#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of fibonacci series"<<endl;
    cin>>n;
    int first=0,second=1,ans;
    cout<<"Fibonacci series"<<endl;
    cout<<first<<" "<<second<<" ";
    for(int i=1;i<n-1;i++){
        ans= first+second;
        first = second;
        second = ans;
        cout<<ans<<" ";
    }
    
    // (logic2)
    // int arr[30];
    // arr[0]=0;
    // arr[1]=1;
    // cout<<"Fibonacci series"<<endl;
    // for(int i=2;i<n;i++)
    //     arr[i]=arr[i-1]+arr[i-2];
    // for(int i=0;i<n;i++)
    //     cout<<arr[i]<<" ";
    return 0;
}
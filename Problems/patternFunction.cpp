#include<iostream>
using namespace std;
void pattern1(int n);
void pattern2(int n);
int main(){
    int n;
    cout<<"Enter number of rows"<<endl;
    cin>>n;
    pattern1(n);
    cout<<endl;
    pattern2(n);
    return 0;
}

void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++)
            cout<<"*";
        cout<<endl;
    }
}
void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int s=0;s<n-1-i;s++)
            cout<<" ";
        for(int j=0;j<=i;j++)
            cout<<"*";
        cout<<endl;
    }
}
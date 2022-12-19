#include<iostream>
using namespace std;
int factorial(int n);
int main(){
    int n;
    cout<<"Enter number n for factorial : ";
    cin>>n;
    cout<<n<<"! = "<<factorial(n);
    
}
int factorial(int n){
    int fact=1;
    for(int i=2;i<=n;i++)
        fact=fact*i;
    return fact;
}
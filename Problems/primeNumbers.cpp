#include<iostream>
using namespace std;
bool checkPrime(int);
void printPrime(int);
void printPrime(int,int);
int main(){
    int n;
    cout<<"Enter value of n = ";
    cin>>n;
    cout<<"\nFollowing are the prime numbers upto "<<n<<endl;
    printPrime(n);
    printPrime(100,200);
    // cout<<checkPrime(2);
    return 0;
}
bool checkPrime(int n){
    int d = 2;
    while(d*d<=n){
        if(n%d == 0)
            return false;
        d++;
    }
    return true;
}
void printPrime(int n){
    if(n<2)
        cout<<"There is no prime numbers below 2"<<endl;
    for(int i=2;i<=n;i++){
        if(checkPrime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
void printPrime(int a,int b){
    if(a<2 || b<2)
        cout<<"There is no prime number between "<<a<<" and "<<b<<endl;
    for(int i=a;i<=b;i++){
        if(checkPrime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
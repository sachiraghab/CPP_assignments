//print all prime numbers between two given numbers
#include<iostream>
using namespace std;
void printPrime(int,int);
int main(){
    int a,b;
    cout<<"Enter 2 numbers\n";
    cin>>a>>b;
    printPrime(a,b);
    return 0;
}
void printPrime(int x, int y){
    cout<<"Prime numbers between "<<x<<" and "<<y<<endl;
    for(int n=x;n<=y;n++){
        bool isPrime = true;
        for(int i=2;i*i<=n;i++){
            if(n%i==0)
                isPrime = false;
        }
        if(isPrime)
            cout<<n<<" ";
    }
    cout<<endl;
}
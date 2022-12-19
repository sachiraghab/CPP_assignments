#include <iostream>
using namespace std;
int main(){
    int n,i=2;
    bool isPrime=true;
    while(i*i<n){
        cout<<i<<endl;
        if(n%i==0){
            isPrime = false;
            break;
        }
        i++;
    }
    if(isPrime)
        cout<<n<<" is a prime number";
    else
        cout<<"Not prime";
    return 0;
}
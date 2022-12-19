#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number to find factorial";
    int fact=1;
    for(int i=1;i<=n;i++)
        fact*=i;
    cout<<"Factorial of "<<n<<" numbers is "<<fact;
    return 0;
}
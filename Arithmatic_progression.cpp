//Print n terms and sum of n terms in Arithmetic Progression.

#include <iostream>
using namespace std;
int main(){
int a,b,d,n,an,sn=0;
cout<<"Enter first number"<<endl;
cin>>a;
cout<<"Enter second number"<<endl;
cin>>b;
cout<<"Enter the value of n"<<endl;
cin>>n;
d = b-a;
an = a + (n-1)*d;
cout<<"The "<<n<<" terms in A.P. are";
for(int i=1;i<=n;i++){
an = a + (i-1)*d;
sn = sn + an;
cout<<" "<<an;
}
cout<<"\nsum of "<<n<<" terms is "<<sn;

return 0;
}

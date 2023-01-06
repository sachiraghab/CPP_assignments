#include <iostream>
#include<math.h>
using namespace std;
int first_check(int);
int main()
{
    int arr[100000]={124, 5438, 2932, 9338, 2093, 5382};
    int size = sizeof(arr)/sizeof(int);
    int first=0, second=0;
    for(int i=0;i<size;i++){
        if(((i%2)==0)&& i<(size/2))
            first+= first_check(arr[i]);
        if(((i%2)==0)&& i>=(size/2))
            first+= first_check(arr[i]);
        if(((i%2)==1)&& i<(size/2))
            second+= (arr[i]%10);
        if(((i%2)==1)&& i>=(size/2))
            second+= (arr[i]%10);
    }
    if((first-second)%11 == 0){
        cout<<"OUL";
    }
    else
        cout<<"NON";

    return 0;
}

int first_check(int n){
    int digits=log10(n);
    return n/pow(10,digits);
}
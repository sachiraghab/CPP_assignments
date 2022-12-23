/*
//question1
#include<iostream>
using namespace std;
int main(){
int a =32,*ptr = &a;
char ch = 'A', &cho = ch;
cho += a+1;
*ptr += ch;
cout<<a<<", "<<cho<<endl;
}

//question2
#include<iostream>
using namespace std;
int main(){
    const int i=20;
    const int* const ptr = &i;
    (*ptr)++;
    int j=15;
    ptr = &j;
    cout<<i;
    return 0;
}

// question3
#include<iostream>
using namespace std;
int main(){
    int num[5];
    //different ways of assigning values to pointer
    //1
    int* p= num;
    *p = 10;
    //2
    p++;
    *p = 20;
    //3
    p = &num[2];
    *p = 30;
    //4
    p = num +3;
    *p =40;
    //5
    p = num ;
    *(p+4)=50;
    for(int i=0;i<5;i++)
        cout<<num[i]<<" ";
    return 0;
}

//question4
#include<iostream>
using namespace std;
int main(){
    int arr[]={4,5,6,7};
    int* p = (arr+3);
    cout<<*p +14<<endl;
    cout<<*arr +10;
    cout<<*(arr+1) +10;
    return 0;
}
*/

// question5
#include<iostream>
using namespace std;
int main(){
    // int a=10, *pa, &ra;
    int a=10, *pa;
    pa = &a;
    //ra=a; //it will throw error as reference variable should be intitiated by the time of declaration
    cout<<"a="<<*pa;
    return 0;
}
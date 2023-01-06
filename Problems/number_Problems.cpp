//reversing number
// #include<iostream>
// using namespace std;
// int main(){
//     int n,rev=0;
//     cout<<"Enter number"<<endl;
//     cin>>n;
//     while(n>0){
//         int lastdigit=n%10;
//         rev = rev*10 + lastdigit;
//         n=n/10;
//     }
//     cout<<"Reverse number = "<<rev;
//     return 0;
// }

/*
reversing number
num = 1234
rev num = 4321
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n,rev=0;
//     cout<<"Enter number"<<endl;
//     cin>>n;
//     while(n>0){
//         int lastdigit=n%10;
//         rev = rev*10 + lastdigit;
//         n=n/10;
//     }
//     cout<<"Reverse number = "<<rev;
//     return 0;
// }

/*
armstrong number
num = 153
1 + 125 + 27 = 153
*/
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int num,sum=0;
//     cout<<"Enter number"<<endl;
//     cin>>num;
//     int n=num;
//     while(n>0){
//         int lastdigit=n%10;
//         sum = sum + pow(lastdigit,3);
//         n=n/10;
//     }
//     if(num==sum)
//         cout<<"Armstrong number";
//     else
//         cout<<"not armstrong number";
//     return 0;
// }

//find permutation and combination of given numbers
// #include<iostream>
// using namespace std;
// int fact(int);
// int permutation(int,int);
// int combination(int,int);
// int main(){
//     int n,r;
//     cout<<"Enter n and r\n";
//     cin>>n>>r;
//     // cout<<permutation(n,r)<<endl;
//     cout<<combination(n,r);
//     return 0;
// }
// int permutation(int x, int y){
//     int p = fact(x)/fact(x-y);
//     return p;
// }
// int combination(int x, int y){
//     return fact(x)/(fact(y)*fact(x-y));
// }
// int fact(int n){
//     int f=1;
//     for(int i=2;i<=n;i++)
//         f*=i;
//     return f;
// }
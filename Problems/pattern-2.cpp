/*
123
12
1
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         // for(int j=0;j<n-i;j++){
//         //     cout<<"*";
//         // }
//         int j=1;
//         while(j<=n+1-i){
//             cout<<j<<" ";
//             j++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
1
01
101
0101
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if((i+j)%2==0)
//                 cout<<"1 ";
//             else
//                 cout<<"0 ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
rhombus pattern
   ****
  ****
 ****
****
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int s=1;s<=n-i-1;s++)
//             cout<<" ";
//         for(int j=1;j<=n;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
  1
 1 2
1 2 3
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int s=1;s<=n-i;s++)
//             cout<<" ";
//         int j=1;
//         while(j<=i){
//             cout<<j<<" ";
//             j++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
  *
 ***
*****
*****
 ***
  *
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int s=1;s<=n-i;s++)
//             cout<<" ";
//         for(int j=1;j<2*i;j++)
//             cout<<"*";
//         cout<<endl;
//     }
//     for(int i=n;i>=1;i--){
//         for(int s=1;s<=n-i;s++)
//             cout<<" ";
//         for(int j=1;j<2*i;j++)
//             cout<<"*";
//         cout<<endl;
//     }
//     return 0;
// }

/*
zig-zag
  *   *
 * * * *
*   *   *
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number"<<endl;
//     cin>>n;
//     for(int i=1;i<=3;i++){
//         for(int j=1;j<=n;j++){
//             if(((i+j)%4==0) || (i==2 && (j%4==0)))
//                 cout<<"*";
//             else
//                 cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
/*
pattern1
****
 ***
  **
   *

pattern2
****
  ***
    **
      *

pattern3
  *
 * *
* * *

pattern4
  *
 **
***
 **
  *

pattern5
*** ***
**   **
*     *
       
*     *
**   **
*** ***

pattern6
  1
 123
12345

pattern7
   1
  202
 30003
4000004

pattern8
         0
        909
       89098
      7890987
     678909876
    56789098765
   4567890987654
  345678909876543
 23456789098765432
1234567890987654321

pattern9
*
**
* *
*  *
*   *
******

pattern10
    *
   **
  * *
 *  *
*****

pattern11
      1
     1 1
    1 2 1
   1 3 3 1
 1 4 6 4 1
1 5 10 10 5 1
*/

/*
//pattern1
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    cout<<"Following is the pattern"<<endl;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(i>j)
    //             cout<<" ";
    //         else
    //             cout<<"*";
    //     }
    //     cout<<endl;
    // }
    return 0;
}



//pattern2
#include <iostream>
using namespace std;
int main(){
    int n=5;
    // (logic1)
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(i>j)
    //             cout<<"  ";
    //         else
    //             cout<<"*";
    //     }
    //     cout<<endl;
    // }
    
    // (logic2)
    for(int i=0;i<n;i++){
        int s=0;
        while(s != 2*i){
            cout<<" ";
            s++;
        }
        for(int j=i;j<n;j++)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}

// pattern3
#include <iostream>
using namespace std;
int main(){
    int n=5;
    // (logic1)
    // for(int i=1;i<=n;i++){
    //     int s=0;
    //     while(s<n-i){
    //         cout<<" ";
    //         s++;
    //     }
    //     for(int j=1;j<(2*i);j++){
    //         if(j%2 == 0)
    //             cout<<" ";
    //         else
    //             cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // (logic2)
    for(int i=1;i<=n;i++){
        int s=0;
        while(s!=n-i){
            cout<<" ";
            s++;
        }
        for(int j=1;j<(2*i);j++){
            if(j%2 == 0)
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

//pattern4
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i)
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<=n;j++){
            if(j<=i)
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}

// pattern5
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    for(int i=0;i<=n/2;i++){
        for(int j=0;j<n;j++){
            if(j >= (n/2)-i && j<= (n/2)+i)
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n/2;i>0;i--){
        for(int j=0;j<n;j++){
            if(j >(n/2)-i && j<(n/2)+i)
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

// pattern6
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        int j=1;
        for(int s=1;s<=n-i;s++)
            cout<<" ";
        while(j<=(2*i-1)){
            cout<<j;
            j++;
        }
        cout<<endl;
    }
}

// pattern7
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        int s=0;
        while(s<n-i){
            cout<<" ";
            s++;
        }
        for(int j=1;j<=2*i-1;j++){
            if(j==1||j==(2*i-1))
                cout<<i;
            else
                cout<<0;
        }
        cout<<endl;
    }
}

// pattern8
#include <iostream>
using namespace std;
int main(){
    int n=10;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j>n-i)
                cout<<j%10;
            else
                cout<<" ";
        }
        for(int k=1;k<i;k++)
            cout<<n-k;
        cout<<endl;
    }
    return 0;
}

// pattern9
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j==1 || j==i || i==n)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// pattern10
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==n || i==n || j==n-i+1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}
*/

// pattern11
#include<iostream>
using namespace std;
int main(){
    int n;
    // cout<<"Enter the number of rows"<<endl;
    // cin>>n;
    n=7;
    for(int i=1;i<=n;i++){
        for(int s=0;s<n-i;s++)
            cout<<" ";
        for(int j=1;j<=2*i-1;j++){
            if(j%2 == 0){
                cout<<" ";
            }
            else if(j==1 || j==2*i-1){
                cout<<1;
            }
            else
                cout<<"#";
        }
        cout<<endl;
    }
}
//half solved

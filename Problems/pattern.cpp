/*
pattern1
*
**
***
****
*****

pattern2
    *
   **
  ***
 ****
*****

pattern3
1
22
333
4444
55555

pattern4
1
2 3
4 5 6
7 8 9 10

pattern5
for n=4
   *
  ***
 *****
*******

pattern6
for n=3
*
**
***
**
*

pattern7
for n=3
  *
 ***
*****
 ***
  *

pattern8
for n=5
*****
*   *
*   *
*   *
*****

*/

/*
#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of rows"<<endl;
	cin>>n;
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

//pattern2
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    cout<<"following is the pattern"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i)
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<endl;
    }
}

//pattern3
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of rows"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<i;
		}
		cout<<endl;
	}
	return 0;
}

//pattern4
#include<iostream>
using namespace std;
int main(){
	int n,num = 1;
	cout<<"Enter the number of rows"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<num<<" ";
			num++;
		}
		cout<<endl;
	}
	return 0;
}

//pattern5
#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of rows"<<endl;
	cin>>n;
	for(int i=1, k=0;i<=n; i++, k=0){
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		while(k != 2*i-1){
			cout<<"*";
			k++;
		}
		cout<<endl;
	}
	return 0;
}

//pattern6
#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of rows"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++)
			cout<<"*";
		cout<<endl;
	}
	for(int i=n-1;i>=1;i--){
		for(int j=1;j<=i;j++)
			cout<<"*";
		cout<<endl;
	}
	return 0;
}

//pattern7
#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of rows"<<endl;
	cin>>n;
	cout<<"following is the pattern"<<endl;
	for(int i=1,j=0;i<=n;i++,j=0){
	    for(int s=n-i;s>=1;s--){
	        cout<<" ";
	    }
	    while(j!=(2*i-1)){
	        cout<<"*";
	        j++;
	    }
	    cout<<endl;
	}
	for(int i=n-1,j=0;i>=1;i--,j=0){
	    for(int s=1;s<=(n-i);s++){
	        cout<<" ";
	    }
	    while(j!=(2*i-1)){
	        cout<<"*";
	        j++;
	    }
	    cout<<endl;
	}
	return 0;
}

//pattern8
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    cout<<"Following is the pattern"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n || j==1 || j==n){
                cout<<"*";
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
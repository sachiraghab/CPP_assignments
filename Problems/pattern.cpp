/*
pattern1
*
**
***
****
*****
*/
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

/*
pattern2
    *
   **
  ***
 ****
*****
*/
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

/*
pattern3
1
22
333
4444
55555
*/
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

/*
pattern4
1
2 3
4 5 6
7 8 9 10
*/
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
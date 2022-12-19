#include<iostream>
using namespace std;
void swap(int &x, int &y);
int main(){
    int a=23,b=90;
    cout<<"before swapping"<<endl;
    cout<<"a = "<<a<<" and b = "<<b;
    swap(a,b);
    cout<<"\nafter swapping"<<endl;
    cout<<"a = "<<a<<" and b = "<<b;
    return 0;
}
void swap(int &x, int &y){
    int temp=x;
    x=y;
    y=temp;
}
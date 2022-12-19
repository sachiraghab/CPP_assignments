#include<iostream>
using namespace std;
void run(){
    cout<<"flash is running"<<endl;
}
void run(string s){
    cout<<s<<" is running"<<endl;
}
int main(){
    run();
    run("reverse Flash");
    return 0;
}
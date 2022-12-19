#include<iostream>
using namespace std;
class Dog{
    string name;
    int age;
    public:
    Dog(){
        name = "tomy";
        age = 20;
    }
    void detail(){
        cout<<"name is "<<name<<endl;
        cout<<"age is "<<age<<endl;
    }
};
int main(){
    Dog d;
    d.detail();
    return 0;
}
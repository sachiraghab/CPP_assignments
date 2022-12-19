#include<iostream>
#include<string>
using namespace std;
class Laptop{
    string name;
    string brand;
    float price;
    string processor;
    public:
    void setdata(){
        cin>>name;
        cin>>brand;
        cin>>price;
        cin>>processor;
    }
    void getdata(){
        cout<<name<<" "<<brand<<" "<<price<<" "<<processor<<endl;
    }
    void shutdown(){
        cout<<"Laptop is shutting down"<<endl;
    }
    void startup(){
        cout<<"Laptop "<<name<<" is starting up"<<endl;
    }
};
int main(){
    Laptop L;
    L.setdata();
    L.startup();
    L.getdata();
    L.shutdown();
    return 0;
}
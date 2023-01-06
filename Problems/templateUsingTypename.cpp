#include <iostream>
template <typename T>

// One function works for all data types.  This would work
// even for user defined types if operator '>' is overloaded
T myx(T x, T y){
    return (x>y)?x:y;
}

using namespace std;

int main()
{
    cout<<myx<int>(10,15)<<endl;
    cout<<myx<char>('c','j')<<endl;
    cout<<myx<double>(25.6, 9.2)<<endl;
    return 0;
}

#include <iostream>
using namespace std;
inline int cube(int s)
{
	return s*s*s;
}
int main()
{
	cout << "The cube of 3 is: " << cube(3) << "\n";
	cout << "The cube of 8 is: " << cube(8) << "\n";
	cout << "The cube of 11 is: " << cube(11) << "\n";
	return 0;
} //Output: The cube of 3 is: 27

#include <iostream>
using namespace std;

int x;
void externStorageClass()
{

	cout << "Demonstrating extern class\n";
	extern int x;

	// printing the extern variables 'x'
	cout << "Value of the variable 'x'"
		<< "declared, as extern: " << x << "\n";

	// value of extern variable x modified
	x = 2;

	// printing the modified values of
	// extern variables 'x'
	cout
		<< "Modified value of the variable 'x'"
		<< " declared as extern: \n"
		<< x;
}

int main()
{

	// To demonstrate extern Storage Class
	externStorageClass();

	return 0;
}

#include <iostream>
using namespace std;

void autoStorageClass()
{

	cout << "Demonstrating auto class\n";

	// Declaring an auto variable
	// No data-type declaration needed
	auto a = 32;
	auto b = 3.2;
	auto c = "GeeksforGeeks";
	auto d = 'G';

	// printing the auto variables
	cout << a << " \n";
	cout << b << " \n";
	cout << c << " \n";
	cout << d << " \n";
}

int main()
{

	// To demonstrate auto Storage Class
	autoStorageClass();

	return 0;
}

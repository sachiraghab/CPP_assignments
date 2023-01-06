// C++ program to print numbers
// from 1 to 10 using goto
// statement
#include <iostream>
using namespace std;

// function to print numbers from 1 to 10
void printNumbers()
{
	int n = 1;
label:
	cout << n << " ";
	n++;
	if (n <= 10)
		goto label;
}

// Driver program to test above function
int main()
{
	printNumbers();
	return 0;
}

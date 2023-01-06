// C++ code to illustrate return
// statement
#include <iostream>
using namespace std;

// non-void return type
// function to calculate sum
int SUM(int a, int b)
{
	int s1 = a + b;
	return s1;
}

// returns void
// function to print
void Print(int s2)
{
	cout << "The sum is " << s2;
	return;
}

int main()
{
	int num1 = 10;
	int num2 = 10;
	int sum_of = SUM(num1, num2);
	Print(sum_of);
	return 0;
}

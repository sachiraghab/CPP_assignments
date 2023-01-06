// CPP code for bubble sort
// using template function
#include <iostream>
using namespace std;

// A template function to implement bubble sort.
// We can use this for any data type that supports
// comparison operator < and swap works for it.
template <class T> void bubbleSort(T a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = n - 1; i < j; j--)
			if (a[j] < a[j - 1])
				swap(a[j], a[j - 1]);
}
template <class T> void printArr(T arr[],int n){
    for (int i = 0; i < n; i++)
		cout << arr[i] << ",  ";
	cout << endl;
}

// Driver Code
int main()
{
	int a[] = { 10, 50, 30, 40, 20 };
	char b[] = {'y','e','i','n','b','c'};
	float f[] = {2.65, 1.25, 8.97, 5.0, 23.7, 7.8, 3.89};
	
	int n1 = sizeof(a) / sizeof(a[0]);
	int n2 = sizeof(b) / sizeof(b[0]);
	int n3 = sizeof(f) / sizeof(f[0]);

	// calls template function
	bubbleSort<int>(a, n1);
	bubbleSort<char>(b, n2);
	bubbleSort<float>(f, n3);

	cout << " Sorted array : ";
	printArr<int>(a,n1);
	cout << " Sorted array : ";
	printArr<char>(b,n2);
	cout << " Sorted array : ";
	printArr<float>(f,n3);

	return 0;
}

#include <iostream>
// using namespace std;

// template <class T, class U> class A {
// 	T x;
// 	U y;

// public:
// 	A() { cout << "Constructor Called" << endl; }
// };

// int main()
// {
// 	A<char, char> a;
// 	A<int, double> b;
// 	return 0;
// }

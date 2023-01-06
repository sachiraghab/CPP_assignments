/*
1. Syntax errors:
Errors that occur when you violate the rules of writing C/C++ syntax are known as syntax errors. 
This compiler error indicates something that must be fixed before the code can be compiled.
All these errors are detected by compiler and thus are known as compile-time errors.
*/

// #include <iostream>
// using namespace std;

// void main()
// {
// 	int x = 10;
// 	int y = 15;
	
// 	cout << " "<< (x, y) // semicolon missed
// }

// // This code is contributed by shivanisinghss2110


/*
2. Run-time Errors :
Errors which occur during program execution(run-time) after successful compilation are called run-time errors.
One of the most common run-time error is division by zero also known as Division error.
These types of error are hard to find as the compiler doesn’t point to the line at which the error occurs.
*/
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// void main()
// {
// 	int n = 9, div = 0;

// 	// wrong logic
// 	// number is divided by 0,
// 	// so this program abnormally terminates
// 	div = n/0;
	
// cout << "result = "<< div;
// }

// // This code is contributed by shivanisinghss2110


/*
3. Linker Errors:
These error occurs when after compilation we link the different object files with main’s object using Ctrl+F9 key(RUN).
These are errors generated when the executable of the program cannot be generated.
This may be due to wrong function prototyping, incorrect header files.
One of the most common linker error is writing Main() instead of main()
*/
// #include <bits/stdc++.h>
// using namespace std;

// void Main() // Here Main() should be main()
// {
// 	int a = 10;
// 	cout << " "<< a;
// }

// // This code is contributed by shivanisinghss2110


/*
4. Logical Errors :
On compilation and execution of a program, desired output is not obtained when certain input values are given.
These types of errors which provide incorrect output but appears to be error free are called logical errors.
These are one of the most common errors done by beginners of programming. 
*/
int main()
{
	int i = 0;

	// logical error : a semicolon after loop
	for(i = 0; i < 3; i++);
	{
	cout << "loop ";
		continue;
	}
	return 0;
}


// This code is contributed by shivanisinghss2110.


/*
5. Semantic errors :
This error occurs when the statements written in the program are not meaningful to the compiler.
*/
// int main()
// {
// 	int a, b, c;
// 	a + b = c; //semantic error
// }


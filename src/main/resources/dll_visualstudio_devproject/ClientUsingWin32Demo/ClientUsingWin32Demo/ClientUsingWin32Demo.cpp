// ClientUsingWin32.cpp 
// compile with: /EHsc /link Win32Demo.dll

#include <iostream>

#include "Win32Demo.h" 

using namespace std;

int main()
{
	double a = 7.4;
	int b = 99;

	cout << "a + b = " <<
		Win32Demo::MathFuncs::Add(a, b) << endl;
	cout << "a - b = " <<
		Win32Demo::MathFuncs::Subtract(a, b) << endl;
	cout << "a * b = " <<
		Win32Demo::MathFuncs::Multiply(a, b) << endl;
	cout << "a / b = " <<
		Win32Demo::MathFuncs::Divide(a, b) << endl;

	try
	{
		cout << "a / 0 = " <<
			Win32Demo::MathFuncs::Divide(a, 0) << endl;
	}
	catch (const invalid_argument &e)
	{
		cout << "Caught exception: " << e.what() << endl;
	}

	return 0;
}
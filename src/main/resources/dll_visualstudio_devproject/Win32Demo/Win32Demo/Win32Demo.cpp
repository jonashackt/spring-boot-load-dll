// Win32Demo.cpp : Definiert die exportierten Funktionen für die DLL-Anwendung.
//

#include "stdafx.h"
#include "Win32Demo.h"
#include <stdexcept>

using namespace std;

namespace Win32Demo
{
	double MathFuncs::Add(double a, double b)
	{
		return a + b;
	}

	double MathFuncs::Subtract(double a, double b)
	{
		return a - b;
	}

	double MathFuncs::Multiply(double a, double b)
	{
		return a * b;
	}

	double MathFuncs::Divide(double a, double b)
	{
		if (b == 0)
		{
			throw invalid_argument("b cannot be zero!");
		}

		return a / b;
	}
}


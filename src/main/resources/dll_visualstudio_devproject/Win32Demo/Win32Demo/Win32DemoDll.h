// Win32DemoDll.h

#ifdef WIN32DEMODLL_EXPORTS
#define WIN32DEMODLL_API __declspec(dllexport) 
#else
#define WIN32DEMODLL_API __declspec(dllimport) 
#endif

namespace Win32Demo
{
	// This class is exported from the Win32Demo.dll
	class MathFuncs
	{
	public:
		// Returns a + b
		static WIN32DEMODLL_API double Add(double a, double b);

		// Returns a - b
		static WIN32DEMODLL_API double Subtract(double a, double b);

		// Returns a * b
		static WIN32DEMODLL_API double Multiply(double a, double b);

		// Returns a / b
		// Throws const std::invalid_argument& if b is 0
		static WIN32DEMODLL_API double Divide(double a, double b);
	};
}
// Win32Demo.h

#ifdef WIN32DEMO_EXPORTS
#define WIN32DEMO_API __declspec(dllexport) 
#else
#define WIN32DEMO_API __declspec(dllimport) 
#endif

namespace Win32Demo
{
	// This class is exported from the Win32Demo.dll
	class MathFuncs
	{
	public:
		// Returns a + b
		static WIN32DEMO_API double Add(double a, double b);

		// Returns a - b
		static WIN32DEMO_API double Subtract(double a, double b);

		// Returns a * b
		static WIN32DEMO_API double Multiply(double a, double b);

		// Returns a / b
		// Throws const std::invalid_argument& if b is 0
		static WIN32DEMO_API double Divide(double a, double b);
	};
}
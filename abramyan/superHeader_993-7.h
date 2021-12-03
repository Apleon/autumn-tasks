#include <iostream>
using namespace std;

namespace goolSSrang
{
	template <class T1>
	void swap(T1& a, T1& b)
	{
		T1 temp = a;
		a = b;
		b = temp;
	}

	template <class T1, class T2>
	double max(T1 a, T2 b)
	{
		if (a > b)
			return a;
		return b;
	}

	template <class T1, class T2>
	double min(T1 a, T2 b)
	{
		if (a < b)
			return a;
		return b;
	}

	template <class T1>
	T1 pow(T1 a, int b)
	{
		for (size_t i = 1; i < b; i++)
			a *= a;
		return a;
	}
}

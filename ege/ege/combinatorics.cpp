#include "combinatorics.h"

int combinatorics::factorial(int const number)
{
	int f = 1;

	for (int i = 2; i <= number; ++i)
	{
		f *= i;
	}

	return f;
}
#include <iostream>
using namespace std;



bool smooth(int b, int number)
{
	if (number == 1)
	{
		return true;
	}
	for (int i = 2; i <= number; ++i)
	{
		if (number % i == 0)
		{
			bool flag = true;
			for (int k = 2; k <= b and k <= i; ++k)
			{
				if (i % k == 0)
				{
					flag = false;
					break;
				}
			}
			if (flag)
			{
				return false;
			}
		}
	}
	return true;
}

bool superSmooth(int b, int number)
{
	for (int i = number * 10; i > 0; i = i / 10)
	{
		if (!smooth(b, i))
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int b = 0;
	int maxNumber = 0;
	cin >> b;
	for (int number = 0; number < 1000; ++number)
	{
		if (superSmooth(b, number))
		{
			if (maxNumber < number)
			{
				maxNumber = number;
			}
		}
	}
	cout << maxNumber;
}

void takH()
{
	int b = 0;
	int maxNumber = 0;
	cin >> b;
	for (int number = 0; number < 1000; ++number)
	{
		if (superSmooth(b, number))
		{
			if (maxNumber < number)
			{
				maxNumber = number;
			}
		}
	}
	cout << maxNumber;
}

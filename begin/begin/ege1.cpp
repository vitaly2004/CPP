#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	int max171 = 0;
	int max172 = 0;
	int max0 = 0;
	int mmax171 = 0;
	int mmax172 = 0;
	int mmax0 = 0;
	for (int i = 0; i < n; ++i)
	{
		int num = 0;
		cin >> num;
		if (num % 17 == 0 and num % 2 == 0)
		{
			if (num >= max171)
			{
				max172 = max171;
				max171 = num;
			}
			if (num < max171 and num > max172)
			{
				max172 = num;
			}
		}
		else if ((num - max171) % 2 == 0)
		{
			max0 = num;
		}

		if (num % 17 == 0 and num % 2 != 0)
		{
			if (num >= mmax171)
			{
				mmax172 = mmax171;
				mmax171 = num;
			}
			if (num < mmax171 and num > mmax172)
			{
				mmax172 = num;
			}
		}
		else if ((num - mmax171) % 2 == 0)
		{
			mmax0 = num;
		}
	}
	int max[4] = {0, 0, 0, 0};
	if (max171 != 0 and max172 != 0)
	{
		max[0] = max171 + max172;
	}
	if (max171 != 0 and max0 != 0)
	{
		max[1] = max171 + max0;
	}
	if (mmax171 != 0 and mmax172 != 0)
	{
		max[2] = mmax171 + mmax172;
	}
	if (mmax171 != 0 and mmax0 != 0)
	{
		max[3] = mmax171 + mmax0;
	}
	int mmmax = 0;
	int ind = 0;
	for (int i = 0; i < 4; ++i)
	{
		if (max[i] > mmmax)
		{
			mmmax = max[i];
			ind = i;
		}
	}
	if (mmmax == 0)
	{
		cout << "0 0";
		return 0;
	}
	
	return 0;
}

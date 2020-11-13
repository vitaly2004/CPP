#include "combinatorics.h"
#include "ege252.h"
#include <iostream>
#include <fstream>
#include "ege253.h"
using namespace std;
// using namespace combinatorics;

void amain()
{
	int h = 0;
	int t = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int bite = 0;
	cin >> h >> t >> a >> b >> c;
	int o = h + t;
	if (h + t < c)
	{
		cout << -1;
	}

	else if (c < a or (c < b and a < c))
	{
		cout << -1;
	}

	else if (h + t == c or h == c)
	{
		cout << 1;
	}

	else if (h > c)
	{
		while (h > c)
		{
			h = h - c + a;
			bite = bite + 1;
		}

		if (h == c)
		{
			cout << bite + 1;
		}
		if (h == 0)
		{
			cout << bite;
		}
		else if (h + t < c)
		{
			cout << -1;
		}
		else if (h + t > c)
		{
			cout << bite;
		}
	}

	else if (h < c)
	{
		if (h + t < c)
		{
			cout << -1;
		}
		else if (h + t > c)
		{
			cout << bite;
		}
	}
}

int main()
{
	fstream fin("test.txt");
	
	int n = 0;
	fin >> n;

	int a[120];
	for (int i = 0; i < 120; ++i)
	{
		a[i] = 0;
	}

	int maxSum = 0;
	int L = 0;
	int R = 0;
	
	for (int i = 0; i < n; ++i)
	{
		int r = 0;
		fin >> r;
		
		int remainder = r % 120;
		int l = a[(120 - remainder) % 120];

		if (l != 0 && l > r)
		{
			int sum = l + r;
			if (sum > maxSum)
			{
				maxSum = sum;
				L = l;
				R = r;
			}
		}

		if (r > a[remainder])
		{
			a[remainder] = r;
		}
	}

	cout << L << " " << R;
}

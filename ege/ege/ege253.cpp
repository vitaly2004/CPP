#include "ege253.h"
#include <iostream>

using namespace std;

void ege253::task2910()
{
	int const rows = 2;
	int const cols = 4;
	int c, b = 0, max = 0, i;
	int a[rows][cols];
	for (i = 0; i < rows; i++) 
	{
		for (c = 0; c < cols; c++)
		{
			cin >> a[i][c];
		}
	}
	for (i = 0; i < rows; i++)
	{
		for (c = 0; c < rows; c++)
		{
			if (a[i][c] > max)
			{
				max = a[i][c];
			}
		}
		b += max;
		max = 0;
	}
	cout << b;
}

void ege253::task13555()
{
	int const  N = 5;
	{
		/*int deltaX[6] = {-1, -1,  1, 1, -2, 2};
		int deltaY[6] = {-2,  2, -2, 2, -1, 1};

		int x = 0;
		int y = 0*/

		int a[N];
		int i, m, k = 0;
		for (i = 0; i < N; i++)
			cin >> a[i];
		for (i = 0; i < N; i++) 
		{
			if (a[i] % 16 == 11) 
			{
				if (a[i] > k) 
				{
					k = a[i];
				}
			}
		}
		cout << k;
	}
}
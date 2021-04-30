#include <iostream>
using namespace std;

void sort(int* l)
{
	for (int j = 1; j <= 3; ++j)
	{
		for (int i = j; i < 3; ++i)
		{
			if (l[i] > l[i + 1])
			{
				swap(l[i], l[i + 1]);
			}
		}
	}
}

int main()
{
	int a = 0;
	int n = 0;
	int minN = 10000;
	int l[4];
	int sum[4] = { 0,0,0,0 };
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> l[1] >> l[2] >> l[3];
		sort(l);
		if (l[3] - l[2] < minN)
		{
			minN = l[3] - l[2];
		}
		if (l[3] - l[1] < minN)
		{
			minN = l[3] - l[1];
		}
		for (int i = 1; i <= 3; ++i)
		{
			sum[i] += l[i];
		}
	}
	if ((sum[1] + sum[2]) % 2 == 1)
	{
		cout << sum[3];
	}
	else
	{
		cout << sum[3] - minN;
	}
	return 0;
}


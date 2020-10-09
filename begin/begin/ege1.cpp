#include <iostream>
using namespace std;

void bubbleSort(int* array, int const size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size - 1; ++j)
		{
			if (array[j] > array[j + 1])
			{
				swap(array[j], array[j + 1]);
			}
		}
	}
}
 
void printArray(int const* array, int const size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

void inputArray(int* array, int const size)
{
	for (int i = 0; i < size; ++i)
	{
		cin >> array[i];
	}
}

void mmmmain()
{
	int const n = 5;
	int a[n];
	int sum = 0;
	int sum1 = 0;
	int k = 0;
	cin >> sum;
	for (int i = 0; i < n; ++i)
	{
		if (sum1 <= sum)
		{
			sum1 = sum1 + a[i];
			++k;
		}
	}
	cout << a[n - 2] << " " << k - 1;
}

int main()
{
	int a[5];
	
	inputArray(a, 5);

	printArray(a, 5);
}
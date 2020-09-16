#include "ege252.h"
#include <iostream>

using namespace std;

void ege252::task9209()
{
    int const N = 5;
    int a[N];
    int i, k;
    for (i = 0; i < N; i++)
        cin >> a[i];
    k = 0;
    for (i = 0; i < N; i++) {
        k = k + a[i];
    }
    if (k % 2 == 1) {
        k = 0;
        for (i = 0; i < N; i++) {
            if (a[i] % 2 == 1) {
                k++;
            }
        }
    }
    if (k % 2 == 0) {
        k = 0;
        for (i = 0; i < N; i++) {
            if (a[i] % 2 == 0) {
                k++;
            }
        }
    }
    cout << k;
}

void ege252::task9811()
{
	int const N = 5;
	int a[N];
	int i, j, k;
    k = 10001;

	for (i = 0; i < N; i++)
		cin >> a[i];

    for (i = 1; i < N - 1; i++)
    {
        if (a[i] < a[i - 1] && a[i] < a[i + 1])
        {
            if (k > a[i])
            {
                k = a[i];
            }
        }
    }
    cout << k;
}

void ege252::task3622()
{
    int const N = 10;
    {
        int i, l = 0, lmax = 0, s = 0, j = 0;
        for (i = 0; i < N; i++)
            cin >> a[i];
     
        for (i = 0; i < N; i++) 
        {
            if (a[i] < a[i + 1])
            {
                j = i;
                for (i = j; a[i] < a[i + 1]; i++)
                {
                    s = s + a[i];
                    l = l + 1;
                    if (l > lmax)
                    {
                        cout << s;
                    }
                }
            }
        }
    }
}

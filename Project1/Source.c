#include "Header.h"
int main()
{
	int* n = 10;
	int* arrayy = InitArray(n);
	ShowArray(arrayy, n);
	int* reArray;
	f fu = Square;
	f fu2 = MinusOne;

	int nDeleg = 2;
	delegat deleg = calloc(nDeleg, sizeof(f));

	deleg[0] = fu;
	deleg[1] = fu2;

	for (size_t i = 0; i < nDeleg; i++)
	{
		reArray = func(deleg[i], arrayy, n);
		ShowArray(reArray, n);
	}

	system("pause");
}
void ShowArray(int* array, int* n)
{
	for (size_t i = 0; i < n; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}
int* func(f func, int* array, int* n)
{
	int* reArray = calloc(n, sizeof(int));
	for (size_t i = 0; i < n; i++)
	{
		reArray[i] = func(array[i]);
	}

	return reArray;
}
int* InitArray(int* n)
{
	int* arrayy = calloc(n, sizeof(int));
	for (size_t i = 1; i <= n; i++)
	{
		arrayy[i - 1] = i;
	}
	return arrayy;
}
int Square(int a)
{
	return a * a;
}
int MinusOne(int a)
{
	return a - 1;
}
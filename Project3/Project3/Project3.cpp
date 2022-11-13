// Lab 6_2
// спос≥б 1
#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

void rand(int n, int a[])
{
	for (size_t i = 0; i < n; i++)
	{
		a[i] = rand() % 100 + 1 ;
	}

	for (size_t i = 0; i < n; i++)
	{
		cout  << a[i] << ", ";
	}
}

void arr(int n, int a[])
{
	for (size_t i = 0; i < n; i++)
	{
		int x;
		cout << "¬ведiть "<< i+1 << "елемент масива: "; cin >> x;
		a[i] = x;
	}
	cout << "\n¬ивiд масива: ";
	for (size_t i = 0; i < n; i++)
	{
		cout << a[i] << ", ";
	}
}

double in(int a[], int n)
{
	int min = a[0];
	int index = 0;
	for (int r = 1; r < n; r++)
	{
		if (a[r] % 2 == 1)
		{
			if (min > a[r])
			{
				min = a[r];
				index = r;
			}
		}
	}
	return index;
}

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int  size;
	int x;
	cout << "¬ведiть довжину масива "; cin >> size;
	int* a = new int[size];

	cout << "\nякщо хочете ввести значенн€ масиву самi введiть '1', €кщо нi тодi iнше число "; cin >> x;

	if (x == 1)
	{
		arr(size, a);
	}
	else
	{
		cout << "\nв масив записуютьс€ числа вiд 1 до 100 ";
		cout << "\narray: ";  rand(size, a);
	}
	cout << "\n iндекс найменшого непарного числа: " << in(a, size);
	delete[] a;
	return 0;
}
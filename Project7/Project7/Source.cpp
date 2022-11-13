// Lab 6_4
// спосіб 1
#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

void rand(int n, int a[])
{
	for (size_t i = 0; i < n; i++)
	{
		a[i] = rand() % 30 - 15;
	}

	for (size_t i = 0; i < n; i++)
	{
		cout << a[i] << ", ";
	}
}


double sum(int a[], int n)
{
	int sum = 0;
	for (int r = 1; r < n; r++)
	{
		if (a[r] > 0)
		{
			sum += a[r];
			
		}
	}
	return sum;
}
double Dob(int a[], int n)
{
	int in_max = 0;
	int in_min = 0;
	int max = 0;
	int min = 100;
	int dob = 1;
	for (int r = 0; r < n; r++)
	{
		if (max < abs(a[r]))
		{
			in_max = r;
			max = abs(a[r]);
		}
		if (min > abs(a[r]))
		{
			in_min = r;
			min = abs(a[r]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		if ((i >= in_min && i <= in_max) || (i <= in_min && i >= in_max))
			dob *= a[i];

	}
	return dob;
}

void sort(int array[], int size)
{
	for (int startIndex = 0; startIndex < size - 1; ++startIndex)
	{
		
		int smallestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < size; ++currentIndex)
		{
			if (array[currentIndex] < array[smallestIndex])

				smallestIndex = currentIndex;
		}

	
		swap(array[startIndex], array[smallestIndex]);
	}
	for (int index = 0; index < size; ++index)
		cout << array[index] << ' ';
}

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int  size;
	cout << "Введiть довжину масива "; cin >> size;
	int* a = new int[size];

	cout << "\nв масив записуються числа вiд -15 до 15 " << endl;
	cout << "array: ";  rand(size, a);

	cout << "\n\n сума додатних значень масиву: " << sum(a, size) << endl;
	cout << " \nДобуток елементiв масиву, розташованих мiж максимальним за модулем i мiнiмальним за модулем елементами: " << Dob(a, size) << endl;
	cout << "\nВивiд масива выд меншого до бiльшого: "; sort(a, size);

	delete[] a;
	return 0;
}
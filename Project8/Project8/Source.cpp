// Lab 6_4
// спосіб 2
#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;


double rand(int n, int a[], int i)
{
	if (i < n)
	{
		a[i] = rand() % 30 - 15;
		cout << a[i] << ", ";
		return rand(n, a, i + 1);
	}
}


double Sum(int a[], int n, int i, int sum)
{
	if (i < n)
	{
		if (a[i] >= 0)
		{
			sum += a[i];
		}
		return Sum(a, n,i + 1, sum);
	}
	return sum;
}
double Dob(int a[], int n, int r, int i, int in_max, int in_min, int max, int min, int dob)
{
	if (r < n)
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
		return Dob(a, n, r + 1, i, in_max, in_min, max, min, dob);
	}
	
	if (i < n)
	{
		if ((i >= in_min && i <= in_max) || (i <= in_min && i >= in_max))
			dob *= a[i];
		return Dob(a, n, r , i + 1, in_max, in_min, max, min, dob);

	}
	return dob;
}

double sort(int array[], int size, int startIndex, int smallestIndex, int index)
{
	if (startIndex < size - 1)
	{

		int smallestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < size; ++currentIndex)
		{

			if (array[currentIndex] < array[smallestIndex])
				smallestIndex = currentIndex;
		}

		swap(array[startIndex], array[smallestIndex]);
		return sort(array, size, startIndex + 1, smallestIndex, index);
		
	}
	if (index < size)
		cout << array[index] << ' ';
	return(array, size, startIndex, smallestIndex, index+1);
}


int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int  size, i = 0;
	cout << "Введiть довжину масива "; cin >> size;
	int* a = new int[size];

	cout << "\nв масив записуються числа вiд -15 до 15 " << endl;
	cout << "array: ";  rand(size, a, i);

	cout << "\n\nсума додатних значень масиву: " << Sum(a, size, i, i) << endl;
	cout << " \nДобуток елементiв масиву, розташованих мiж максимальним за модулем i мiнiмальним за модулем елементами: " << Dob(a, size, i, i, i, i, i, 100, 1) << endl;
	cout << "\nВивiд масива выд меншого до бiльшого: "; sort(a, size, i, i, i);

	delete[] a;
	return 0;
}
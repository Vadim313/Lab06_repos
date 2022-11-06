// Lab 6_1
// спрсіб 2
#include <iostream>
#include <stdlib.h>

using namespace std;
double rand(int n, int a[], int i)
{
	if (i < n)
	{
		a[i] = rand() % 45 - 10;
		cout << a[i] << ", ";
		return rand(n, a, i + 1);
	}
}
int Sum(int n, int a[], int sum, int i)
{
	if (i < n)
	{
		if (a[i] > 0 || a[i] % 3 != 0)
		{

			return Sum(n, a, sum += a[i], i + 1);
		}
		else
			return Sum(n, a, sum, i + 1);
	}
	else
		return sum;
}
int count(int n, int a[], int sum, int i)
{
	
	if (i < n)
	{
		if (a[i] > 0 || a[i] % 3 != 0)
			return count(n, a, sum + 1, i + 1);
		else
			return count(n, a, sum , i + 1);;
	}
	else
		return sum;
}

double foo(int n, int a[], int i)
{
	if (i < n)
	{
		if (a[i] > 0  || a[i] % 3 != 0)
		{
			cout << 0 << ' ';
		return foo(n, a, i + 1);
		}
		else
			cout << a[i] << " ";
		return foo(n, a, i + 1);
	}
}
int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int const size = 22;
	int a[size];
	int i = 0;


	cout << "array: ";  rand(size, a, i);
	cout << "\n\nвивiд суми додатнiх чисел масива: " << Sum(size, a, i, i) << endl;
	cout << "\nвивiд кiлькосты додатнiх чисел масива: " << count(size, a, i, i) << endl;
	cout << "\nзамiна всiх додатнiх або  не кратних трьом чисел масива: ";
	foo(size, a, i);
	cout << "\n\n";
	return 0;
}
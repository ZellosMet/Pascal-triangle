#include<iostream>
using namespace std;

void main()
{

	setlocale(LC_ALL, "ru");
	int n;
	long long x = 1, y = 1, z = 1;

	cout << "Введите количество строк треугольника Паскаля: "; cin >> n;

	for (int s = 0; s < n; s++)
	{
		cout << " ";
	}
	cout << 1 << endl;
	for (int i = 1; i < n; i++)
	{
		for (int s = 0; s < n - i; s++)
		{
			cout << " ";
		}
		for (int j = 0; j <= i; j++)
		{
			for (int k = 1; k <= i; k++)
			{
				x *= k;
			}
			for (int k = 1; k <= j; k++)
			{
				y *= k;
			}
			for (int k = 1; k <= i - j; k++)
			{
				z *= k;
			}
			cout << (x / (y * z)) << " ";
			x = 1, y = 1, z = 1;
		}
		cout << endl;
	}
}
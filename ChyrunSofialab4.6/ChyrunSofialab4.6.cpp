// ChyrunSofialab4.6.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_04_6.cpp
// < Чирун Софія >
// Лабораторна робота № 4.6
// Вкладені цикли
// Варіант 18

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double P, S;
	int n, i,k;
	P = 1;
	i = 1;
	while (i <= 15)

	{
		S = 1;
		k = i;
		while (k <= 30-i)

		{
			S *= (sin(i) * pow(k,2) + cos(k )* pow(i,2)) / (pow(k,2) + pow(i,2));
			k++;

		}
		P *= S;
		i++;

	}
	cout << P << endl;
	P = 1;
	i = 1;
	do
	{
		S = 1;
		k = i;
		do
		{
			S *= (sin(i) * pow(k, 2) + cos(k) * pow(i, 2)) / (pow(k, 2) + pow(i, 2));
			k++;
		} while (k <= 30 - i);
		P *= S;
		i++;
	} while (i <= 15);
	cout << P << endl;
	P = 1;
	for (i = 1; i <= 15; i++)

	{
		S = 1;
		for (k = i; k <= 30 - i; k++)

		{
			S *= (sin(i) * pow(k, 2) + cos(k) * pow(i, 2)) / (pow(k, 2) + pow(i, 2));

		}
		P *= S;

	}
	cout << P << endl;
	P = 1;
	for (i = 15; i >= 1; i--)
	{
		S = 1;
		for (k = 30 - i ; k >= i; k--)

		{
			S *= (sin(i) * pow(k, 2) + cos(k )* pow(i, 2)) / (pow(k, 2) + pow(i, 2));

		}
		P *= S;
	}
	cout << P << endl;
	return 0;
}

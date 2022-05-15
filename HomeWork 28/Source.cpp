#include "Task1.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	setlocale(LC_ALL,"Russian");
	int n, m;
	cout << "Задача 1.\nВведите длины массива A и массива B -> ";
	cin >> n >> m;
	int* a = new int[n];
	int* b = new int[m];

	fillArr(a, n, 0, 50);
	fillArr(b, m, 51, 100);

	cout << "Массив A:\n";
	showArr(a, n);
	cout << "Массив B:\n";
	showArr(b, m);

	int* c = new int[n + m];

	for (int i = 0; i < n; i++)
		c[i] = a[i];
	for (int i = n; i < n + m; i++)
		c[i] = b[i - n];

	delete[] a;
	delete[] b;
	cout << "Новый массив:\n";
	showArr(c, n + m);

	return 0;
}
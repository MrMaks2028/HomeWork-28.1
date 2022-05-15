#include "Task1.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	setlocale(LC_ALL,"Russian");
	int n, m;
	cout << "������ 1.\n������� ����� ������� A � ������� B -> ";
	cin >> n >> m;
	int* a = new int[n];
	int* b = new int[m];

	fillArr(a, n, 0, 50);
	fillArr(b, m, 51, 100);

	cout << "������ A:\n";
	showArr(a, n);
	cout << "������ B:\n";
	showArr(b, m);

	int* c = new int[n + m];

	for (int i = 0; i < n; i++)
		c[i] = a[i];
	for (int i = n; i < n + m; i++)
		c[i] = b[i - n];

	delete[] a;
	delete[] b;
	cout << "����� ������:\n";
	showArr(c, n + m);

	return 0;
}
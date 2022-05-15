#include "Task1.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

void fillArr(int a[], int len, int min, int max) {
	srand(time(NULL));
	for(int i = 0; i < len; i++) {
		a[i] = rand() % (max - min) + min;
	}
}

void showArr(int a[], int len) {
	std::cout << "[";
	for (int i = 0; i < len; i++)
		std::cout << a[i] << ", ";
	std::cout << "\b\b]\n";
}
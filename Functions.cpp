#include <iostream>
#include "Functions.h"
using namespace std;
int** input(int n) {
	int** matr = new int* [n];//создание массива с помощью коорого считаем
	for (int i = 0; i < n; i++)
		matr[i] = new int[n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			cin >> matr[i][j];
			if (cin.fail()) {
				cout << "Ошибка ввода";
				return 0;
			}
		}
			
	return matr;
}
void function(int** matr, int** result, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int s = 0;
			for (int q = 0; q < n; q++) {
				s += matr[i][q] * matr[q][j];
			}
			result[i][j] = 2 * s - matr[i][j];
		}
	}
}
void output(int** matr, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << matr[i][j] + 3 << ' ';
		cout << endl;
	}
}
void free(int**& matr, int n) {//очистка поля
	for (int i = 0; i < n; i++) {
		delete[] matr[i];
	}
	delete[] matr;
	matr = 0;
}
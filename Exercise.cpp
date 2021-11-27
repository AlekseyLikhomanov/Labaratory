//f(x) = 2x^2 - x; g(x) = 2x^2 - x + 3; g(f(A))
#include <iostream>
#include "Functions.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int n;
	cin >> n;
	if (cin.fail()) {
		cout << "Ошибка ввода";
		return 0;
	}
	int** matrix = input(n);
	int** result = new int* [n];//создание массива в котором хранится результат
	for (int i = 0; i < n; i++)
		result[i] = new int[n];
	function(matrix, result, n);//вычисление
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < n; j++)
			matrix[i][j] = result[i][j];
	function(matrix, result, n);
	output(result, n);
	free(matrix, n);
	free(result, n);
	system("pause");
	return 0;
}
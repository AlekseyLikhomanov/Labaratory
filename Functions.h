#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP
//ввод матрицы
int** input(int n);
//вычисление по формуле
void function(int** matr, int** result, int n);
//вывод результата
void output(int** matr, int n);
//очистка памяти
void free(int**& matr, int n);
#endif
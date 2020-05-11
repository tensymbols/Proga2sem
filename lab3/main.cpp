#include <iostream>

#include "FIFO.h"
#include "matrix33.h"

int main() {
	setlocale(LC_ALL, "Russian");
	matrix33 mx1;
	matrix33 mx2;

	double temp;
	std::cout << "Инициализируйте матрицу:\n";

	for (size_t i = 0; i < 3; i++)	{
		for (size_t j = 0; j < 3; j++)		{
			std::cin >> temp;
			mx1.SetValue(i, j, temp);
		}
	}
	std::cout << std::endl;
	for (size_t i = 0; i < 3; i++)	{
		for (size_t j = 0; j < 3; j++)		{
			mx2.SetValue(i, j, double(rand()%100+1.0));
			cout << mx2.GetValue(i, j) << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

	matrix33 resMultREAL; // Матрица, результат умножения матрицы на число
	matrix33 resMultMX; // Матрица, результат перемножения двух матриц
	matrix33 resADDSUB; // Матрица,  результат сложения/вычитания матриц

	resMultREAL = mx1 * 2;
	resMultREAL.printMatrix();

	resMultMX = mx1 * mx2;
    resMultMX.printMatrix();

	FIFO queue;

	int num=0;
	cout << "Какое число добавить в очередь? ";
	cin >> num;
	queue >> num;
	queue << num;
	cout << num;

}
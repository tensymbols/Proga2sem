#include "tasks.h"

using namespace std;
void Swap(double* var1, double* var2) {
	double var3;
	var3 = *var1;
	*var1 = *var2;
	*var2 = var3;
}
void Swap(double& var1, double& var2) {
	double var3;
	var3 = var1;
	var1 = var2;
	var2 = var3;
}



void roundF(double* number) {
	*number = round(*number);
}
void roundF(double& number) {
	number = round(number);
}

void complexF(complex* num0, double* num1) {
	num0->imag *= *num1;
	num0->real *= *num1;
}
void complexF(complex& num0, double& num1) {
	num0.imag *= num1;
	num0.real *= num1;
}

void transpose(double(*mx)[3][3]) {
	double transmx[3][3];
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			transmx[i][j] = (*mx)[j][i];
		}
	}
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			(*mx)[i][j] = transmx[i][j];
		}
	}
}

void transpose(double(&mx)[3][3]) {
	double transmx[3][3];

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			transmx[i][j] = mx[j][i];
		}
	}
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			mx[i][j] = transmx[i][j];
		}
	}
}

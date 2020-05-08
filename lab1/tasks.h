
#include "math.h"

#pragma once
struct complex {
	double real;
	double imag;

};

void Swap(double* var1, double* var2);
void Swap(double& var1, double& var2);

void roundF(double* number);
void roundF(double& number);




void complexF(complex* num0, double* num1);

void complexF(complex& num0, double& num1);


void transpose(double(*mx)[3][3]);

void transpose(double(&mx)[3][3]);
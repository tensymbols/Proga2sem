#include "matrix33.h"
void matrix33::operator=(const matrix33 & obj)
{
	mx = obj.mx;
}
void matrix33::SetValue(int i, int j, double value)
{
	mx[i][j] = value;
}

double matrix33::GetValue(int i, int j)
{
	return mx[i][j];
}

void matrix33::printMatrix()
{
	for (int i = 0; i < mHeight; i++)
	{
		for (int j = 0; j < mWidth; j++)
		{
			cout << mx[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}



matrix33::matrix33()  {
	mx = vector<vector<double>>(mHeight, vector<double>(mWidth, 0.0));
}

matrix33 matrix33::operator+(matrix33& obj)
{
	matrix33 add;
	double firstval;
	double secondval;

	for (size_t i = 0; i < add.mHeight; i++)
	{
		for (size_t j = 0; j < add.mWidth; j++)
		{
			firstval = this->mx[i][j];
			secondval = obj.mx[i][j];
			add.SetValue(i,j,firstval+secondval);
		}
	}

	return add;
}

matrix33 matrix33::operator-(matrix33& obj)
{
	matrix33 sub;
	double firstval;
	double secondval;

	for (size_t i = 0; i < sub.mHeight; i++)
	{
		for (size_t j = 0; j < sub.mWidth; j++)
		{
			firstval = this->mx[i][j];
			secondval = obj.mx[i][j];
			sub.SetValue(i, j, firstval - secondval);
		}
	}

	return sub;
}
matrix33 matrix33::operator*(matrix33& obj)
{
	matrix33 mult;

	for (size_t i = 0; i < mult.mHeight; i++)
	{
		for (size_t j = 0; j < mult.mWidth; j++)
		{
			mult.mx[i][j] = 0;
			for (size_t k = 0; k < obj.mHeight; k++) {
				mult.mx[i][j] += mx[i][k]*obj.mx[k][j];
			}
			
		}
	}
	return mult;
}

matrix33 matrix33::operator*(const double num)
{
	for (size_t i = 0; i < mHeight; i++)
	{
		for (size_t j = 0; j < mWidth; j++)
		{
			mx[i][j] *= num;
		}
	}
	return *this;
}

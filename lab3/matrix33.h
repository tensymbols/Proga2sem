#pragma once
#include <vector>
#include <iostream>
using namespace std;

class matrix33 {
private:
	
	const int mWidth=3;
	const int mHeight=3;
	vector<vector<double>> mx;
public:
	matrix33();

	void operator= (const matrix33&obj);
	void SetValue(int,int,double);
	double GetValue(int, int);
	void printMatrix();
	matrix33 operator +(matrix33& obj);
	matrix33 operator -(matrix33& obj);
	matrix33 operator *(matrix33& obj);
	matrix33 operator *(const double);
};
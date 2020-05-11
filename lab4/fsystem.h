#pragma once
#include "interfaces.h"

class FSystem {
private:
	vector<Figure*> figures;
	size_t quantity=0;
public:
	void Draw(size_t);
	void DrawMass();
	void Add(Figure*);
	void SetQuantity(int);
	int GetQuantity();
	double areaSumm();
	double perimeterSumm();
	CVector2D systemMassCenter();
	int occupiedMemory();

	void sort();


};
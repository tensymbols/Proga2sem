#include <iostream>
#include "parallelogram.h"
#include "ellpise.h"
int main() {

	setlocale(LC_ALL, "Russian");
	std::vector<IGeoFig> figures;

	Parallelogram par;
	par.initFromDialog();
	figures.push_back(par);

}
#include <algorithm>
#include "fsystem.h"
void FSystem::Draw(size_t index)
{
	figures[index]->draw();
}
void FSystem::DrawMass()
{
	for (size_t i = 0; i < figures.size(); i++)
	{
		cout <<i+1<<")"<< figures[i]->mass() << "\n";
	}
}
void FSystem::Add(Figure *figure)
{
	figures.push_back(figure);
}
void FSystem::SetQuantity(int in_q)
{
	quantity = in_q;
}
int FSystem::GetQuantity()
{
	return quantity;
}
double FSystem::areaSumm()
{
	double areaSumm = 0;
	for (size_t i = 0; i < figures.size(); i++)
	{
		areaSumm += figures[i]->area();
	}
	return areaSumm;
}

double FSystem::perimeterSumm()
{
	double perSumm = 0;
	for (size_t i = 0; i < figures.size(); i++)
	{
		perSumm += figures[i]->perimeter();
	}
	return perSumm;
}

CVector2D FSystem::systemMassCenter() {
	double x_mx=0;
	double y_my=0;
	double massSumm=0;
	for (size_t i = 0; i < figures.size(); i++)
	{
		x_mx += figures[i]->mass() * figures[i]->position().x;
		y_my += figures[i]->mass() * figures[i]->position().y;
		massSumm += figures[i]->mass();
	}

	CVector2D massCenter;
	massCenter.x = x_mx / massSumm;
	massCenter.y = y_my / massSumm;
	return massCenter;
}

int FSystem::occupiedMemory()
{
	int memSumm = 0;
	for (size_t i = 0; i < figures.size(); i++)
	{
		memSumm += sizeof(*figures[i]);
	}
	return memSumm;
}

bool comp(IPhysObject* obj1, IPhysObject* obj2) {
	return *obj1 < *obj2;
}
void FSystem::sort()
{
	std::sort(figures.begin(), figures.end(), comp);
}

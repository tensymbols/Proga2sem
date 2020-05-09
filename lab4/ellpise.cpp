#include "ellpise.h"

double Ellipse::area()
{
	return 0.0;
}

double Ellipse::perimeter()
{
	return 0.0;
}

double Ellipse::mass()
{
	return 0.0;
}

CVector2D Ellipse::Position()
{
	return CVector2D();
}

bool Ellipse::operator==(const IPhysObject&) const
{
	return false;
}

bool Ellipse::operator<(const IPhysObject&) const
{
	return false;
}

void Ellipse::draw()
{
}

void Ellipse::initFromDialog()
{
}

const char* Ellipse::classname()
{
	return ("Ellipse");
}

unsigned int Ellipse::size()
{
	return sizeof(Ellipse);
}

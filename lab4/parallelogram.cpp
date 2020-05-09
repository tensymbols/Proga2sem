#include "parallelogram.h"
#include <math.h>

Parallelogram::Parallelogram(const CVector2D& p1, const CVector2D& p2, const CVector2D& p4)
{
	x = p1.x;
	y = p1.y;
	points[0] = p1;
	points[1] = p2;
	points[3] = p4;

	points[2] = { p2.x + p4.x,p2.y+p4.y }; // сложение векторов дает координаты последней точки

}

double Parallelogram::area()
{
	double x1 = points[1].x - x; double y1 = points[1].y - y;
	double x2 = points[3].x - x; double y2 = points[3].y - y;

	double len1 = sqrt(pow(x1, 2) + pow(x2, 2));
	double len2 = sqrt(pow(y1, 2) + pow(y2, 2));

	double scalarMult =x1 *x2 + y1*y2;
	double lengthMult =  len1*len2 ;
	return len1 * len2 * (sqrt(1 - pow(scalarMult / lengthMult, 2))); // S= A*B*sin a
}

double Parallelogram::perimeter()
{
	return 0.0;
}

double Parallelogram::mass () const
{
	return 0.0;
}

CVector2D Parallelogram::Position()
{
	return CVector2D();
}

bool Parallelogram::operator==(const IPhysObject& obj) const
{
	return this->mass()==obj.mass();
}

bool Parallelogram::operator<(const IPhysObject& obj) const
{
	return this->mass() < obj.mass();
}

void Parallelogram::draw()
{
}

void Parallelogram::initFromDialog()
{
}

const char* Parallelogram::classname()
{
	return ("Parallelogram");
}

unsigned int Parallelogram::size()
{
	return sizeof(Parallelogram);
}

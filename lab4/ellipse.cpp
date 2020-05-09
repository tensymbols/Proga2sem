
#include "ellipse.h"
#define _USE_MATH_DEFINES
#include <math.h>

void Ellipse::initFromDialog()
{
	cout << "Для инициализации эллипса необходимо ввести координаты его центра и два радиуса\n";

	cout << "Введите координаты центра: ";
	cin >> center.x >> center.y;
	x = center.x; y = center.y;

	cout << "Введите 1ый радиус: ";
	cin >> r1;

	cout << "Введите 2ой радиус: ";
	cin >> r2;


	cout << "Введите плотность фигуры: ";
	cin >> density;

}

double Ellipse::area() const
{
	return M_PI * r1*r2;
}

double Ellipse::perimeter() const
{
	return 4 * ( (M_PI*r1*r2 + (r1 - r2)) /(r1 + r2) );
}

double Ellipse::mass() const
{
	return density * this->area();
}

CVector2D Ellipse::position() const
{
	return center;
}

bool Ellipse::operator==(const IPhysObject& obj) const
{
	return this->mass() == obj.mass();
}

bool Ellipse::operator<(const IPhysObject& obj) const
{
	return this->mass() < obj.mass();
}

void Ellipse::draw() const
{
	cout << classname() << " " << size() << " bytes\n";
	cout << "X, Y:" << x << " " << y<< "\n";
	cout << "Площадь: " << area() << "\n";
	cout << "Периметр: " << area() << "\n";
	cout << "Плотность: " << density << "\n";
	cout << "Масса: " << mass() << "\n";
	CVector2D pos = position();
	cout << "Центр масс: " << pos.x << " " << pos.x << "\n";
	
	cout << "Координаты центра радиуса: " << center.x<<" " << center.y << "\n";
	cout << "1ый радиус:" << r1 <<"\n";
	cout << "2ой радиус:"<< r2 << "\n";
}

const char* Ellipse::classname() const
{
	return ("Ellipse");
}

unsigned int Ellipse::size() const
{
	return sizeof(Ellipse);
}

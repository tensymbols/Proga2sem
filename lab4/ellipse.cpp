
#include "ellipse.h"
#define _USE_MATH_DEFINES
#include <math.h>

void Ellipse::initFromDialog()
{
	cout << "��� ������������� ������� ���������� ������ ���������� ��� ������ � ��� �������\n";

	cout << "������� ���������� ������: ";
	cin >> center.x >> center.y;
	x = center.x; y = center.y;

	cout << "������� 1�� ������: ";
	cin >> r1;

	cout << "������� 2�� ������: ";
	cin >> r2;


	cout << "������� ��������� ������: ";
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
	cout << "�������: " << area() << "\n";
	cout << "��������: " << area() << "\n";
	cout << "���������: " << density << "\n";
	cout << "�����: " << mass() << "\n";
	CVector2D pos = position();
	cout << "����� ����: " << pos.x << " " << pos.x << "\n";
	
	cout << "���������� ������ �������: " << center.x<<" " << center.y << "\n";
	cout << "1�� ������:" << r1 <<"\n";
	cout << "2�� ������:"<< r2 << "\n";
}

const char* Ellipse::classname() const
{
	return ("Ellipse");
}

unsigned int Ellipse::size() const
{
	return sizeof(Ellipse);
}

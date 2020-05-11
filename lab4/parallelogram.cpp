#include "parallelogram.h"
#include <math.h>

void Parallelogram::initFromDialog() 
{
	cout << "��� ������������� ��������������� ���������� ������ ��� ���������� ���� ��� ����� � \n������, ������ � ���������(�� ������� �������)\n���������� ������� ����� ����� ���������.\n";
	CVector2D p1;
	cout << "������� x, y ��� 1�� �����:";
	cin >> p1.x >> p1.y;

	CVector2D p2;
	cout << "������� x, y ��� 2�� �����:";
	cin >> p2.x >> p2.y;

	CVector2D p4;
	cout << "������� x, y ��� 4�� �����:";
	cin >> p4.x >> p4.y;

	x = p1.x;
	y = p1.y;
	points[0] = p1;
	points[1] = p2;
	points[3] = p4;

	points[2] = { p2.x + p4.x - x,p2.y+p4.y - y }; // �������� �������� ���� ���������� ��������� �����
	
	cout << "������� ��������� ������:";
	cin >> density;

}

double Parallelogram::area() const
{
	double x1 = points[1].x - x; double y1 = points[1].y - y;
	double x2 = points[3].x - x; double y2 = points[3].y - y;

	double len1 = sqrt( x1*x1 + y1*y1);
	double len2 = sqrt( x2*x2 + y2*y2);

	double scalarMult =x1 *x2 + y1*y2;
	double lengthMult =  len1*len2 ;
	return len1 * len2 * ( sqrt(1 - pow(scalarMult / lengthMult, 2) ) ); // S= A*B*sin a
}

double Parallelogram::perimeter() const
{
	double x1 = points[1].x - x; double y1 = points[1].y - y;
	double x2 = points[3].x - x; double y2 = points[3].y - y;

	double len1 = sqrt(x1*x1 + y1*y1);
	double len2 = sqrt(x2*x2 + y2*y2);
	return (len1 + len2) * 2;
}

double Parallelogram::mass () const
{
	return density * this->area();
}

CVector2D Parallelogram::position() const
{
	CVector2D massCentr;
	massCentr.x = (points[0].x + points[2].x) / 2;	// ����� ���� - ����������� ����.
	massCentr.y = (points[0].y + points[2].y) / 2; // �� ����������� ����. ����� �� ������� �� ����� ����� �������� ����� ���������
	return massCentr;
}

bool Parallelogram::operator==(const IPhysObject& obj) const
{
	return this->mass()==obj.mass();
}

bool Parallelogram::operator<(const IPhysObject& obj) const
{
	return this->mass() < obj.mass();
}

void Parallelogram::draw() const
{
	cout << classname() << " "<< size() <<" bytes\n";
	cout << "X, Y:" << x << " " << y<<"\n";
	cout << "�������: " << area() << "\n";
	cout << "��������: " << perimeter() << "\n";
	cout << "���������: " << density << "\n";
	cout << "�����: "<< mass()<<"\n";
	CVector2D pos = position();
	cout << "����� ����: " << pos.x <<" "<< pos.x << "\n";
	for (size_t i = 0; i <= 3; i++)
	{
		cout << "���������� " << i+1 << " �����: " << points[i].x << " " << points[i].y << "\n";
	}
}

const char* Parallelogram::classname() const
{
	return ("Parallelogram");
}

unsigned int Parallelogram::size() const
{
	return sizeof(Parallelogram);
}

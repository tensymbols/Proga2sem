#include "parallelogram.h"
#include <math.h>

void Parallelogram::initFromDialog() 
{
	cout << "Для инициализации параллелограмма необходимо ввести три координаты трех его точек — \nпервой, второй и четвертой(по часовой стрелке)\nКоординаты третьей точки будут вычислены.\n";
	CVector2D p1;
	cout << "Введите x, y для 1ой точки:";
	cin >> p1.x >> p1.y;

	CVector2D p2;
	cout << "Введите x, y для 2ой точки:";
	cin >> p2.x >> p2.y;

	CVector2D p4;
	cout << "Введите x, y для 4ой точки:";
	cin >> p4.x >> p4.y;

	x = p1.x;
	y = p1.y;
	points[0] = p1;
	points[1] = p2;
	points[3] = p4;

	points[2] = { p2.x + p4.x - x,p2.y+p4.y - y }; // сложение векторов дает координаты последней точки
	
	cout << "Введите плотность фигуры:";
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
	massCentr.x = (points[0].x + points[2].x) / 2;	// центр масс - пересечение диаг.
	massCentr.y = (points[0].y + points[2].y) / 2; // тк пересечение диаг. делит их пополам то можно найти середину любой диагонали
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
	cout << "Площадь: " << area() << "\n";
	cout << "Периметр: " << perimeter() << "\n";
	cout << "Плотность: " << density << "\n";
	cout << "Масса: "<< mass()<<"\n";
	CVector2D pos = position();
	cout << "Центр масс: " << pos.x <<" "<< pos.x << "\n";
	for (size_t i = 0; i <= 3; i++)
	{
		cout << "Координаты " << i+1 << " точки: " << points[i].x << " " << points[i].y << "\n";
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

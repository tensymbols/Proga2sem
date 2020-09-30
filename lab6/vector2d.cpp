#include "vector2d.h"
#include <math.h>
Vector2d::Vector2d(const Vector2d& other)
{
	x = other.x;
	y = other.y;
}
Vector2d::Vector2d(double x, double y) : x(x), y(y)
{
}
bool Vector2d::operator==(const Vector2d& other) const
{
	return (this->getMagnitude() == other.getMagnitude());
}
bool Vector2d::operator> (const Vector2d& other) const
{
	return (this->getMagnitude() > other.getMagnitude());
}

bool Vector2d::operator<(const Vector2d& other) const
{
	return (this->getMagnitude()<other.getMagnitude());
}

bool Vector2d::operator>=(const Vector2d& other) const
{
	return (this->getMagnitude() >= other.getMagnitude());
}

bool Vector2d::operator<=(const Vector2d& other) const
{
	return (this->getMagnitude() <= other.getMagnitude());
}

bool Vector2d::operator==(const double value) const
{
	return this->getMagnitude() == value;
}

bool Vector2d::operator>(const double value) const
{
	return this->getMagnitude() > value;
}

bool Vector2d::operator<(const double value) const
{
	return this->getMagnitude() < value;
}

bool Vector2d::operator>=(const double value) const
{
	return this->getMagnitude() >= value;
}

bool Vector2d::operator<=(const double value) const
{
	return this->getMagnitude() <= value;
}

Vector2d Vector2d::operator=(const Vector2d& other)
{
	x = other.x;
	y = other.y;
	return *this;
}

double Vector2d::getX() const
{
	return x;
}

double Vector2d::getY() const
{
	return y;
}

void Vector2d::setX(double value)
{
	x = value;
}

void Vector2d::setY(double value)
{
	y = value;
}

double Vector2d::getMagnitude() const
{
	double x2 = x * x;
	double y2 = y * y;
	double result = x2 + y2;
	return sqrt(result);
}

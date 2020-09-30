#pragma once

class Vector2d {
public:
	Vector2d() = default;
	Vector2d(const Vector2d& other);
	Vector2d(double x, double y);
	bool operator==(const Vector2d& other) const ;
	bool operator>(const Vector2d& other) const;
	bool operator<(const Vector2d& other) const;
	bool operator>=(const Vector2d& other) const;
	bool operator<=(const Vector2d& other) const;
	bool operator==(const double) const;
	bool operator>(const double) const;
	bool operator<(const double) const;
	bool operator>=(const double) const;
	bool operator<=(const double) const;
	Vector2d operator=(const Vector2d& other);

	double getX() const;
	double getY() const;
	void setX(double value);
	void setY(double value);
	double getMagnitude() const;
private:
	double x;
	double y;
};
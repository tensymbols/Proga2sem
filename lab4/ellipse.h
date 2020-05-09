#pragma once

#include "interfaces.h"

class Ellipse : public Figure {
public:

	double area() const override;
	double perimeter() const override;
	double mass() const override;
	CVector2D position() const override;

	bool operator==(const IPhysObject&) const;
	bool operator<(const IPhysObject&) const;

	void draw() const override;

	void initFromDialog() override;

	const char* classname() const override;

	unsigned int size() const override;

private:
	CVector2D center;
	double r1;
	double r2;

	double density;
};
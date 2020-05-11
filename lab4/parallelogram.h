#pragma once

#include "interfaces.h"

class Parallelogram : public Figure {
public:
	
	double area() const override ;
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
	CVector2D points[4];
	
	double density=0.0;
};
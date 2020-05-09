#pragma once

#include "interfaces.h"

class Parallelogram : public IGeoFig, public CVector2D,
public IPhysObject, public IPrintable, public IDialogInitiable, public BaseCObject {
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

	unsigned int size() override;

private:
	CVector2D points[4];
	
	double density;
};
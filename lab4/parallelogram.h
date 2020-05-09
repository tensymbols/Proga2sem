#pragma once
#include <vector>
#include "interfaces.h"

class Parallelogram : public IGeoFig, public CVector2D,
public IPhysObject, public IPrintable, public IDialogInitiable, public BaseCObject {
public:
	Parallelogram(const CVector2D&, const CVector2D&, const CVector2D&);
	double area();
	double perimeter();
	double mass() const;
	CVector2D Position();

	bool operator==(const IPhysObject&) const;
	bool operator<(const IPhysObject&) const;

	void draw();

	void initFromDialog();

	const char* classname();

	unsigned int size();

	CVector2D points[4];

};
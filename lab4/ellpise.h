#pragma once

#include "interfaces.h"

class Ellipse : public IGeoFig, public CVector2D,
	public IPhysObject, public IPrintable, public IDialogInitiable, public BaseCObject {
public:
	Ellipse();
	double area();
	double perimeter();
	double mass();
	CVector2D Position();

	bool operator==(const IPhysObject&) const;
	bool operator<(const IPhysObject&) const;

	void draw();

	void initFromDialog();

	const char* classname();

	unsigned int size();

};
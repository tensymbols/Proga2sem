#pragma once
#include <iostream>
#include <vector>

using std::cout;
using std::cin;

class IGeoFig {
public:
	
	virtual double area() const = 0;

	virtual double perimeter() const = 0;
};

class CVector2D {
public:
	double x, y;
};


class IPhysObject {
public:

	virtual double mass() const = 0;

	virtual CVector2D position() const = 0; // ����� ����

	virtual bool operator== (const IPhysObject& ob) const = 0;

	virtual bool operator< (const IPhysObject& ob) const = 0;
};

class IPrintable {
public:

	virtual void draw() const = 0;
};

class IDialogInitiable {

	virtual void initFromDialog() = 0;
};

class BaseCObject {
public:

	virtual const char* classname() const = 0;

	virtual unsigned int size() = 0;
};

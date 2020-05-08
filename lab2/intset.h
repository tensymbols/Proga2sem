#pragma once
#include <vector>
#include<iostream>
using namespace std;

class intset
{
private:
	int maxSize;
	vector<int> IntSet;
public:
	intset(int max){

		maxSize = max;
	}
	vector<int>::iterator isInset(int );
	void removeElement(int );
	void addElement(int );
	vector<int> getIntersect(intset &);
	vector<int> getUnion(intset &);


};


#include "intset.h"
#include <iostream>

vector<int>::iterator intset::isInset(int x) {
	vector<int>::iterator it;
	it = find(IntSet.begin(), IntSet.end(), x);
	return it;
}

void intset::removeElement(int x)
{
	vector<int>::iterator it= isInset(x);
	if (it != IntSet.end()) IntSet.erase(it);
	else cout << "Oshibka! Nevozmozhno udalenie";
}

void intset::addElement(int x)
{
	if (this->IntSet.size() + 1 <= maxSize) {
		vector<int>::iterator it = isInset(x);
		if (it == IntSet.end()) IntSet.push_back(x);
	}
	else {
		cout << "Oshibka! Prevyshen maximalniy razmer";
	}
}

vector<int> intset::getIntersect(intset &other)
{
	vector<int> intersect;
	for (size_t i = 0; i < other.IntSet.size(); i++)
	{
		vector<int>::iterator it = isInset(other.IntSet[i]);
		if (it != IntSet.end()) intersect.push_back(other.IntSet[i]);

	}
	return intersect;
}

vector<int> intset::getUnion(intset& other)
{
	vector<int> intersect = getIntersect(other);

	vector<int> un;
	un.insert(un.end(), this->IntSet.begin(),this->IntSet.end());
	un.insert(un.end(), other.IntSet.begin(), other.IntSet.end());

	while (intersect.size() > 0) {
		for (size_t i = 0; i < un.size(); i++)
		{
			vector<int>::iterator it;
			it = find(intersect.begin(), intersect.end(), un[i]);
			if (it != intersect.end()) {
				un.erase(un.begin() + i);
				intersect.erase(it);
			}
		}

	}
	return un;
}


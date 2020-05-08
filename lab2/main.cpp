#include <iostream>
#include "intset.h"

using namespace std;
int main() {

	int maxSize;

	cout << "Vvedite max value:";
	cin >> maxSize;
	   	  
	intset set(maxSize);
	intset set2(maxSize);
	cout << "Vvedite mnozhestvo 1: \n";
	for (size_t i = 0; i < maxSize; i++)
	{
		int temp;
		cin >> temp;
		set.addElement(temp);
	}
	cout << "Vvedite mnozhestvo 2: \n";
	for (size_t i = 0; i < maxSize; i++)
	{
		int temp;
		cin >> temp;
		set2.addElement(temp);
	}

	vector<int> inters = set.getIntersect(set2);
	vector<int> un = set.getUnion(set2);
	cout << "\nPeresechenie: \n";
	for (size_t i = 0; i < inters.size(); i++)
	{
		cout <<inters[i] << " ";
	}
	cout << "\nOb'edinenie:";

	
	for (size_t i = 0; i < un.size(); i++)
	{
		cout << un[i] << " ";
	}
	cout << "\n";

}
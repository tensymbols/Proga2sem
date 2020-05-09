#include <iostream>
#include "fsystem.h"
#include "ellipse.h"
#include "parallelogram.h"


int main() {

	setlocale(LC_ALL, "Russian");

	FSystem fsystem;
	
	int q;
	cout << "���-�� �����: ";
	cin >> q;
	fsystem.SetQuantity(q);
	

	for (size_t i = 0; i < fsystem.GetQuantity(); i++)
	{
		int fig = 0;
		cout << "\n����� ������ ��������?\n1)��������������\n2)������\n";
		cin >> fig;
		switch (fig) {
			case 1: {
					Parallelogram* par = new Parallelogram;
					par->initFromDialog();
					fsystem.Add(par);
					break; 
				}
			case 2: {
				Ellipse* ell = new Ellipse;
				ell->initFromDialog();
				fsystem.Add(ell);
				break;
				}
			default: 
				cout << "�������� �����\n";
				i--;
		}
	}

	cout << "\n������ ����������������";

	while (true) {
		int num = 0;
		cout << "\n�������� ��������:\n";
		cout << "1) ������� ���������� � ������ �� ������\n";
		cout << "2) ������� ���������� � �������\n";
		cout << "3) ������������� ������ �� ����� � ������� �������� ����\n";

		cin >> num;
		if (num < 1 || num >3) {
			cout << "�������� �����\n";
		}
		else
			switch (num) {
			case 1:

				cout << "\n������� ����� ������(�� 1): ";
				int index;
				cin >> index;
				while (index<1 || index > fsystem.GetQuantity()) {

					cout << "\n�������� �����, ������� ����� ������ ��������3: ";
					cin >> index;
				}
				fsystem.Draw(index-1);
				break;
			case 2:
				cout << "\n��������� ������� �����: " << fsystem.areaSumm() << "\n";
				cout << "�������� �������� �����: " << fsystem.perimeterSumm() << "\n";
				CVector2D mcenter = fsystem.systemMassCenter();
				cout << "���������� ������ ���� �������: " << mcenter.x << " " << mcenter.y << "\n";
				cout << "������, ���������� ����� ������������ �������: " << fsystem.occupiedMemory() << " \n";
				break;
			case 3:
				cout << "\n����� ����� �� ����������:\n";
				fsystem.DrawMass();
				fsystem.sort();
				cout << "����� ����� ����� ����������:\n";
				fsystem.DrawMass();
				break;
			
		}

	}

	


}
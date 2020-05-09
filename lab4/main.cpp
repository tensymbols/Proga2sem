#include <iostream>
#include "fsystem.h"
#include "ellipse.h"
#include "parallelogram.h"


int main() {

	setlocale(LC_ALL, "Russian");

	FSystem fsystem;
	
	int q;
	cout << "Кол-во фигур: ";
	cin >> q;
	fsystem.SetQuantity(q);
	

	for (size_t i = 0; i < fsystem.GetQuantity(); i++)
	{
		int fig = 0;
		cout << "\nКакую фигуру добавить?\n1)Параллелограмм\n2)Эллипс\n";
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
				cout << "Неверный номер\n";
				i--;
		}
	}

	cout << "\nФигуры инициализированы";

	while (true) {
		int num = 0;
		cout << "\nВыберите действие:\n";
		cout << "1) Вывести информацию о фигуре по номеру\n";
		cout << "2) Вывести информацию о системе\n";
		cout << "3) Отсортировать фигуры по массе и вывести значения масс\n";

		cin >> num;
		if (num < 1 || num >3) {
			cout << "Неверный номер\n";
		}
		else
			switch (num) {
			case 1:

				cout << "\nВведите номер фигуры(от 1): ";
				int index;
				cin >> index;
				while (index<1 || index > fsystem.GetQuantity()) {

					cout << "\nНеверный номер, введите номер фигуры повторно3: ";
					cin >> index;
				}
				fsystem.Draw(index-1);
				break;
			case 2:
				cout << "\nСуммарная площадь фигур: " << fsystem.areaSumm() << "\n";
				cout << "Сумарный периметр фигур: " << fsystem.perimeterSumm() << "\n";
				CVector2D mcenter = fsystem.systemMassCenter();
				cout << "Координаты центра масс системы: " << mcenter.x << " " << mcenter.y << "\n";
				cout << "Память, занимаемая всеми экземплярами классов: " << fsystem.occupiedMemory() << " \n";
				break;
			case 3:
				cout << "\nМассы фигур до сортировки:\n";
				fsystem.DrawMass();
				fsystem.sort();
				cout << "Массы фигур после сортировки:\n";
				fsystem.DrawMass();
				break;
			
		}

	}

	


}
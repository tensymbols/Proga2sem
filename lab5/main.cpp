#include <iostream>
#include "fifo.h"
#include "maxelement.h"
#include <string>


int main() {

	setlocale(LC_ALL, "Russian");

	const int maxSize = 100;

	FIFO<maxSize,int> queue;




	try {
		for (size_t i = 0; i < maxSize+11; i++)
		{
			queue.push(i);
		}
	}
	catch( qOverflow& e){
		std::cout << e.what() << std::endl;
	}

	try {

		for (size_t i = 0; i < maxSize + 1; i++)
		{
			queue.pop();
		}
	}
	catch (qEmpty& e) {
		std::cout << e.what() << std::endl;
	}




	int int1;
	std::cin >> int1;
	int int2;
	std::cin >> int2;
	std::cout << maxElement<int>(int1, int2) << std::endl;

	std::string s1;
	std::cin >> s1;
	std::string s2;
	std::cin >> s2;

	std::cout << maxElement<std::string>(s1, s2) << std::endl;


}
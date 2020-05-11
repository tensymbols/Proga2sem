#include "FIFO.h"
#include <iostream>


void FIFO::operator>>(int num)
{
	if (Queue.size() + 1 < maxSize) {
		Queue.push_back(num);
	}
	else std::cout << "Достигнут максимальный размер\n";
}

void FIFO::operator<<(int &num)
{
	num = Queue[0];
}

void FIFO::Pop()
{
	if (!isEmpty()) {
		Queue.erase(Queue.begin());
	}
	else std::cout << "Очередь пуста\n";
}

bool FIFO::isEmpty()
{
	return (!Queue.size());
}


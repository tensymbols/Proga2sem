#include "FIFO.h"



void FIFO::operator>>(int num)
{
	Queue.push_back(num);
}

void FIFO::operator<<(int &num)
{
	num= Queue[0];
}

void FIFO::Pop()
{
	Queue.erase(Queue.begin());
}


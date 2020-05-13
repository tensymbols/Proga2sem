#include "fifo.h"

const char * qOverflow::what()
{
	return "Переполнение очереди";
}

const char * qEmpty::what()
{
	return "Изъятие элемента из пустой очереди";
}

const char * queueExcept::what()
{
	return "Queue exception";
}

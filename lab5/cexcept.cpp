#include "fifo.h"

const char * qOverflow::what()
{
	return "������������ �������";
}

const char * qEmpty::what()
{
	return "������� �������� �� ������ �������";
}

const char * queueExcept::what()
{
	return "Queue exception";
}

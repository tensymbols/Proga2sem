#pragma once
#include <iostream>


struct queueExcept : public std::exception {
	queueExcept(std::string);
	virtual const char* what();
};


struct qOverflow : public queueExcept {
	const char* what() override;
};

struct qEmpty : public queueExcept {
	const char* what() override;
};
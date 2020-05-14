#pragma once
#include <iostream>


struct queueExcept : public std::exception {

	virtual const char* what();
};


struct qOverflow : public queueExcept {
	const char* what() override;
};

struct qEmpty : public queueExcept {
	const char* what() override;
};
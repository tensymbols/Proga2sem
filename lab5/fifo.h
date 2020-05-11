#pragma once
#include <vector>

template <typename T>
class FIFO {
private:

	std::vector<T> qeueue;
public:
	void push(const T&);
	void pop();
	const& get();
};
#pragma once
#include <vector>
template <typename T>

class FIFO {
private:
	std::vector<T> queue;
public:
	void push(const T&);
	void pop();
	const& get();
};
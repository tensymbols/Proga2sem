#pragma once

#pragma once
#include <vector>
#include "cexcept.h"


template <int N, class T>
class FIFO {
private:
	int maxSize = N;
	std::vector<T> data;
public:
	void push(const T& element) {
		if (data.size() + 1 > maxSize) {
			throw qOverflow();
		}
		data.push_back(element);
	}
	void pop() {
		if (data.size() == 0) {
			throw qEmpty();
		}
		data.erase(data.begin());
	}
	const T& top() {
		if (data.size() == 0) {
			throw qEmpty();
		}
		return data[data.size() - 1];
	}
};



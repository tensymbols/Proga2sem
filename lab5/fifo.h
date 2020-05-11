#pragma once

#pragma once
#include <vector>


template <int N, class T>
class FIFO {
private:
	int maxSize = N;
	std::vector<T> data;
public:
	void push(const T& element) {
		data.push_back(element);
	}
	void pop() {
		data.erase(data.begin());
	}
	const T& top() {
		return data[data.size() - 1];
	}
};
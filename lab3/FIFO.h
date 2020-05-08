#pragma once
#include <vector>

using namespace std;

class FIFO {

public: 
	void operator>>(int num);
	void operator<<(int &num);
	void Pop();
private:
	vector<int> Queue;
	const int maxSize = 100;
};
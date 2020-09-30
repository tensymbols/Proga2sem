#include <iostream>
#include "algo.h"
#include "vector2d.h"
#include "pred.cpp"
#include <vector>
#include <algorithm>
using std::vector;
int main() {

	Vector2d v1(8.0, 7.4);
	Vector2d v2(16.8, 19.1);
	Vector2d v3(166.0, 19.0);
	Vector2d v4(v2);
	Vector2d v5(v1);

	vector<Vector2d> vectors;
	vectors.push_back(v1);
	vectors.push_back(v2);
	vectors.push_back(v3);
	vectors.push_back(v4);
	vectors.push_back(v5);

	if (isPalindrome(vectors.begin(), vectors.end(), foo2<Vector2d>)) {
		std::cout << "Palindrome\n";

	}
	else std::cout << "Not Palindrome\n";

	if (isSorted(vectors.begin(), vectors.end(), greater<Vector2d>)) {
		std::cout << "Sorted\n";

	}
	else std::cout << "Not Sorted\n ";

	for (size_t i = 0; i < vectors.size(); i++)
	{
		std::cout << vectors[i].getMagnitude() << " ";
	}
	std::cout << "\n";

	std::sort(vectors.begin(), vectors.end(), greater<Vector2d>);
	
	if (isSorted(vectors.begin(), vectors.end(), greater<Vector2d>)) {
		std::cout << "Sorted\n";

	}

	for (size_t i = 0; i < vectors.size(); i++)
	{
		std::cout << vectors[i].getMagnitude() << " ";
	}


}
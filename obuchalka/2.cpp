#include <iostream>
#include <vector>
#include <list>
#include <iterator>

template<class T> bool cmp_(const T& t1, const T& t2) {
	return t1 > t2;
}

 bool cmp_(std::string s1, std::string s2) {
	return  s1 > s2;
}



template<class T >const T maxof3(const T& t1, const T& t2, const T& t3) {
	T arr[] = { t1,t2,t3 };
	T maxElement = t1;

	for (T* ptr=arr; ptr != arr + 3; ptr++)
	{
		if (cmp_(*ptr, maxElement)) {
			maxElement = *ptr;
		}
	}
	return maxElement;
}
int main2() {

	std::cout << maxof3<std::string>("1","111","11");
	return 0;
}
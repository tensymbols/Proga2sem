#include <iostream>

template <class T1, class T2> struct based {

	based()=default;
	based(const T1& f, const T2& s) : first(f), second(s) {

	}

	template<class U1, class U2> based&
		operator=(const based<U1,U2> &other) {
		first = other.first;
		second = other.second;
		return *this;
	}

	T1 first;
	T2 second;
};
template <typename T> class cringe {

};

template <class T> const T& max(const T& a, const T& b) {
	return a > b ? a : b;
}

template <class T> void printT(const T& b) {
	std::cout << b<< std::endl;
}

template <class InputIt, class func> void foreach_(InputIt first, const InputIt last, const func& f) {
	for (; first!=last; first++)
	{
		f(*first);
	}
}

int main1() {
	double a= 10.22;
	double b = 14.88;

	based<int, char> para1(10, 'c');
	based<int, int> para2;

	para2 = para1;
	int arr[] = { 1,9,15,565,14,77 };

	//std::cout << max<double>(a, b);
	//foreach_(arr, arr+6, printT<int>);

	std::cout << para2.first << " "<< para2.second;
	return 0;
}
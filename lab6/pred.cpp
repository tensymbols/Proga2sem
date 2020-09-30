

template <class T> bool greater(const T& first, const T& second) {
	return first > second;
}

template <class T> bool less(const T& first, const T& second) {
	return first < second;
}

template <class T> bool foo1(const T& t) {
	return t > 0;
}

template <class T> bool foo2(const T& first, const T& second) {
	return first==second;
}
template <class T> bool foo3(const T& first, const T& second) {
	return first >10 && second > 10;
}
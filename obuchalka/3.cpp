#include <iostream>



struct struct_ {
	int x;
	int y;
};

template<class T> struct auto_ptr {
	explicit auto_ptr(T* ptr = nullptr) : ptr_(ptr) {
		
	}

	auto_ptr(const auto_ptr& other): ptr_(other.release()) {
	}

	T* release() {
		T* tmp = ptr_;
		ptr_ = nullptr;
		return tmp;
	}

	~auto_ptr() noexcept {
		delete ptr_;
	}

	T& operator *() const{
		return *ptr_;
	}

	T* operator->() const{
		return ptr_;
	}
private:
	T* ptr_;
};

int main3() {

	auto_ptr<struct_> ptr{ new struct_{1,2} };

	std::cout << ptr->x;

	return 0;
}
#pragma once

template<class T> 
class cBuffer {
public:
	explicit cBuffer(size_t capacity);

private:
	T* ptr_;
	size_t capacity;
	size_t currSize;
};
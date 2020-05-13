#pragma once

template <typename T> const T& maxElement(const T& e1, const T& e2) {
	return e1 < e2 ? e1 : e2;
}

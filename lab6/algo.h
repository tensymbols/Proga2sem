#pragma once

template <class iter, class Pred> bool any_Of( iter begin, iter end, Pred& Func){
	while (begin != end) {
		if (Func(*begin)) return true;
		begin++;
	}
	return false;
}

template <class iter, class Pred> bool isSorted( iter begin, iter end, Pred& func) {
	begin++;
	while (begin != end) {
		
		if (func(*begin,*( std::prev(begin) ))) return false;
		begin++;
	}
	return true;
}

template <class iter, class Pred> bool isPalindrome( iter begin,  iter end, Pred& Func) {

	if (begin == end) return true;

	end--;

	while (begin != end) {
		if (!Func(*begin, *end)) return false;
		begin++; 

		end--;
	}
	return true;
}

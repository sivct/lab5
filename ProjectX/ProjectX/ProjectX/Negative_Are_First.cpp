#include <iostream>
#include <algorithm>

void Negative_Are_First(int32_t* arr, int32_t size) {
	int32_t placefn{}; //fn - for negative
	
	for (int32_t i{}; i < size; ++i) {
		if ( arr[i] < 0 ) {
			if ( i != placefn ) {
				std::swap(arr[i], arr[placefn]);
			}
		
			++placefn;
		}
	}
}
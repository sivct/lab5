#ifndef PRINT_ARRAY_H
#define PRINT_ARRAY_H

#include <iostream>

template<class T>
void PrintArray(T* arr, int32_t& size) {
	for (int16_t i{}; i < size; ++i) {
		std::cout << arr[i] << ' ';
	}
}

void CLS();

#endif
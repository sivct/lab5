#include "Print_Array.h"

#include <iostream>

void PrintArray(int32_t* arr, int32_t& size) {
	for (int16_t i{}; i < size; ++i) {
		std::cout << arr[i] << ' ';
	}
}


void CLS() {
	std::cout << "Хотите очистить экран?[y/n]: ";
	system("CLS");
}
#include "Fill_Arr.h"

#include <iostream>

void FillArr(int32_t* arr, int32_t size) {
	std::cout << "¬ведите все элементы массива >> ";
	for (size_t number{ 0 }; number < size; ++number) {
		std::cin >> arr[number];
	}
}

void RandFillArr(int32_t* arr, int32_t size) {
	srand(time(NULL));
	for (size_t i{}; i < size; ++i) {
		arr[i] = { rand() % 100 - 50 };
	}
}

void InputSize(int32_t& size) {
	std::cout << "Enter size >> ";
	std::cin >> size;
	if (size < 1) {
		throw "size < 1...";
	}
}
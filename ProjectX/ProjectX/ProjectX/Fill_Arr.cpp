#include "Fill_Arr.h"

#include <iostream>
#include <random>

void FillArr(int32_t* arr, int32_t size) {
	std::cout << "¬ведите все элементы массива >> ";
	for (size_t number{ 0 }; number < size; ++number) {
		std::cin >> arr[number];
	}
}

void RandFillArr(int32_t* arr, int32_t size) {
	int32_t n{}, m{};
	std::cout << "¬ведите диапозон элементов >> ";
	std::cin >> n >> m;
	if (n > m) {
		int32_t temp{ n };
		n = m;
		m = temp;
	}
	
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dist(n, m);
	
	for (size_t i{}; i < size; ++i) {
		arr[i] = { dist(gen) };
	}
}

void InputSize(int32_t& size) {
	std::cout << "Enter size >> ";
	std::cin >> size;
	if (size < 1) {
		throw "size < 1...";
	}
}
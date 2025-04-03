#include <iostream>
#include <random>
#include "CreateDinArr.h"

void CreateArr(double*& arr, int32_t size) {
	arr = new double[size];
}

void DelArr(double*& arr) {
	delete[]arr;
}

void RandRealFillArr(double* arr, int32_t size) {
	double n{}, m{};
	std::cout << "Введите диапозон элементов >> ";
	std::cin >> n >> m;
	if (n > m) {
		double temp{ n };
		n = m;
		m = temp;
	}

	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_real_distribution<> dist(n, m);

	for (size_t i{}; i < size; ++i) {
		arr[i] = { dist(gen) };
	}
}
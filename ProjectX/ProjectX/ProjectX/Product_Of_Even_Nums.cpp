#include "Product_Of_Even_Nums.h"
#include <iostream>

long long ProductOfEvenNums(int32_t* arr, int32_t size) {
	if (size == 0) {
		throw "Вы не ввели массив( Пожалуйста Заполните его.";
	}
	long long product{1};
	for (int32_t i{1}; i < size; i += 2) {
		product *= arr[i];
	}
	return product;
}
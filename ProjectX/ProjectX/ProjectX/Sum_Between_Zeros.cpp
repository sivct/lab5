#include <iostream>

int32_t Find_First_Null(int32_t* arr, int32_t size) {
	int32_t index_of_null{ -1 };
	for (int32_t i{}; i < size; ++i) {
		if (arr[i] == 0 || arr[i] == '0') {
			index_of_null = i;
			break;
		}
	}
	return index_of_null;
}

int32_t Find_Second_Null(int32_t* arr, int32_t size) {
	int32_t index_of_null{ -1 };
	for (int32_t i{}; i < size; ++i) {
		if (arr[i] == 0 || arr[i] == '0') {
			index_of_null = i;
		}
	}
	return index_of_null;
}

int32_t SumBetweenZeros(int32_t* arr, int32_t size) {
	if (size == 0) {
		throw "Вы не ввели массив( Пожалуйста Заполните его.";
	}
	int32_t sum{};
	int32_t index_of_first_null{ Find_First_Null(arr, size) };
	int32_t index_of_last_null{ Find_Second_Null(arr, size) };
	
	for (index_of_first_null + 1; index_of_first_null < index_of_last_null; ++index_of_first_null) {
		sum += arr[index_of_first_null];
	}
	return sum;
}

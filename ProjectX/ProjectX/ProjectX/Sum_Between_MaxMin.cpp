#include <iostream>
#include "Sum_Between_MaxMin.h"

int32_t MaxElement(double* arr, int32_t size) {
	int32_t maxIndex{};
	double maxValue{ arr[0] };
	for (int32_t i{}; i < size; ++i) {
		if (arr[i] > maxValue) {
			maxValue = arr[i];
			maxIndex = i;
		}
	}
	return maxIndex;
}


int32_t MinElement(double* arr, int32_t size) {
	int32_t minIndex{};
	double minValue{ arr[0] };
	for (int32_t i{}; i < size; ++i) {
		if (arr[i] <= minValue) {
			minValue = arr[i];
			minIndex = i;
		}
	}
	return minIndex;
}


double SumBetweenMaxMin(double* arr, int32_t size) {
	int32_t max{ MaxElement(arr, size) };
	int32_t min{ MinElement(arr, size) };
	double sum{};
	if (max < min) {
		int32_t temp{ max };
		max = min;
		min = temp;
	}

	for (int32_t i{ min }; i <= max; ++i) {
		sum += arr[i];
	}
	return sum;
}

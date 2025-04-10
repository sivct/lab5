#include "InsertSort.h"

void insertionSort(double* array, int32_t length) {
    for (int32_t currentIndex = 1; currentIndex < length; currentIndex++) {
        double currentElement = array[currentIndex];
        int32_t sortedIndex = currentIndex - 1;

        while (sortedIndex >= 0 && array[sortedIndex] > currentElement) {
            array[sortedIndex + 1] = array[sortedIndex];
            sortedIndex = sortedIndex - 1;
        }

        array[sortedIndex + 1] = currentElement;
    }
}

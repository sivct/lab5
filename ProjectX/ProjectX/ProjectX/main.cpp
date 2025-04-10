#include <iostream>

#include "Print_Array.h"
#include "Fill_Arr.h"
#include "Product_Of_Even_Nums.h"
#include "Sum_Between_Zeros.h"
#include "Negative_Are_First.h"
#include "CreateDinArr.h"
#include "Sum_Between_MaxMin.h"
#include "InsertSort.h"



void Menu();

int main() {
	setlocale(LC_ALL, "Rus");
	const int32_t MAX_SIZE{ 100 };
	int32_t arr[MAX_SIZE];
	int32_t size{};
	uint16_t switch_on{};

	double* dinarr{ nullptr };

	while (true) {
		Menu();
		std::cout << "Номер задачи == ";
		std::cin >> switch_on;

		try {
			switch (switch_on) {
			default:
				break;
			case 1:
				std::cout << std::endl;
				PrintArray(arr, size);
				std::cout << std::endl << std::endl;
				break;
			case 2:
				InputSize(size);
				FillArr(arr, size);
				break;
			case 3:
				InputSize(size);
				RandFillArr(arr, size);
				break;
			case 4:
				std::cout << "Произведение элементов массива с четными номерами равно " << ProductOfEvenNums(arr, size) << std::endl;
				break;
			case 5:
				std::cout << "Сумма элементов массива, расположенных между первым и последним нулевыми элементами ровна " << SumBetweenZeros(arr, size) << std::endl;
				break;
			case 6:
				Negative_Are_First(arr, size);
				break;
			case 7:
				InputSize(size);
				CreateArr(dinarr, size);
				RandRealFillArr(dinarr, size);
				break;
			case 8:
				std::cout << SumBetweenMaxMin(dinarr, size);
				break;
			case 9:
				std::cout << std::endl;
				PrintArray(dinarr, size);
				std::cout << std::endl << std::endl;
				break;
			case 10:
				insertionSort(dinarr, size);
				break;
			case 11:
				CLS();
				break;
			case 12:
				DelArr(dinarr);
				return 0;
			}
		}
		catch (std::invalid_argument& e) {
			std::cerr << "Неверный аргумент: " << e.what() << std::endl;
		}
		catch (std::bad_alloc& e) {
			std::cerr << "Ошибка выделения памяти: " << e.what() << std::endl;
		}
		catch (std::exception& e) {
			std::cerr << "Общее исключение: " << e.what() << std::endl;
		}
		catch (const char* e) {
			std::cout << e << std::endl;
		}
		catch (...) {
			std::cerr << "Error(" << std::endl;
		}
	}


	return 0;
}


void Menu() {
	std::cout << "[1]PrintArray, вывести элементы целочисленного массива; \n[2]Ввести элементы массива через консоль; \n[3]Заполнение массива рандомными элементами;\n"
		<< "[4]Произведение элементов массива с четными номерами; \n[5]Сумма элементов массива, расположенных между первым и последним нулевыми элементами; \n"
		<< "[6]Преобразовать массив таким образом, чтобы сначала располагались все отрицательные элементы, а потом - все остальные; \n"
		<< "[7]Создание и заполнение динамического массива из вещественных элементов; \n[8]Сумма между первым максимальным и последним минимальным элементами; \n"
		<< "[9]PrintArray, вывести элементы вещественного массива; \n [10]Расположить элементы массива по возрастанию; \n[11]Очистить экран; \n[12]Выход.\n";
}
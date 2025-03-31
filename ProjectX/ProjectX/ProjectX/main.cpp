#include <iostream>

#include "Print_Array.h"
#include "Fill_Arr.h"

void InputSize(int32_t&);



int main() {
	setlocale(LC_ALL, "Rus");
	const int32_t MAX_SIZE{ 100 };
	int32_t arr[MAX_SIZE];
	int32_t size{};
	uint8_t switch_on{};

	while (true) {
		std::cout << "[1]PrintArray, вывести элементы массива на консоль; \n[2]Ввести элементы массива через консоль; \n[3]Заполнение массива рандомными элементами;\n"
			<< "[5]Очистить экран; \n[6]Выход.\n";
		std::cout << "Номер задачи == ";
		std::cin >> switch_on;

		try {
			switch (switch_on) {
			default:
				break;
			case '1':
				PrintArray(arr, size);
				std::cout << std::endl << std::endl;
				break;
			case '2':
				InputSize(size);
				FillArr(arr, size);
				break;
			case '3':
				InputSize(size);
				RandFillArr(arr, size);
				break;
			case '5':
				CLS();
				break;
			case '6':
				return 0;
			}
		}
		catch (std::invalid_argument& e) {
			std::cerr << e.what() << std::endl;
		}
		catch (std::bad_alloc& e) {
			std::cerr << e.what() << std::endl;
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


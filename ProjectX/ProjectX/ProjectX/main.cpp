#include <iostream>

#include "Print_Array.h"
#include "Fill_Arr.h"
#include "Product_Of_Even_Nums.h"
#include "Sum_Between_Zeros.h"
#include "Negative_Are_First.h"

void InputSize(int32_t&);



int main() {
	setlocale(LC_ALL, "Rus");
	const int32_t MAX_SIZE{ 100 };
	int32_t arr[MAX_SIZE];
	int32_t size{};
	uint8_t switch_on{};

	while (true) {
		std::cout << "[1]PrintArray, ������� �������� ������� �� �������; \n[2]������ �������� ������� ����� �������; \n[3]���������� ������� ���������� ����������;\n"
			<< "[4]������������ ��������� ������� � ������� ��������; \n[5]����� ��������� �������, ������������� ����� ������ � ��������� �������� ����������; \n"
			<< "[6]������������� ������ ����� �������, ����� ������� ������������� ��� ������������� ��������, � ����� - ��� ���������; \n[7]�������� �����; \n[8]�����.\n";
		std::cout << "����� ������ == ";
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
			case '4':
				std::cout << "������������ ��������� ������� � ������� �������� ����� " << ProductOfEvenNums(arr, size) << std::endl;
				break;
			case '5':
				std::cout << "����� ��������� �������, ������������� ����� ������ � ��������� �������� ���������� ����� " << SumBetweenZeros(arr, size) << std::endl;
				break;
			case '6':
				Negative_Are_First(arr, size);
				break;
			case '7':
				CLS();
				break;
			case '8':
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


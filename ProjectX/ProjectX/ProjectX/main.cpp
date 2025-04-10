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
		std::cout << "����� ������ == ";
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
				std::cout << "������������ ��������� ������� � ������� �������� ����� " << ProductOfEvenNums(arr, size) << std::endl;
				break;
			case 5:
				std::cout << "����� ��������� �������, ������������� ����� ������ � ��������� �������� ���������� ����� " << SumBetweenZeros(arr, size) << std::endl;
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
			std::cerr << "�������� ��������: " << e.what() << std::endl;
		}
		catch (std::bad_alloc& e) {
			std::cerr << "������ ��������� ������: " << e.what() << std::endl;
		}
		catch (std::exception& e) {
			std::cerr << "����� ����������: " << e.what() << std::endl;
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
	std::cout << "[1]PrintArray, ������� �������� �������������� �������; \n[2]������ �������� ������� ����� �������; \n[3]���������� ������� ���������� ����������;\n"
		<< "[4]������������ ��������� ������� � ������� ��������; \n[5]����� ��������� �������, ������������� ����� ������ � ��������� �������� ����������; \n"
		<< "[6]������������� ������ ����� �������, ����� ������� ������������� ��� ������������� ��������, � ����� - ��� ���������; \n"
		<< "[7]�������� � ���������� ������������� ������� �� ������������ ���������; \n[8]����� ����� ������ ������������ � ��������� ����������� ����������; \n"
		<< "[9]PrintArray, ������� �������� ������������� �������; \n [10]����������� �������� ������� �� �����������; \n[11]�������� �����; \n[12]�����.\n";
}
#include <iostream>

void task1_1();
void task1_2();
void task1_3();
void task1_4();

int main() {
	int choice;

	std::cout << "Урок 1. Одномерные массивы.\n";
	std::cout << "Введите 1. Задание 1. Многоквартирный дом\n";
	std::cout << "Введите 2. Задание 2. Сортировка\n";
	std::cout << "Введите 3. Задание 3. Использование assert\n";
	std::cout << "Введите 4. Задание 4. Ряд чисел\n";
	std::cout << "\n";
	std::cout << "Урок 2. Знакомство с std::vector v2.\n";
	std::cout << "Введение в тип vector.\n";
	std::cout << "Введите 5. Задание 1.\n";
	std::cout << "Введите 6. Задание 2.\n";
	std::cout << "Введите 7. Задание 3.\n";

	std::cin >> choice;

	switch (choice) {

	case 1: task1_1(); break;
	case 2: task1_2(); break;
	case 3: task1_3(); break;
	case 4: task1_4(); break;
	case 4: task2_1(); break;
	case 4: task2_(); break;
	case 4: task1_4(); break;
	case 4: task1_4(); break;
	default: std::cout << "Invalid choice...\n";

	}
	
	return 0;
}

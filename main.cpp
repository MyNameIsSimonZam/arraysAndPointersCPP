#include <iostream>

void task1();
void task2();
void task3();
void task4();

int main() {
	int choice;

	std::cout << "1. Задание 1. Многоквартирный дом\n";
	std::cout << "2. Задание 2. Сортировка\n";
	std::cout << "3. Задание 3. Использование assert\n";
	std::cout << "4. Задание 4. Ряд чисел\n";

	std::cin >> choice;

	switch (choice) {

	case 1: task1(); break;
	case 2: task2(); break;
	case 3: task3(); break;
	case 4: task4(); break;
	default: std::cout << "Invalid choice...\n";

	}
	
	return 0;
}

#include <iostream>

void task1_1();
void task1_2();
void task1_3();
void task1_4();
void task2_1();
void task2_2();
void task2_3();
void task3_1();
void task3_2();
void task3_3();

int main() {
	int choice;

	std::cout << "Урок 1. Одномерные массивы.\n";
	std::cout << "Введите 1. Задание 1. Многоквартирный дом\n";
	std::cout << "Введите 2. Задание 2. Сортировка\n";
	std::cout << "Введите 3. Задание 3. Использование assert\n";
	std::cout << "Введите 4. Задание 4. Ряд чисел\n";
	std::cout << "\n";
	std::cout << "Урок 2. Знакомство с std::vector v2.\n";
	std::cout << "1. Введение в тип vector\n";
	std::cout << "Введение в тип vector.\n";
	std::cout << "Введите 5. Задание 1.\n";
	std::cout << "Введите 6. Задание 2.\n";
	std::cout << "Введите 7. Задание 3.\n";
	std::cout << "2. Добавление элемента в конец вектора\n";
	std::cout << "Введите 8. Задание 1. Очередь из роботов\n";
	std::cout << "Введите 9. Задание 2. Лечебница\n";
	std::cout << "Введите 10. Задание 3. Роботы и коррупция*\n";

	std::cin >> choice;

	switch (choice) {

	case 1: task1_1(); break;
	case 2: task1_2(); break;
	case 3: task1_3(); break;
	case 4: task1_4(); break;
	case 5: task2_1(); break;
	case 6: task2_2(); break;
	case 7: task2_3(); break;
	case 8: task3_1(); break;
	case 9: task3_2(); break;
	case 10: task3_3(); break;
	default: std::cout << "Invalid choice...\n";

	}
	
	return 0;
}

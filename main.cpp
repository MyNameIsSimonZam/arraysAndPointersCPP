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
void task4_1();
void task4_2();
void task4_3();
void task4_4();
void task4_5();
void task5_1();
void task5_2();
void task5_3();
void task6_1();
void task6_2();
void task6_3();
void task6_4();
void task6_5();
void task6_6();
void task7_1();
void task7_2();
void task7_3();
void task7_4();
void task8_1();
void task8_2();
void task8_3();


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
  std::cout << "3. Удаление элемента со сдвигом\n";
  std::cout << "Введите 11. Задание 1.\n";
  std::cout << "Введите 12. Задание 2.\n";
  std::cout << "4. Использование push_back()\n";
  std::cout << "Введите 13. Задание 1.\n";
  std::cout << "Введите 14. Задание 2.\n";
  std::cout << "Введите 15. Задание 3.\n";
  std::cout << "5. Практическая работа\n";
  std::cout << "Введите 16. Задание 1.\n";
  std::cout << "Введите 17. Задание 2.\n";
  std::cout << "Введите 18. Задание 3.\n";
  std::cout << "\n";
  std::cout << "Урок 3. Двумерные массивы и алгоритмы над ними\n";
  std::cout << "Введите 19. Задание 1. Банкетный стол\n";
  std::cout << "Введите 20. Задание 2. Крестики-нолики\n";
  std::cout << "Введите 21. Задание 3. Матрицы\n";
  std::cout << "Введите 22. Задание 4. Умножение матрицы на вектор\n";
  std::cout << "Введите 23. Задание 5. Пупырка\n";
  std::cout << "Введите 24. Задание 6. Проход змейкой\n";
  std::cout << "\n";
  std::cout << "Урок 4. Алгоритмы на массивах\n";
  std::cout << "Введите 25. Задача 1.\n";
  std::cout << "Введите 26. Задача 2.\n";
  std::cout << "Введите 27. Задача 3.\n";
  std::cout << "Введите 28. Задача 4.\n";
  std::cout << "\n";                                  
  std::cout << "Урок 5. Типы данных\n";
  std::cout << "Нет практической работы\n";
  std::cout << "Урок 6. Указатели\n";
  std::cout << "Введите 29. Задание 1.\n";
  std::cout << "Введите 30. Задание 2.\n";
  std::cout << "Введите 31. Задание 3.\n";


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
  case 11: task4_1(); break;
  case 12: task4_2(); break;
  case 13: task4_3(); break;
  case 14: task4_4(); break;
  case 15: task4_5(); break;
  case 16: task5_1(); break;
  case 17: task5_2(); break;
  case 18: task5_3(); break;
  case 19: task6_1(); break;
  case 20: task6_2(); break;
  case 21: task6_3(); break;
  case 22: task6_4(); break;
  case 23: task6_5(); break;
  case 24: task6_6(); break;
  case 25: task7_1(); break;
  case 26: task7_2(); break;
  case 27: task7_3(); break;
  case 28: task7_4(); break;
  case 29: task8_1(); break;
  case 30: task8_2(); break;
  case 31: task8_3(); break;

  default: std::cout << "Invalid choice...\n";
  }

  return 0;
}

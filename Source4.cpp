#include <iostream>
#include <vector>
#include <algorithm>
#include "utils.h"


/*Задание 1
С помощью push_back() реализуйте очередь из роботов-андроидов.
Роботы приходят в очередь и называют(вводят с клавиатуры)
свои порядковые номера (целые положительные).
Последний робот в очереди всегда имеет номер -1.
Когда он пришёл, необходимо вывести на экран все номера в очереди.*/

void task4_3() {
  std::vector<int> robots;
  int robots_number;

  std::cout << "Enter robots numbers: \n";
  std::cin >> robots_number;
  robots.push_back(robots_number);

  for (int i = 0; robots[i] != -1; ++i) {
    std::cin >> robots_number;
    robots.push_back(robots_number);
  }

  print_vector(robots);
}

/*Задание 2
Робот приходит в очередь и заставляет уходить из конца очереди всех,
чей номер меньше, чем у него, а потом становится в очередь сам.
Последний робот будет иметь номер -1 (и, соответственно, не сможет никого выгнать,
так как остальные имеют положительные номера).
Когда он пришёл, нужно вывести все номера в очереди на экран.*/

void task4_4() {
  std::vector<int> robots;
  int robots_number;

  std::cout << "Enter robots numbers: \n";
  std::cin >> robots_number;
  robots.push_back(robots_number);

  while (robots.back() != -1) {
    std::cin >> robots_number;

    while (!robots.empty() && robots_number > robots.back()) {
      robots.pop_back();
    }

    robots.push_back(robots_number);
  }
  robots.pop_back();
  print_vector(robots);
}

/*
Задание 3 (необязательное)
Роботы приходят в очередь и называют(вводят с клавиатуры) свои порядковые номера
(целые положительные). Комната, в которой роботы-андроиды занимают своё место,
имеет ограниченный размер (который равен capacity вектора, в который вы их записываете).
Когда комната заполняется, роботам приходится “переходить” в другую комнату,
чуть больше (но вы этого не видите). Необходимо отследить, когда в комнате будет
оставаться всего 2 свободных места для роботов, и вывести сообщение об этом на экран.
Последний робот будет иметь номер -1.
ОТСЛЕЖИВАЕМ ИЗМЕНЕНИЕ CAPACITY, КОГДА БУДЕТ ИЗМЕНЕНО, СДЕЛАЕМ УВЕДОМЛЕНИЕ - 2
*/

void task4_5() {
  std::vector<int> robots;
  int robots_number;

  std::cout << "Enter robots numbers: \n";

  while (true) {
    std::cin >> robots_number;
    robots.push_back(robots_number);
    if (robots.size() == robots.capacity() - 2) 
      std::cout << "After adding 2 robots we'll make capacity bigger (change the room): \n";
    if (robots.back() == -1) break;
  }

  if (!robots.empty()) robots.pop_back();
  print_vector(robots);
}


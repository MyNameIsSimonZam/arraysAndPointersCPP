#include <iostream>
#include <vector>
#include <algorithm>
#include "utils.h"
#include <cassert>


/*Задание 1
На витрине стоят несколько роботов, у каждого есть свой номер. Номера задаются с клавиатуры
(сначала вводится число n, потом -- n номеров роботов).
Далее вводится число m и после этого -- m индексов (от 0 до количества оставшихся роботов на витрине).
Когда введён очередной индекс -- робота покупают, то есть он покидает витрину,
а остальные роботы “группируются”, смещаясь на один шаг назад.
Необходимо вывести список оставшихся, после всех покупок, роботов.

Пример: на витрине стояли роботы {100, 200, 250, 300}.
Сначала забрали робота с индексом 1, то есть с номером 200, осталось {100,250,300}.
Потом забрали робота с индексом 1, то есть с номером 250, осталось {100,300}
(resize было в теории)
*/

void task4_1() {
  int robots_count;
  std::cout << "Enter count of robots: ";
  std::cin >> robots_count;
  std::vector<int> robots(robots_count);
  fill_vector(robots);
  print_vector(robots);

  int bought_count;
  int bought_robot;

  std::cout << "\n" << "Enter how many robots will be bought: ";
  std::cin >> bought_count;

  for (int i = 0; i < bought_count; ++i) {
    std::cout << "Enter the robot you want to buy now (from 0 till " << bought_count << "): ";
    std::cin >> bought_robot;
    delete_position(robots, bought_robot);
  }
  print_vector(robots);
};

/*Задание 2
Представим, что роботов могут не только покупать, забирая с витрины, но и “выставлять”
в конец витрины. Пусть с клавиатуры вводят число K, а потом -- K запросов вида “1 n” и “2 m”.
Запрос вида “1 n” означает, что в конец витрины поставили робота номер n.
Запроc “2 m” означает, что из витрины забрали робота по индексу m.
Необходимо смоделировать такое взаимодействие и после проведения всех запросов вывести на экран
оставшихся на витрине роботов.
*/

void task4_2() {
  int request_count;
  std::cout << "Enter count of request: ";
  std::cin >> request_count;
  std::vector<int> robots;

  int action, value;

  for (int i = 0; i < request_count; ++i) {
    std::cout << "Enter your request (1 - add and Number, 2 - delete and Index): ";
    std::cin >> action >> value;
    assert(action == 1 || action == 2);
    if (action == 2 && (value >= robots.size() || value < 0)) {
      std::cout << "You can't delite unexist index\n";
      break;
    }
    (action == 1) ? push_back_custom(robots, value) : delete_position(robots, value);
  }
  print_vector(robots);
};
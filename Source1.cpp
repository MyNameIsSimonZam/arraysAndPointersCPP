#include <iostream>
#include <vector>
#include <algorithm>
#include "utils.h"

void task2_1() {
  int size;
  std::cout << "Enter the vector size:";
  std::cin >> size;

  std::vector<int> vec(size);
  fill_vector(vec);

  int sum = 0;
  for (int i = 0; i < vec.size(); ++i) {
    sum += vec[i];
  }

  std::cout << "Average value: " << sum / vec.size() << "\n";

};

/*Задание 2
Пользователь вводит с клавиатуры число n, а затем -- n действительных (дробных) чисел.
Необходимо вывести их все в обратном порядке
(то есть сначала то число, которые пользователь ввел последним и так далее).*/

void task2_2() {
  int size;
  std::cout << "Enter the vector size:";
  std::cin >> size;
  std::vector<int> vec(size);
  fill_vector(vec);
  std::reverse(vec.begin(), vec.end());
  print_vector(vec);
};

/*Задание 3
Пользователь вводит с клавиатуры число n, а затем -- n целых чисел.
Необходимо отыскать второе по величине из этих чисел и вывести на экран.*/

void task2_3() {
  int size;
  std::cout << "Enter the vector size:";
  std::cin >> size;
  std::vector<int> vec(size);
  fill_vector(vec);

  int previous_max = vec[0];
  int max = vec[0];
  for (int i = 0; i < vec.size(); ++i) {
    if (vec[i] > max) {
      previous_max = max;
      max = vec[i];
    }
  }
  std::cout << "Previous max = " << previous_max << "\n";
};